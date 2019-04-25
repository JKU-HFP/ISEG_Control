#ifndef PICARD_H
#define PICARD_H

//************************************************************
//
//       P I   C 8 4 3   I / O   H A N D L I N G
//
//************************************************************

ref class PICardControl
{
public:
	PICardControl();
	~PICardControl();

	String^ GetPCIList(BOOL& ok);
	BOOL Connect(long boardnumber);
	void Disconnect();
	String^ GetInputChannels(BOOL& ok);
	String^ GetOutputChannels(BOOL& ok);
	String^ GetErrorCode();
	BOOL SetOutputs(String^ Channels, BOOL* values);
	BOOL GetInputs(String^ Channels, BOOL* values);
	long GetID();

	BOOL connected;

private:
	long _ID;
	long _boardnumber;
};
	

#endif
