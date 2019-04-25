#ifndef LOGFILE_H
#define LOGFILE_H

using namespace System;

public ref class Logfile
{
public:

	Logfile(String^ name);
	~Logfile();
	
	//Add entry to logfile
	void add_entry(String^ entry);

	//AUX-Functions
	String^ Timestamp_date();
	String^ Timestamp_time();

private:
	Logfile(); //forbidden empty constructor
	String^ _filepath;
};
	
#endif