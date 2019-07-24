#include "stdafx.h"
//#include "Global.h"
//#include "VoltageControl.hpp"
#include <iostream>

using namespace System;
using namespace System::IO;

	
//************************************************
//           G L O B A L 
//************************************************


String^ Global::Correct_NumberSeparator(String^ s)
{
	if(DecimalSeparator==",") return s->Replace(".",",");
	if(DecimalSeparator==".") return s->Replace(",",".");
	return s;
}


float Global::StringToFloat(String^ s, bool* ok)
{
		//Correct number format
		s=Global::Correct_NumberSeparator(s);

		float value;
		if(float::TryParse(s,value))
		{
		value=(float)Convert::ToDouble(s);
		*ok=true;
		}
		else
		{
		value=0;
		*ok=false;
		}
		return value;
}

int Global::StringToInt(String^ s, bool* ok)
{
	//Correct number format
	s = Global::Correct_NumberSeparator(s);

	int value;
	if (int::TryParse(s, value))
	{
		value = Convert::ToInt32(s);
		*ok = true;
	}
	else
	{
		value = 0;
		*ok = false;
	}
	return value;
}


void Global::Read_Init(String^ filepath)
{

	bool ok;
	int i_read=0, i_comp=0;
	String^ s_value;
	StreamReader^ infile = gcnew StreamReader(filepath);
		
	cli::array<String^>^ comptable = 
	{
	"chan_V1",
	"chan_V2",
	"chan_V3",
	"manual_default_setpoint",
	"manual_default_current_limit",
	"manual_default_ramp",
	"warning_min_voltage",
	"warning_max_voltage",
	"min_ramp",
	"max_ramp",
	"min_I",
	"max_I",
	"manual_default_chart_update_rate",
	"act_log_name",
	"log_folder",
	"OPC_update_rate",
	"BoardNumber",
	"InputChannel",
	"OutputChannel",
	"sweep_default_initial",
	"sweep_default_step",
	"sweep_default_final",
	"Output_Time",
	"sweep_default_ramp_initial",
	"sweep_default_ramp_cycle",
	"freq_com",
	"freq_average",
	"pid_P",
	"pid_D",
	"pid_I",
	"pid_L",
	"pid_out_min"
	"pid_out_max"
	};

	cli::array<String^>^ initvalues = gcnew cli::array<String^>(200);

	//read ini-file lines
	while((!infile->EndOfStream)&&(i_read<(initvalues->Length)))
	{
	initvalues[i_read]=infile->ReadLine();
	initvalues[i_read]=initvalues[i_read]->Replace(" ",""); //Delete spaces
	
		for(i_comp=0; i_comp<comptable->Length; i_comp++)
		{
				if(((initvalues[i_read]->IndexOf(comptable[i_comp]))>=0)&&(initvalues[i_read][0]!=';'))
				{
					s_value=initvalues[i_read]->Substring((initvalues[i_read]->IndexOf('='))+1 , (initvalues[i_read]->Length) - (initvalues[i_read]->IndexOf('=')) - 1 );
					s_value=Correct_NumberSeparator(s_value);

					switch ((i_comp+1))
					{
					case 1: //chan_V1
						VoltControl::Chan_V1=Convert::ToInt32(s_value);
						break;
					case 2: //chan_V2
						VoltControl::Chan_V2=Convert::ToInt32(s_value);
						break;
					case 3: //chan_V3
						VoltControl::Chan_V3=Convert::ToInt32(s_value);
						break;
					case 4: //manual_default_setpoint
						ManualMode::Default.Setpoint_V1=Global::StringToFloat(s_value,&ok);
						ManualMode::Default.Setpoint_V2=Global::StringToFloat(s_value,&ok);
						ManualMode::Default.Setpoint_V3=Global::StringToFloat(s_value,&ok);
						break;
					case 5: //manual_default_current_limit
						ManualMode::Default.I_Limit_V1=Global::StringToFloat(s_value,&ok);
						ManualMode::Default.I_Limit_V2 = Global::StringToFloat(s_value, &ok);
						ManualMode::Default.I_Limit_V3 = Global::StringToFloat(s_value, &ok);
						break;
					case 6: //manual_default_ramp
						ManualMode::Default.Ramp=Global::StringToFloat(s_value,&ok);
						break;
					case 7: //warning_min_voltage
						VoltControl::LowerWarning.V1=Global::StringToFloat(s_value,&ok);
						VoltControl::LowerWarning.V2 = Global::StringToFloat(s_value, &ok);
						VoltControl::LowerWarning.V3 = Global::StringToFloat(s_value, &ok);
						break;
					case 8: //warning_max_voltage
						VoltControl::UpperWarning.V1= Global::StringToFloat(s_value,&ok);
						VoltControl::UpperWarning.V2 = Global::StringToFloat(s_value, &ok);
						VoltControl::UpperWarning.V3 = Global::StringToFloat(s_value, &ok);
						break;
					case 9: //min_ramp
						VoltControl::min_Ramp=Global::StringToFloat(s_value,&ok);
						break;
					case 10: //max_ramp
						VoltControl::max_Ramp=Global::StringToFloat(s_value,&ok);
						break;
					case 11: //min_I
						VoltControl::min_Current=Global::StringToFloat(s_value,&ok);
						break;
					case 12: //max_I
						VoltControl::max_Current=Global::StringToFloat(s_value,&ok);
						break;
					case 13: //manual_default_chart_update_rate
						ManualMode::Default.ChartUpdateRate=Convert::ToInt32(s_value);
						break;
					case 14: //act_log_name
						Global::act_log_name=s_value;
						break;
					case 15: //act_log_folder
						Global::log_folder=s_value;
						break;
					case 16: //OPC_update_rate
						Global::OPC_update_rate=Convert::ToInt32(s_value);
						break;
					case 17: //BoardNumber
						SweepMode::BoardNumber = Convert::ToInt32(s_value);
						break;
					case 18: //InputChannel
						SweepMode::InputChannel = s_value;
						break;
					case 19: //OutputChannel
						SweepMode::OutputChannel = s_value;
						break;
					case 20: //sweep_default_initial
						SweepMode::Default.Initial_V1 = Global::StringToFloat(s_value, &ok);
						SweepMode::Default.Initial_V2 = Global::StringToFloat(s_value, &ok);
						SweepMode::Default.Initial_V3 = Global::StringToFloat(s_value, &ok);
						break;
					case 21: //sweep_default_step
						SweepMode::Default.Step_V1 = Global::StringToFloat(s_value, &ok);
						SweepMode::Default.Step_V2 = Global::StringToFloat(s_value, &ok);
						SweepMode::Default.Step_V3 = Global::StringToFloat(s_value, &ok);
						break;
					case 22: //sweep_default_final
						SweepMode::Default.Final_V1 = Global::StringToFloat(s_value, &ok);
						SweepMode::Default.Final_V2 = Global::StringToFloat(s_value, &ok);
						SweepMode::Default.Final_V3 = Global::StringToFloat(s_value, &ok);
						break;
					case 23: //Output_Time
						SweepMode::Output_Time = Convert::ToInt32(s_value);
						break;
					case 24: //sweep_default_ramp_initial
						SweepMode::Default.Ramp_Initial = Global::StringToFloat(s_value, &ok);
						break;
					case 25: //sweep_default_ramp_cycle
						SweepMode::Default.Ramp_Cycle = Global::StringToFloat(s_value, &ok);
						break;
					case 26: //frequency counter COM port
						Global::Freq_COM = Convert::ToInt32(s_value);
						break;
					case 27: //Average over x points
						Global::Freq_Average = Convert::ToInt32(s_value);
						break;
					case 28: //PID P value
						ManualMode::PID_P = Convert::ToDouble(s_value);
						break;
					case 29: //PID D value
						ManualMode::PID_D = Convert::ToDouble(s_value);
						break;
					case 30: //PID I value
						ManualMode::PID_I = Convert::ToDouble(s_value);
						break;
					case 31: //PID L 
						ManualMode::L = Convert::ToDouble(s_value);
						break;
					case 32: //Pid output min
						ManualMode::Output_Min = Convert::ToDouble(s_value);
						break;
					case 33: //Pid output max
						ManualMode::Output_Max = Convert::ToDouble(s_value);
					}
			
				}
		}

	i_read++;
	}
	infile->Close();
	delete initvalues, comptable;
}


