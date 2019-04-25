#include "stdafx.h"
//#include "ChartDirector.h"

using namespace ChartDirector;
using namespace System;
using namespace System::IO;
using namespace std;



//*******************************************
//   C U R R E N T  O V E R   T I M E
//*******************************************

Chart_It::Chart_It(int width, int height, int num_datapoints): _width(width), _height(height), _num_datapoints(num_datapoints)
{
	_dataX= gcnew array<double>(_num_datapoints);
	_dataY= gcnew array<double>(0);

	//initialize X axis
	for (int i=0; i<_dataX->Length; i++) _dataX[i]=i;

	active=true;

}
Chart_It::~Chart_It()
{
	delete _dataX, _dataY;
}

void Chart_It::InitChart(WinChartViewer^ viewer)
{
	Array::Resize(_dataY, 0);
	ShowDefaultChart(viewer);
}

void Chart_It::AddData(double val_Y)
{
	if(_dataY->Length<_num_datapoints) Array::Resize(_dataY, _dataY->Length+1);
	else ShiftDataLeft();

	_dataY[_dataY->Length-1]=val_Y;
}

void Chart_It::ShiftDataLeft()
{
	for(int i=1; i<_dataY->Length;i++) _dataY[i-1]=_dataY[i];
}

void Chart_It::ShowDefaultChart(WinChartViewer^ viewer)
{
	array<double>^ def_Y={0};

	//Set Plot Area
	_c = gcnew XYChart(_width, _height);

	_c->setBackground(0xF0F0F0);

	_c->setPlotArea(40, 10, _width - 50, _height - 40, 0xF0F0F0, -1, 0xc0c0c0, 0xc0c0c0, -1);

	//Set axis
	//_c->yAxis()->setTitle("Current [µA]", "Arial Bold Italic", 6);
	_c->yAxis()->setWidth(1);
	
	// _c->xAxis()->setTitle("Time", "Arial Bold Italic", 6);
	_c->xAxis()->setWidth(1);
	_c->xAxis()->setLinearScale(_dataX[0],_dataX[_dataX->Length-1]);

	//Set line
	//1 = square shape
	LineLayer^ layer1 = _c->addLineLayer(def_Y, 0xff3333, "Current");
    layer1->setXData(_dataX);
	layer1->setLineWidth(1);
	//layer1->getDataSet(0)->setDataSymbol(1, 5);
	
	viewer->Chart = _c;
}

void Chart_It::ShowChart(WinChartViewer^ viewer)
{
	if((_dataX->Length>=2)&&(_dataY->Length>=2))
	{
		_c = gcnew XYChart(_width, _height);

		_c->setBackground(0xF0F0F0);

		_c->setPlotArea(40, 10, _width - 50, _height - 40, 0xF0F0F0, -1, 0xc0c0c0, 0xc0c0c0, -1);

		//Set axis
		//_c->yAxis()->setTitle("Current [µA]", "Arial Bold Italic", 6);
		_c->yAxis()->setWidth(1);

		// _c->xAxis()->setTitle("Time", "Arial Bold Italic", 6);
		_c->xAxis()->setWidth(1);

		//Set line
		LineLayer^ layer1 = _c->addLineLayer(_dataY, 0xff3333, "Current");
		layer1->setXData(_dataX);
		layer1->setLineWidth(1);
		//layer1->getDataSet(0)->setDataSymbol(1, 5);	//1 = square shape
		
		viewer->Chart = _c;
	}
	
}


int Chart_It::GetDataSize()
{
	return _dataY->Length;
}




//*******************************************
//   C U R R E N T  O V E R  V O L T A G E
//*******************************************


Chart_IV::Chart_IV(int width, int height): _width(width), _height(height)
{
	_dataX= gcnew array<double>(0);
	_dataY= gcnew array<double>(0);

	active=false;
}
Chart_IV::~Chart_IV()
{
	delete _dataX, _dataY;
}

void Chart_IV::InitChart(WinChartViewer^ viewer)
{
	Array::Resize(_dataX, 0);
	Array::Resize(_dataY, 0);
	ShowDefaultChart(viewer);
}

void Chart_IV::AddData(double val_X, double val_Y)
{
	Array::Resize(_dataX, _dataX->Length+1);
	Array::Resize(_dataY, _dataY->Length+1);
	_dataX[_dataX->Length-1]=val_X;
	_dataY[_dataY->Length-1]=val_Y;
	
}

void Chart_IV::ShowDefaultChart(WinChartViewer^ viewer)
{
	array<double>^ def_X={0};
	array<double>^ def_Y={0};
	//Set Plot Area
	_c = gcnew XYChart(_width, _height);

	_c->setBackground(0xF0F0F0);

	_c->setPlotArea(50, 20, _width - 65, _height - 49, 0xF0F0F0, -1, 0xc0c0c0, 0xc0c0c0, -1);

	//Set axis
	//_c->yAxis()->setTitle("Current [µA]", "Arial Bold Italic", 6);
	_c->yAxis()->setWidth(1);

	//_c->xAxis()->setTitle("Voltage [V]", "Arial Bold Italic", 6);
	_c->xAxis()->setWidth(1);

	//Set line
	//1 = square shape
	LineLayer^ layer1 = _c->addLineLayer(def_Y, 0xff3333, "Current");
    layer1->setXData(def_X);
	layer1->setLineWidth(1);
	//layer1->getDataSet(0)->setDataSymbol(1, 5);


	viewer->Chart = _c;
}

void Chart_IV::ShowChart(WinChartViewer^ viewer)
{
	if((_dataX->Length>=2)&&(_dataY->Length>=2))
	{
		_c = gcnew XYChart(_width, _height);

		_c->setBackground(0xF0F0F0);

		_c->setPlotArea(50, 20, _width - 65, _height - 49, 0xF0F0F0, -1, 0xc0c0c0, 0xc0c0c0, -1);

		//Set axis
		//_c->yAxis()->setTitle("Current [µA]", "Arial Bold Italic", 6);
		_c->yAxis()->setWidth(1);

		//_c->xAxis()->setTitle("Voltage [V]", "Arial Bold Italic", 6);
		_c->xAxis()->setWidth(1);

		//Set line
		LineLayer^ layer1 = _c->addLineLayer(_dataY, 0xff3333, "Current");
		layer1->setXData(_dataX);
		layer1->setLineWidth(1);
		layer1->getDataSet(0)->setDataSymbol(1, 3);	//1 = square shape


		viewer->Chart = _c;
	}
	
}


int Chart_IV::GetDataSize()
{
	return _dataX->Length;
}

bool Chart_IV::SaveDataToFile(String^ filename, bool write_timestamp, int rounddigits)
{
	StreamWriter^ outfile = gcnew StreamWriter(filename);	
	if (write_timestamp) outfile->WriteLine(DateTime::Now.ToString("yyyy_MM_dd HH:mm:ss"));
	outfile->WriteLine("Voltage[V]; Current[µA]");
	for(int i=0; i<_dataX->Length; i++)	outfile->WriteLine(Math::Round(_dataX[i],rounddigits).ToString() + ";" + Math::Round(_dataY[i],rounddigits).ToString());
	outfile->Close();
	
	//do error handling!
	return true;
}