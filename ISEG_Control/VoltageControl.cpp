#include "stdafx.h"
#include <stdint.h>


//define hex codes for iseg module status
#define isnoSERR 0x100

//define hex codes for iseg channel status
#define IERR 0x4
#define isON 0x8
#define isRAMP 0x10
#define isEMCY 0x20
#define isCC 0x40
#define isCV 0x80
#define isCBND 0x400
#define isVBND 0x800
#define isEINH 0x1000
#define isTRP 0x2000
#define isCLIM 0x4000
#define isVLIM 0x8000


using namespace System;
using namespace System::Windows::Forms;


//***********************************************************
//
//          Voltage Controller Communication
//
//***********************************************************

VoltControl::VoltControl()  {}

VoltControl::~VoltControl() {}

//***************** M O D U L E ******************************

void VoltControl::Connect_CAN()
{
	Quit_OPC();

	Status_CAN="connecting to OPC";
	Status_CAN_Color=System::Drawing::Color::DarkGreen;

	int version = opc_getVersion();
	
	//printf("Version:        %08x", version);
	if (!(version >= 0x01010000 && version <= 0x01020000))
	{
		//OPC version error
		Status_CAN="OPC Version Error";
		Status_CAN_Color=System::Drawing::Color::Red;
		return;
	}

	//printf("\nVersion string: %s\n", opc_getVersionString());

	// Init an OPC connection to the iseg OPC Server.
	// If the server is not running, it will be started automatically.
	// return (int):  0..OK  1..Error
		
	try
	{
		if(opc_init(Global::OPC_update_rate))
		{
			Status_CAN="OPC Connection Failed";
			Status_CAN_Color=System::Drawing::Color::Red;
			return;
		}
	}
	catch (Threading::ThreadAbortException^ e)
	{
		static_cast<void>(e);
		Status_CAN="OPC Connection Failed";
		Status_CAN_Color=System::Drawing::Color::Red;
		return;
	}

	bool ok;
	unsigned long result;

	// Query HeartBeat three times, it should be 2 then
	for (int i = 0; i < 3; ++i)
		result = opc_getUnsignedLong("Status.HeartBeat", &ok);

	if ((ok)&&(result>=2))
	{
		CAN_connected=true;
		Status_CAN="CAN connected";
		Status_CAN_Color=System::Drawing::Color::DarkGreen;
	}
		
	else
	{
		Status_CAN="CAN connection failed";
		Status_CAN_Color=System::Drawing::Color::Red;
		return;
	}
		
}

void VoltControl::Check_Status_CAN()
{
// Query the CAN bus status
	bool ok;
	const char* test = opc_getString("Status.CAN", &ok);
	String^ Stat = gcnew String (test);
	if (!ok)
	{
		Status_CAN="Query CAN-Status failed!";
		Status_CAN_Color=System::Drawing::Color::Red;
		return;
	}
	else
	{
		Status_CAN=Stat;
	
		if (Status_CAN=="OK" || Status_CAN=="BUSLIGHT")
		{
			Status_CAN_Color=System::Drawing::Color::DarkGreen;
		}
		else
		{
			Status_CAN_Color=System::Drawing::Color::Red;
			CAN_connected=false;
		}
	}
}


void VoltControl::Quit_OPC()
{
	opc_quit();
}

bool VoltControl::get_ModuleStatus(ModStatus% status)
{
	bool ok;
	unsigned short value;

	value=opc_getUnsignedShort("can0.ma11.Status", &ok);
	
	status.IsSumError = !(Convert::ToBoolean((value & isnoSERR)));

	return ok;
}

bool VoltControl::Module_ClearError()
{
	bool ok;
	ok=opc_setBool("can0.ma11.doClear", true);
	return ok;
}



//***************** C H A N N E L ******************************
float VoltControl::get_NominalV(Int32^ chan, bool* success)
{
	bool ok;
	float value;

	//------Adress definition-----
	String^ s_adress="can0.ma11.ch0"+chan->ToString()+".NominalV";
	IntPtr point = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s_adress);
	char* c_adress = static_cast<char*>(point.ToPointer());
	//----------------------------
	
	value = opc_getFloat(c_adress, &ok);

	/*if (chan->Equals(0)) value = opc_getFloat("can0.ma11.ch00.NominalV", &ok);
	if (chan->Equals(1)) value = opc_getFloat("can0.ma11.ch01.NominalV", &ok);
	if (chan->Equals(2)) value = opc_getFloat("can0.ma11.ch02.NominalV", &ok);*/
	
	//delete[] c_adress;

	*success = ok;
	return value;
}


