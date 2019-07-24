#ifndef FREQ_H
#define FREQ_H

//************************************************************
//
//       H P   5 3 1 3 2 A    F R E Q U E N C Y   C O U N T E R
//       S E R I A L    P O R T    H A N D L I N G
//
//************************************************************

using namespace System::IO::Ports;
using namespace System::Threading;

ref class HPFreqSerial
{
private:
	SerialPort^ _serialPort;
	Thread^ _readThread;
	bool _doRead;
	Object^ _lockObj;
	array<double>^ _freqStack;

	double _frequency = -1.0;

	void DoRead();
	

public:
	HPFreqSerial();
	~HPFreqSerial();

	property bool Connected;
	property int AveragePoints;

	void Connect(int com);
	void StartReading();
	void StopReading();
	double GetFrequency();

	static array<double>^ ShiftRight(array<double>^ inarr);
};

#endif