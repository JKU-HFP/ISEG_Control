#include "stdafx.h"


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
		_doRead = true;
		_serialPort->ReadExisting(); //Clear buffer
		_readThread->Start();
	}
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
		_frequency = val;
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