bool VoltControl::get_ChanStatus(Int32^ chan, ChanStatus% stat)
{
	bool ok;
	unsigned short value;

	//------Adress definition-----
	String^ s_adress = "can0.ma11.ch0" + chan->ToString() + ".Status";
	IntPtr point = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s_adress);
	char* c_adress = static_cast<char*>(point.ToPointer());
	//----------------------------

	value = opc_getUnsignedShort(c_adress, &ok);
		
	stat.InputError=Convert::ToBoolean(value & IERR);
	stat.IsOn=Convert::ToBoolean(value & isON);
	stat.IsRamping=Convert::ToBoolean(value & isRAMP);
	stat.IsEmergencyOff=Convert::ToBoolean(value & isEMCY);
	stat.IsControlledCurrent=Convert::ToBoolean(value & isCC);
	stat.IsControlledVoltage=Convert::ToBoolean(value & isCV);
	stat.IsCurrentBoundsExeeded=Convert::ToBoolean(value & isCBND);
	stat.IsVoltageBoundsExeeded=Convert::ToBoolean(value & isVBND);
	stat.IsTripExeeded=Convert::ToBoolean(value & isTRP);
	stat.IsCurrentLimitExeeded=Convert::ToBoolean(value & isCLIM);
	stat.IsVoltageLimitExeeded=Convert::ToBoolean(value & isVLIM);

	if(stat.IsCurrentLimitExeeded)
	{
		stat.Text="Current Limit Exeeded";
		stat.TextColor=System::Drawing::Color::Red;
	}
	else if(stat.IsVoltageLimitExeeded)
	{
		stat.Text="Voltage Limit Exeeded";
		stat.TextColor=System::Drawing::Color::Red;
	}
	else if(stat.IsCurrentBoundsExeeded)
	{
		stat.Text="Current Bounds Exeeded";
		stat.TextColor=System::Drawing::Color::Red;
	}
	else if(stat.IsVoltageBoundsExeeded)
	{
		stat.Text="Voltage Bounds Exeeded";
		stat.TextColor=System::Drawing::Color::Red;
	}
	else if(stat.IsVoltageBoundsExeeded)
	{
		stat.Text="Voltage Bounds Exeeded";
		stat.TextColor=System::Drawing::Color::Red;
	}
	else if(stat.IsEmergencyOff)
	{
		stat.Text="Emergency Off";
		stat.TextColor=System::Drawing::Color::Red;
	}
	else if (Convert::ToBoolean(value & isTRP) || stat.set_IsTripExeeded)
	{
		stat.set_IsTripExeeded = true;
		stat.Text = "Trip exeeded";
		stat.TextColor = System::Drawing::Color::Red;
		if (stat.ack_IsTripExeeded)
		{
			stat.set_IsTripExeeded = false;
			stat.ack_IsTripExeeded = false;
		}
	}
	else if (stat.IsRamping)
	{
		stat.Text = "Ramping";
		stat.TextColor = System::Drawing::Color::DarkGreen;
	}
	else if (stat.IsControlledVoltage)
	{
		stat.Text = "Voltage Controlled";
		stat.TextColor = System::Drawing::Color::DarkGreen;
	}
	else if (stat.IsControlledCurrent)
	{
		stat.Text = "Current Controlled";
		stat.TextColor = System::Drawing::Color::DarkOrange;
	}
	else
	{
		stat.Text = "Channel ready";
		stat.TextColor = System::Drawing::Color::Black;
	}
	
	//delete[] c_adress;
	return ok;
}


bool VoltControl::set_Voltage(Int32^ chan, float value)
{
	bool ok;
	
	//------Adress definition-----
	String^ s_adress = "can0.ma11.ch0" + chan->ToString() + ".VSet";
	IntPtr point = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s_adress);
	char* c_adress = static_cast<char*>(point.ToPointer());
	//----------------------------

	ok = opc_setFloat(c_adress, value);
	
	//delete[] c_adress;
	return ok;
}

float VoltControl::get_VoltSetpoint(Int32^ chan, bool* success)
{
	bool ok;
	float value;

	//------Adress definition-----
	String^ s_adress = "can0.ma11.ch0" + chan->ToString() + ".VSet";
	IntPtr point = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s_adress);
	char* c_adress = static_cast<char*>(point.ToPointer());
	//----------------------------

	value = opc_getFloat(c_adress, &ok);
	//delete[] c_adress;
	*success = ok;
	return value;

}

float VoltControl::get_Voltage(Int32^ chan,bool* success)
{
	bool ok;
	float value;

	//------Adress definition-----
	String^ s_adress = "can0.ma11.ch0" + chan->ToString() + ".VMeas";
	IntPtr point = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s_adress);
	char* c_adress = static_cast<char*>(point.ToPointer());
	//----------------------------
	
	value = opc_getFloat(c_adress, &ok);
	//delete[] c_adress;
	*success=ok;
	return value;
}

bool VoltControl::set_Ramp(float value)
{
	bool ok;

	//Calculate percentage from V/s value
	value = 100 * value / NominalV_V1;
	
	ok=opc_setFloat("can0.ma11.RampSpeed",value);
	
	return ok;
}

float VoltControl::get_Ramp(bool* success)
{
	bool ok;
	float value;
	//for(long i=0; i<5000000; i++);
	value=opc_getFloat("can0.ma11.RampSpeed", &ok);
	*success=ok;

	//Calculate V/s from percentage
	value = value/100 * get_NominalV(Chan_V1, &ok);

	return value;
}


bool VoltControl::set_Current(Int32^ chan, float value)
{
	bool ok;
	
	//------Adress definition-----
	String^ s_adress = "can0.ma11.ch0" + chan->ToString() + ".ISet";
	IntPtr point = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s_adress);
	char* c_adress = static_cast<char*>(point.ToPointer());
	//----------------------------

	//convert to milliamps
	value=value/1000;
	
	ok = opc_setFloat(c_adress, value);
	//delete[] c_adress;
	return ok;
}

float VoltControl::get_Current(Int32^ chan,bool* success)
{
	bool ok;
	float value;

	//------Adress definition-----
	String^ s_adress = "can0.ma11.ch0" + chan->ToString() + ".IMeas";
	IntPtr point = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s_adress);
	char* c_adress = static_cast<char*>(point.ToPointer());
	//----------------------------

	value = opc_getFloat(c_adress, &ok);

	*success=ok;
	//convert to microamps
	value=value*1000;
	//delete[] c_adress;
	return value;
}

bool VoltControl::set_ChanOn(Int32^ chan, bool value)
{
	bool ok;

	//------Adress definition-----
	String^ s_adress = "can0.ma11.ch0" + chan->ToString() + ".On";
	IntPtr point = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s_adress);
	char* c_adress = static_cast<char*>(point.ToPointer());
	//----------------------------

	ok = opc_setBool(c_adress, value);
	//delete[] c_adress;
	return ok;
}



