#include "stdafx.h"

using namespace System::Data::Linq;

HPFreqSerial::HPFreqSerial()
{
	//Create Thread lock object
	_lockObj = gcnew Object();

	//Create Serial Port
	_serialPort = gcnew SerialPort();

	//Initialize Parameters

	_serialPort->BaudRate = 9600;
	_serialPort->Parity = Parity::None;
	_serialPort->DataBits = 8;
	_serialPort->StopBits = StopBits::One;
	_serialPort->Handshake = Handshake::XOnXOff;
	_serialPort->Encoding = System::Text::Encoding::UTF8;

	_serialPort->DtrEnable = true;
	_serialPort->RtsEnable = true;

	_serialPort->ReadTimeout = 1000;

	_readThread = gcnew Thread( gcnew ThreadStart(this, &HPFreqSerial::DoRead ));
	_readThread->IsBackground = true;
}

void HPFreqSerial::Connect(int com)
{
	_serialPort->PortName = "COM"+com.ToString();
	try
	{
		_serialPort->Open();
		Connected = _serialPort->IsOpen;
	}
	catch(Exception^)
	{

	}
}

void HPFreqSerial::StartReading()
{
	if (_serialPort->IsOpen)
	{
		_freqStack = gcnew array<double>(AveragePoints);

		_doRead = true;
		_serialPort->ReadExisting(); //Clear buffer
		_readThread->Start();
	}
}

array<double>^ HPFreqSerial::ShiftRight(array<double>^ inarr)
{
	array<double>^ tmp_arr = gcnew array<double>(inarr->Length);
	Array::Copy(inarr, 0, tmp_arr, 1, inarr->Length - 1);
	
	return tmp_arr;
}


void HPFreqSerial::StopReading()
{
	_doRead = false;
	_readThread->Join();
}

void HPFreqSerial::DoRead()
{
	while (_doRead)
	{
		double val = -1.0;

		if (_serialPort->BreakState)
		{
			_serialPort->BreakState = false;
		}

		try
		{
			String^ msg = _serialPort->ReadLine();
			array<String^>^ svals = msg->Split(' ');
			
			if (svals->Length < 2) continue;		
			
			try 
			{
				val = System::Convert::ToDouble(svals[0], System::Globalization::CultureInfo::InvariantCulture);
			}
			catch (FormatException^)
			{
				continue;
			}
		}
		catch (TimeoutException^)
		{
			val = -1.0;
		}
		catch (Exception^ e)
		{
			Connected = false;
		}

		//Locked writing
		/*Monitor::Enter(_lockObj);
		try 
		{
			_frequency = val;
		}
		finally
		{
			Monitor::Exit(_lockObj);
		}	*/
		
		if (val >= 0)
		{
			_freqStack = ShiftRight(_freqStack);
			_freqStack[0] = val;
			
			double average = 0;
			for (int i = 0; i < _freqStack->Length; i++)
			{
				average += _freqStack[i];
			}
			average = average / _freqStack->Length;

			_frequency = average;
		}
	
	}
}

double HPFreqSerial::GetFrequency()
{

	//Locked reading
	//Monitor::Enter(_lockObj);
	//try 
	//{
	//	 val = _frequency;
	//	_lastfreq = _frequency;
	//}
	//finally
	//{
	//	Monitor::Exit(_lockObj);
	//}
	return _frequency;
}

HPFreqSerial::~HPFreqSerial(){}