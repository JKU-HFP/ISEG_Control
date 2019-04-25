#include "stdafx.h"
//#include "Logfile.hpp"
#include <iostream>

using namespace std;
using namespace System;
using namespace System::IO;

//#############################################################
//
//		C O N S T R U C T O R  /  D E S T R U C T O R
//
//#############################################################

Logfile::Logfile(){}

Logfile::Logfile(String^ name)
{	
	bool file_not_found=0;
	long double index=0;
	String^ filepath;
	StreamWriter^ outfile;
	StreamReader^ filetest;
	
	//File already exists? --> enumerate
	do{
		index++;
		filepath=Global::log_folder+"\\"+name+"_"+Timestamp_date()+"_"+index.ToString()+".txt";
		try
		{
			filetest = gcnew StreamReader(filepath);
		}
		catch(Exception^ e)
		{
			static_cast<void>(e);
			file_not_found=true;
		}
	}while(!file_not_found);
	if (filetest) filetest->Close();

	_filepath=filepath;
	outfile = gcnew StreamWriter(_filepath);
	outfile->WriteLine(Timestamp_time() + "  File created \n");
	outfile->Close();
}

Logfile::~Logfile()
{

}



//#############################################################
//
//		M E T H O D S 
//
//#############################################################

void Logfile::add_entry(String^ entry)
{
	StreamWriter^ outfile = gcnew StreamWriter(_filepath,true);	
	outfile->WriteLine(Timestamp_time() + "  " + entry + "\n");
	outfile->Close();
}

//#############################################################
//
//		A U X  - F U N C T I O N S 
//
//#############################################################

String^ Logfile::Timestamp_date()
{
	return DateTime::Now.ToString("yyyy_MM_dd");
}

String^ Logfile::Timestamp_time()
{
	return DateTime::Now.ToString("HH:mm:ss");
}