bool Global::CheckRangeFloat(float val, float l_minus, float l_plus)
{
	if((val>=l_minus)&&(val<=l_plus)) return true;
	else return false;
}


void Global::CheckPosFlanc(bool act, bool %flanc, bool %aux_flanc)
{
	flanc= act && !aux_flanc;
	aux_flanc = act;
}

Array^ Global::ResizeArray(Array^ arr, cli::array<int>^ newSizes)
{
	if (newSizes->Length != arr->Rank)
	{
		throw gcnew ArgumentException("arr must have the same number of dimensions " +
			"as there are elements in newSizes", "newSizes");
	}

	Array^ temp = Array::CreateInstance(arr->GetType()->GetElementType(), newSizes);
	int length = arr->Length <= temp->Length ? arr->Length : temp->Length;
	Array::ConstrainedCopy(arr, 0, temp, 0, length);
	return temp;	
}

//************************************************
//            T E S T S I G N A L
//************************************************

TestSignal::TestSignal(int timerrate) : _X(0), _timerrate(timerrate) {}
TestSignal::~TestSignal() {}

void TestSignal::Inc_X()
{
	_X++;
	if(_X>1000000) _X=0;
}

double TestSignal::GetX()
{
	return _X*_timerrate;
}

double TestSignal::getSawTooth(double amplitude, int period)
{
	return (amplitude/period)*((_X*_timerrate)%period);
}

double TestSignal::getSin(double amplitude, double period)
{
	return amplitude*(Math::Sin((2*3.1415926535/period)*_X*_timerrate));
}


//************************************************
//            W A T C H D O G
//************************************************

WatchDog::WatchDog() {}
WatchDog::WatchDog(int max_time) : _starttime(DateTime::Now), _acttime(DateTime::Now), time_exeeded(false), _max_time(max_time) {}
WatchDog::~WatchDog() {}

void WatchDog::Start()
{
	_starttime = DateTime::Now;
	run = true;
	time_exeeded = false;

}

void WatchDog::Tick()
{
	_acttime = DateTime::Now;
	_ellapsed_time = _acttime - _starttime;

	if (_ellapsed_time.Seconds > _max_time) time_exeeded = true;
}