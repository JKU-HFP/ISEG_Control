#ifndef OPMODES_H
#define OPMODES_H

using namespace System;


//***********************************************************
//					 Manual Mode
//***********************************************************

value struct manualval
{
	float Setpoint_V1;
	float Setpoint_V2;
	float Setpoint_V3;
	float I_Limit_V1;
	float I_Limit_V2;
	float I_Limit_V3;
	float Ramp;
	static Int32 ChartUpdateRate;
};

value struct ManualValStatus
{
	bool Setpoint_V1;
	bool Setpoint_V2;
	bool Setpoint_V3;
	bool I_Limit_V1;
	bool I_Limit_V2;
	bool I_Limit_V3;
	bool Ramp;
	bool sum_bit;
};


ref class ManualMode abstract sealed
{
public:
	
	static manualval Default; //Default values:
	static manualval UserInputData;	
	static ManualValStatus InputError;
	static ManualValStatus InputWarning;

	//Passive creep control
	static bool CreepActive;
	static float CreepSetpointVoltage;
	static float CreepAmplitude;
	static float CreepLambda;
	static float CreepTime;
	static float CreepModelVoltage(float involt, float A, float lambda, float t);

	//Active PID creep control
	static double PID_Setpoint;
	static double PID_Start_V;
	static double Error;
	static double PID_P = 0;
	static double PID_I = 0;
	static double PID_D = 0;
	static double L = 50E-6;
	static double act_C;
	static double act_Q;
	static double Pv_Min = 0;
	static double Pv_Max = 1;
	static double Output;
	static double Output_Min = -10;
	static double Output_Max = 10;

	static double GetC(double freq, double L);

};



//***********************************************************
//				    	Sweep Mode
//***********************************************************

value struct SweepVal
{
	float Ramp_Initial;
	float Ramp_Cycle;
	float I_Limit_V1;
	float I_Limit_V2;
	float I_Limit_V3;

	bool ValsFromMask;
	bool ValsFromFile;
	bool Cycle;
	bool Loop;
	int Loops;
	bool Sync;
	bool Enable_V1;
	bool Enable_V2;
	bool Enable_V3;
	float Initial_V1;
	float Initial_V2;
	float Initial_V3;
	float Step_V1;
	float Step_V2;
	float Step_V3;
	float Final_V1;
	float Final_V2;
	float Final_V3;

	int ResultSpectra;
	int OverallSpectra;

	int DelayTime;
};

value struct SweepValStatus
{
	bool Ramp_Initial;
	bool Ramp_Cycle;
	bool I_Limit_V1;
	bool I_Limit_V2;
	bool I_Limit_V3;

	bool Loops;
	bool Initial_V1;
	bool Initial_V2;
	bool Initial_V3;
	bool Step_V1;
	bool Step_V2;
	bool Step_V3;
	bool Final_V1;
	bool Final_V2;
	bool Final_V3;
	bool ResultSpectra;
	bool Initial_Ramp;
	bool Cycle_Ramp;

	bool sum_bit;
};

ref class SweepMode abstract sealed
{
public:

	//General settings
	static long BoardNumber = 1;
	static String^ InputChannel = "A";
	static String^ OutputChannel = "B";
	static int Output_Time = 500;

	static bool SweepRunning = false;
	static String^ StatusProgress = "ready";
	static System::Drawing::Color StatusProgress_Color = System::Drawing::Color::Black;
	
	static SweepVal Default; //Default values:
	static SweepVal UserInputData;
	static SweepVal SweepData;
	static SweepValStatus Inputerror;
	static SweepValStatus Inputwarning;

	static DateTime start_time;
	static TimeSpan estimated_time;
	
	//Values from Mask
	static bool CheckStep(float istep, float initial, float final);
	static int Mod(int i1, int i2, int& factor);

	//Values from File
	static bool file_valid = false;
	static cli::array<float, 2>^ Sweepfile_Values = { {}, {} };
	static bool Read_Sweepfile(String^ Filename);
	static float Get_File_Min(int Voltage);
	static float Get_File_Max(int Voltage);
};

#endif