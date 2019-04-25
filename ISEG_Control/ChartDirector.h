#ifndef CHART_H
#define CHART_H

using namespace std;
using namespace System;
using namespace ChartDirector;


//*******************************************
//   C U R R E N T  O V E R   T I M E
//*******************************************

ref class Chart_It
{
public:
	Chart_It(int width, int height, int num_datapoints);
	~Chart_It();
	
	bool active;

	void InitChart(WinChartViewer^ viewer);
	void AddData(double val_Y);
	void ShiftDataLeft();
	void ShowDefaultChart(WinChartViewer^ viewer);
	void ShowChart(WinChartViewer^ viewer);

	int GetDataSize();
	
private:
	Chart_It() {} //Forbidden
	XYChart^ _c;
	array<double>^ _dataX;
	array<double>^ _dataY;
	int _height;
	int _width;
	int _num_datapoints;
};
//*******************************************
//   C U R R E N T  O V E R  V O L T A G E
//*******************************************

ref class Chart_IV
{
public:
	Chart_IV(int width, int height);
	~Chart_IV();
	
	bool active;

	void InitChart(WinChartViewer^ viewer);
	void AddData(double val_X, double val_Y);
	void ShowDefaultChart(WinChartViewer^ viewer);
	void ShowChart(WinChartViewer^ viewer);

	bool SaveDataToFile(String^ filename, bool write_timestamp, int rounddigits);

	int GetDataSize();
	
private:
	Chart_IV() {} //Forbidden
	XYChart^ _c;
	array<double>^ _dataX;
	array<double>^ _dataY;
	int _height;
	int _width;
};

#endif