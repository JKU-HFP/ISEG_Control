#ifndef GLOBAL_H
#define GLOBAL_H


using namespace System;

ref class Global
{
public:

	//Logfiles
	static String^ log_folder;
	static String^ act_log_name;

	//OPC Update rate
	static int OPC_update_rate;

	//Get current windows decimal seperator
	static Globalization::CultureInfo^ myinfo = gcnew Globalization::CultureInfo(0x0c07);
	static String^ DecimalSeparator = myinfo->CurrentCulture->NumberFormat->NumberDecimalSeparator;

	//Process ini-File
	static void Read_Init(String^ filepath);

	//Corrects decimal separator
	static String^ Correct_NumberSeparator(String^ s);

	//COM Port Frequency Counter
	static int Freq_COM;
	
	//Converts String^ to float.
	//If String^ is no parseable number --> returns 0 and ok=false
	static float StringToFloat(String^ s, bool* ok);

	//Converts String^ to int.
	//If String^ is no parseable number --> returns 0 and ok=false
	static int StringToInt(String^ s, bool* ok);

	//Checks if value is in range
	static bool CheckRangeFloat(float val, float l_minus, float l_plus);

	//Check if signal has positive flanc;
	static void CheckPosFlanc(bool act, bool %flanc, bool %aux_flanc);

	//Resize arrays of abitrary order
	static Array^ ResizeArray(Array^ arr, cli::array<int>^ newSizes);


};

ref class TestSignal
{
public:
	TestSignal(int timerrate);
	~TestSignal();

	void Inc_X();
	double GetX();
	double getSawTooth(double amplitude, int period);
	double getSin(double amplitude, double period);
private:
	int _X;
	int _timerrate;
};

ref class WatchDog
{
public:
	WatchDog(int max_time);
	~WatchDog();

	void Start();
	void Tick();
	
	bool time_exeeded;
	bool run;
	
private:
	WatchDog(); //forbidden
	
	DateTime _starttime;
	DateTime _acttime;
	TimeSpan _ellapsed_time;
	int _max_time;
};


#endif
