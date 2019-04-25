#include "stdafx.h"

PICardControl::PICardControl() : _ID(0), connected(false), _boardnumber(0){}
PICardControl::~PICardControl() {}

using namespace System::Runtime::InteropServices;

String^ PICardControl::GetPCIList(BOOL& ok)
{
	String^ s_PCIs;
	char PCIs[20];
	ok=C843_ListPCI(PCIs, sizeof(PCIs));
	s_PCIs = gcnew String(PCIs);
	return s_PCIs;
}

BOOL PICardControl::Connect(long boardnumber)
{ 
	
	_boardnumber = boardnumber;
	_ID = C843_Connect(_boardnumber);
	if (_ID > -1)
	{
		connected = true;
		return 1;
	}

	return 0;
}

String^ PICardControl::GetInputChannels(BOOL& ok)
{
	String^ s_channels;
	char channels[20];
	ok=C843_GetInputChannelNames(_ID, channels, sizeof(channels));
	s_channels = gcnew String(channels);
	return s_channels;
}

String^ PICardControl::GetOutputChannels(BOOL& ok)
{
	String^ s_channels;
	char channels[20];
	C843_GetOutputChannelNames(_ID, channels, sizeof(channels));
	s_channels = gcnew String(channels);
	return s_channels;
}

String^ PICardControl::GetErrorCode()
{
	String^ s_error;
	long error;
	error = C843_GetError(_ID);
	s_error = error.ToString();
	return s_error;
}

void PICardControl::Disconnect()
{
	C843_CloseConnection(_ID);
}


BOOL PICardControl::SetOutputs(String^ Channels, BOOL* values)
{
	IntPtr prtToNativeString = Marshal::StringToHGlobalAnsi(Channels);
	char* channels = static_cast<char*>(prtToNativeString.ToPointer());
	if(C843_DIO(_ID, channels, values)) return 1;
	return 0;
}

BOOL PICardControl::GetInputs(String^ Channels, BOOL* values)
{
	IntPtr prtToNativeString = Marshal::StringToHGlobalAnsi(Channels);
	char* channels = static_cast<char*>(prtToNativeString.ToPointer());
	
	if (C843_qDIO(_ID, channels, values)) return 1;
	return 0;
}

long PICardControl::GetID()
{
	return _ID;
}
