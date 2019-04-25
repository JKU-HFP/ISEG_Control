#ifndef VOLT_H
#define VOLT_H

using namespace std;
using namespace System;

//***********************************************************
//          Voltage Controller Communication
//***********************************************************

value struct VoltData
{
	float V1;
	float V2;
	float V3;
	float I1;
	float I2;
	float I3;
	float setpoint_V1;
	float setpoint_V2;
	float setpoint_V3;
};

value struct ModStatus
{
	bool IsSumError;
};

value struct ChanStatus
{
	bool InputError;
	bool IsOn;
	bool IsRamping;
	bool IsEmergencyOff;
	bool IsControlledCurrent;
	bool IsControlledVoltage;
	bool IsCurrentBoundsExeeded;
	bool IsVoltageBoundsExeeded;
	bool IsExtInhibit;
	bool IsTripExeeded;
	bool IsCurrentLimitExeeded;
	bool IsVoltageLimitExeeded;

	bool set_IsTripExeeded;
	bool ack_IsTripExeeded; //acknowledge bit for currenttrip
	
	String^ Text;
	System::Drawing::Color TextColor;
};

ref class VoltControl
{
public:
	VoltControl();
	~VoltControl();

	//Module
	static void Connect_CAN();
	static void Check_Status_CAN();
	static void Quit_OPC();
	static bool get_ModuleStatus(ModStatus% status);
	static bool Module_ClearError();
	
	//Channel
	static float get_NominalV(Int32^ chan, bool* success);
	static bool set_Voltage(Int32^ chan, float value);
	static float get_VoltSetpoint(Int32^ chan, bool* success);
	static float get_Voltage(Int32^ chan,bool* success);
	static bool set_Ramp(float value);
	static float get_Ramp(bool* success);
	static bool set_Current(Int32^ chan, float value);
	static float get_Current(Int32^ chan,bool* success);
	static bool set_ChanOn(Int32^ chan, bool value);
	static bool get_ChanStatus(Int32^ chan, ChanStatus% stat);
	//static void CallBackFunc(const char *path, const char *value);
		
	//Channel Mapping
	static Int32^ Chan_V1;
	static Int32^ Chan_V2;
	static Int32^ Chan_V3;
	static float NominalV_V1 = 3000;
	static float NominalV_V2 = 3000;
	static float NominalV_V3 = 3000;
	//Module
	static ModStatus ModuleStatus;
	//Channel status:
	static ChanStatus ChanStatus_V1;
	static ChanStatus ChanStatus_V2;
	static ChanStatus ChanStatus_V3;
	static ChanStatus FlancPos_ChanStatus_V1;
	static ChanStatus FlancPos_ChanStatus_V2;
	static ChanStatus FlancPos_ChanStatus_V3;
	static ChanStatus AUX_FlancPos_ChanStatus_V1;
	static ChanStatus AUX_FlancPos_ChanStatus_V2;
	static ChanStatus AUX_FlancPos_ChanStatus_V3;
	//Actual values:
	static float Act_Ramp;
	static VoltData Act; 
	//Limitations:
	static VoltData LowerLimits = { -1000, -1000, -1000, 0, 0, 0, 0, 0, 0 };
	static VoltData UpperLimits = { 2000, 2000, 2000, 0, 0, 0, 0, 0, 0 };
	static VoltData LowerWarning;
	static VoltData UpperWarning;
	static float min_Ramp = 0;
	static float max_Ramp = NominalV_V1;
	static float min_Current;
	static float max_Current;
	//CAN Status
	static bool CAN_connected=false;
	static String^ Status_CAN="not connected";
	static System::Drawing::Color Status_CAN_Color=System::Drawing::Color::Black;

	};

#endif