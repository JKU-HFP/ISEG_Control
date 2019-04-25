#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

//***********************************************************
//					 Manual Mode
//***********************************************************


//***********************************************************
//					  Sweep Mode
//***********************************************************

bool SweepMode::CheckStep(float istep, float initial, float final)
{
	if ((Math::Abs(istep) <= Math::Abs(final - initial)) && istep>0) return true;
	return false;
}

int SweepMode::Mod(int i1, int i2, int& factor)
{	
	int rem;
	
	if (i2 == 0)
	{
		factor = 0;
		return 0;
	}
	
	factor = Math::Floor(i1 / i2);
	rem = i1%i2;
		
	return rem;
}

bool SweepMode::Read_Sweepfile(String^ Filename)
{
	bool ok;
	StreamReader^ infile = gcnew StreamReader(Filename);
	String^ ReadString;

	String^delimStr = " \t";
	cli::array<Char>^ delimiter = delimStr->ToCharArray();
	
	int index = 0;
	int temp_columns = 0;
	SweepMode::file_valid = false;

	while (!infile->EndOfStream)
	{
		ReadString = infile->ReadLine();
		cli::array<String^>^ Split = ReadString->Split(delimiter);
		
		//Check consistent column numbers;
		if ((index > 0 && temp_columns != Split->Length) || Split->Length!=3) return false;
		temp_columns = Split->Length;

		cli::array<int>^ newsizes = { index+1, Split->Length };
		SweepMode::Sweepfile_Values = (cli::array<float, 2>^) Global::ResizeArray(SweepMode::Sweepfile_Values, newsizes);
		for (int i = 0; i < Split->Length; i++)
		{
			Sweepfile_Values[index, i] = Global::StringToFloat(Split[i],&ok);
			if (!ok) return false;
		}

		index++;
	}
	infile->Close();
	SweepMode::file_valid = true;
	return true;
}

float SweepMode::Get_File_Min(int Voltage)
{
	float min = 5000;
	if (Voltage>=0 &&(Voltage - 1 <= Sweepfile_Values->GetLength(1)))
	{
		for (int i = 0; i < Sweepfile_Values->GetLength(0); i++) if (Sweepfile_Values[i, Voltage - 1] < min) min = Sweepfile_Values[i, Voltage - 1];
		return min;
	}
	else return 0;
}

float SweepMode::Get_File_Max(int Voltage)
{
	float max = -5000;
	if (Voltage >= 0 && (Voltage - 1 <= Sweepfile_Values->GetLength(1)))
	{
		for (int i = 0; i < Sweepfile_Values->GetLength(0); i++) if (Sweepfile_Values[i, Voltage - 1] > max) max = Sweepfile_Values[i, Voltage - 1];
		return max;
	}
	else return 0;
}