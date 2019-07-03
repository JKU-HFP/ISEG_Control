#pragma once

#define  _CancelPending  if (backgroundWorker_Sweep->CancellationPending) \
						 {								  \
						 e->Cancel = true;				  \
						 return;					      \
						 }                                

#define _RoundDigits 4

#include "stdafx.h"


namespace ISEG_Control {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace ChartDirector;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	

		

	private: System::Windows::Forms::TextBox^  out_val_V2;

	private: System::Windows::Forms::TextBox^  manual_val_ramp;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  out_val_ramp;
	private: System::Windows::Forms::Button^  button_AllOff;
	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Label^  label7;
			 

	private: System::Windows::Forms::Label^  label15;


	private: System::Windows::Forms::TextBox^  out_val_I2;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  current_limit_V1;


	private: System::Windows::Forms::Label^  label18;

	private: System::Windows::Forms::Timer^  timer_OPC_update;
	private: System::Windows::Forms::Timer^  timer_Chart_update;

	private: System::Windows::Forms::Timer^  timer_form_update;
	private: System::Windows::Forms::TabControl^  TabControl1;
	private: System::Windows::Forms::TabPage^  tabPage_Manual;
	private: System::Windows::Forms::TabPage^  tabPage_Sweep;


	private: System::Windows::Forms::TextBox^  channel_V2;
	private: System::Windows::Forms::TextBox^  channel_V1;












	private: System::Windows::Forms::TextBox^  channel_V3;




	private: System::Windows::Forms::Button^  button_SetVoltage;



	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label31;

			 
	private: System::ComponentModel::IContainer^  components;





private: System::Windows::Forms::Button^  button_manual_ClearErrors;
private: System::Windows::Forms::ContextMenuStrip^  context_Chart;
private: System::Windows::Forms::ToolStripMenuItem^  toolStrip_Chart_SavaData;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;



private: System::Windows::Forms::ToolStripMenuItem^  toolStrip_Chart_Start;
private: System::Windows::Forms::ToolStripMenuItem^  toolStrip_Chart_Stop;
private: System::Windows::Forms::ToolStripMenuItem^  toolStrip_Chart_StartAll;
private: System::Windows::Forms::ToolStripMenuItem^  toolStrip_Chart_StopAll;

private: System::Windows::Forms::ToolStripMenuItem^  toolStrip_Chart_Clear;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;





private: ChartDirector::WinChartViewer^  manual_Chart_It2;




	private: 




	protected: 

	protected: 

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		Threading::Thread^ testthread;
		Logfile^ Actionlog;
		 Chart_It^ curr_time1;
		 Chart_It^ curr_time2;
		 Chart_It^ curr_time3;
		 Chart_IV^ curr1;
		 Chart_IV^ curr2;
		 Chart_IV^ curr3;
		 WatchDog^ watch;
		 PICardControl^ TriggerIO;
		 HPFreqSerial^ freqCounter;

private: System::Windows::Forms::Button^  button_Connect_IOs;
private: System::Windows::Forms::Label^  Status_IOs;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Button^  button_Connect_CAN;
private: System::Windows::Forms::Label^  Status_CAN;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TabPage^  tabPage_Settings;






private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: ChartDirector::WinChartViewer^  manual_Chart_IV1;
private: ChartDirector::WinChartViewer^  manual_Chart_It1;



private: System::Windows::Forms::TextBox^  out_val_V1;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TextBox^  out_val_I1;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::GroupBox^  groupBox5;

private: ChartDirector::WinChartViewer^  manual_Chart_IV2;
private: System::Windows::Forms::GroupBox^  groupBox6;




private: ChartDirector::WinChartViewer^  manual_Chart_IV3;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::TextBox^  out_val_I3;
private: ChartDirector::WinChartViewer^  manual_Chart_It3;
private: System::Windows::Forms::TextBox^  out_val_V3;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::TrackBar^  trackBar_ChartUpdateRate;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  Act_ChartUpdateRate;









private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  Sweep_Loops;

private: System::Windows::Forms::CheckBox^  Sweep_Loop;



private: System::Windows::Forms::CheckBox^  Sweep_Cycle;
private: System::Windows::Forms::Button^  Sweep_Calculate;


private: System::Windows::Forms::Label^  label55;

private: System::Windows::Forms::Label^  label50;

private: System::Windows::Forms::Label^  label46;

private: System::Windows::Forms::CheckBox^  enable_set_V2;
private: System::Windows::Forms::TextBox^  manual_val_V3;
private: System::Windows::Forms::TextBox^  manual_val_V2;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::CheckBox^  enable_set_V3;
private: System::Windows::Forms::GroupBox^  manual_groupbox_V2;

private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::GroupBox^  manual_groupbox_V1;

private: System::Windows::Forms::CheckBox^  enable_set_V1;
private: System::Windows::Forms::TextBox^  manual_val_V1;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::GroupBox^  manual_groupbox_V3;

private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::GroupBox^  sweep_groupbox_V1;


private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::TextBox^  Sweep_Final_V1;

private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::TextBox^  Sweep_Step_V1;

private: System::Windows::Forms::CheckBox^  Sweep_Enable_V1;

private: System::Windows::Forms::TextBox^  Sweep_Initial_V1;


private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  Sweep_StatusProgress;
private: System::Windows::Forms::Label^  Sweep_StatusStep;
private: System::Windows::Forms::ProgressBar^  Sweep_Progress;
private: System::Windows::Forms::Button^  Sweep_StartPause;

private: System::Windows::Forms::Button^  Sweep_Cancel;


private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::ComboBox^  Sweep_CalcFrom;
private: System::Windows::Forms::GroupBox^  sweep_groupbox_V3;

private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::TextBox^  Sweep_Final_V3;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::TextBox^  Sweep_Step_V3;
private: System::Windows::Forms::CheckBox^  Sweep_Enable_V3;

private: System::Windows::Forms::TextBox^  Sweep_Initial_V3;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::GroupBox^  sweep_groupbox_V2;

private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  Sweep_Final_V2;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::TextBox^  Sweep_Step_V2;
private: System::Windows::Forms::CheckBox^  Sweep_Enable_V2;

private: System::Windows::Forms::TextBox^  Sweep_Initial_V2;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::TextBox^  Sweep_ResultSpectra;
private: System::ComponentModel::BackgroundWorker^  backgroundWorker_Sweep;
private: System::Windows::Forms::CheckBox^  Sweep_Sync;
private: System::Windows::Forms::TextBox^  sweep_ramp_cycle;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::TextBox^  sweep_ramp_init;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  Module_error;
private: System::Windows::Forms::ToolTip^  toolTip;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
private: System::Windows::Forms::TextBox^  out_setpoint_V1;

private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  out_setpoint_V2;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::TextBox^  out_setpoint_V3;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  sweep_estimated_time;
private: System::Windows::Forms::TabPage^  tabPage_test;
private: System::Windows::Forms::CheckBox^  testI0;
private: System::Windows::Forms::Button^  testDisconnect;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::TextBox^  testError;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  testOutputLines;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Button^  testGetPCI;
private: System::Windows::Forms::TextBox^  testPCIList;
private: System::Windows::Forms::TextBox^  testInputChannels;
private: System::Windows::Forms::CheckBox^  testSuccess;
private: System::Windows::Forms::CheckBox^  testConnected;
private: System::Windows::Forms::CheckBox^  testOutput;
private: System::Windows::Forms::TextBox^  testID;
private: System::Windows::Forms::TextBox^  testCardNumber;
private: System::Windows::Forms::Button^  testGetIO;
private: System::Windows::Forms::Button^  testSetIO;
private: System::Windows::Forms::Button^  testConnect;

private: System::Windows::Forms::GroupBox^  manual_groupbox_V6;
private: System::Windows::Forms::CheckBox^  enable_set_V6;
private: System::Windows::Forms::TextBox^  manual_val_V6;



private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::GroupBox^  manual_groupbox_V5;
private: System::Windows::Forms::CheckBox^  enable_set_V5;
private: System::Windows::Forms::TextBox^  manual_val_V5;



private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::GroupBox^  manual_groupbox_V4;
private: System::Windows::Forms::CheckBox^  enable_set_V4;
private: System::Windows::Forms::TextBox^  manual_val_V4;



private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;

































private: System::Windows::Forms::GroupBox^  manual_groupbox_V8;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::GroupBox^  manual_groupbox_V7;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::Label^  label94;
private: System::Windows::Forms::GroupBox^  sweep_groupbox_V8;
private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::TextBox^  Sweep_Final_V8;
private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::TextBox^  Sweep_Step_V8;
private: System::Windows::Forms::CheckBox^  Sweep_Enable_V8;
private: System::Windows::Forms::TextBox^  Sweep_Initial_V8;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Label^  label107;
private: System::Windows::Forms::Label^  label108;
private: System::Windows::Forms::GroupBox^  sweep_groupbox_V7;
private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::TextBox^  Sweep_Final_V7;
private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::TextBox^  Sweep_Step_V7;
private: System::Windows::Forms::CheckBox^  Sweep_Enable_V7;
private: System::Windows::Forms::TextBox^  Sweep_Initial_V7;
private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Label^  label101;
private: System::Windows::Forms::Label^  label102;
private: System::Windows::Forms::GroupBox^  sweep_groupbox_V6;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::TextBox^  Sweep_Final_V6;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::TextBox^  Sweep_Step_V6;
private: System::Windows::Forms::CheckBox^  Sweep_Enable_V6;
private: System::Windows::Forms::TextBox^  Sweep_Initial_V6;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::GroupBox^  sweep_groupbox_V5;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::TextBox^  Sweep_Final_V5;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::TextBox^  Sweep_Step_V5;
private: System::Windows::Forms::CheckBox^  Sweep_Enable_V5;
private: System::Windows::Forms::TextBox^  Sweep_Initial_V5;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::GroupBox^  sweep_groupbox_V4;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::TextBox^  Sweep_Final_V4;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::TextBox^  Sweep_Step_V4;
private: System::Windows::Forms::CheckBox^  Sweep_Enable_V4;
private: System::Windows::Forms::TextBox^  Sweep_Initial_V4;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::TextBox^  Sweep_FileName;
private: System::Windows::Forms::Button^  Sweep_FileOpen;
private: System::Windows::Forms::RadioButton^  Sweep_ValsFromFile;
private: System::Windows::Forms::RadioButton^  Sweep_ValsFromMask;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::Label^  label110;
private: System::Windows::Forms::Label^  label109;
private: System::Windows::Forms::TextBox^  Sweep_DelayTime;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::TextBox^  current_limit_V3;
private: System::Windows::Forms::Label^  label113;
private: System::Windows::Forms::Label^  label114;
private: System::Windows::Forms::TextBox^  current_limit_V2;
private: System::Windows::Forms::Label^  label111;
private: System::Windows::Forms::Label^  label112;
private: System::Windows::Forms::GroupBox^ groupBox8;
private: System::Windows::Forms::TextBox^ creep_lambda;
private: System::Windows::Forms::Label^ label115;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ label116;
private: System::Windows::Forms::CheckBox^ enable_CreepCompensation;
private: System::Windows::Forms::Label^ label118;
private: System::Windows::Forms::TextBox^ creep_time;

private: System::Windows::Forms::Label^ label117;
private: System::Windows::Forms::Timer^ timer_creep_update;
private: System::Windows::Forms::TextBox^ creep_A;

private: System::Windows::Forms::Label^ label119;
private: System::Windows::Forms::Label^ label120;
private: System::Windows::Forms::Button^ creep_apply;
private: System::Windows::Forms::TextBox^ tbFrequency;
private: System::Windows::Forms::Button^ button_Connect_Freq;
private: System::Windows::Forms::Label^ Status_FreqCounter;
private: System::Windows::Forms::Label^ label121;
private: System::Windows::Forms::Label^ label122;



		 TestSignal^ testsignal;
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->out_val_V2 = (gcnew System::Windows::Forms::TextBox());
			this->manual_val_ramp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->out_val_ramp = (gcnew System::Windows::Forms::TextBox());
			this->button_AllOff = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->out_val_I2 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->current_limit_V1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->timer_OPC_update = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_Chart_update = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_form_update = (gcnew System::Windows::Forms::Timer(this->components));
			this->TabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_Manual = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->creep_apply = (gcnew System::Windows::Forms::Button());
			this->creep_A = (gcnew System::Windows::Forms::TextBox());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->creep_time = (gcnew System::Windows::Forms::TextBox());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->enable_CreepCompensation = (gcnew System::Windows::Forms::CheckBox());
			this->creep_lambda = (gcnew System::Windows::Forms::TextBox());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->manual_groupbox_V8 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->manual_groupbox_V7 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->manual_groupbox_V6 = (gcnew System::Windows::Forms::GroupBox());
			this->enable_set_V6 = (gcnew System::Windows::Forms::CheckBox());
			this->manual_val_V6 = (gcnew System::Windows::Forms::TextBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->manual_groupbox_V5 = (gcnew System::Windows::Forms::GroupBox());
			this->enable_set_V5 = (gcnew System::Windows::Forms::CheckBox());
			this->manual_val_V5 = (gcnew System::Windows::Forms::TextBox());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->manual_groupbox_V4 = (gcnew System::Windows::Forms::GroupBox());
			this->enable_set_V4 = (gcnew System::Windows::Forms::CheckBox());
			this->manual_val_V4 = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->manual_groupbox_V3 = (gcnew System::Windows::Forms::GroupBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->enable_set_V3 = (gcnew System::Windows::Forms::CheckBox());
			this->manual_val_V3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->manual_groupbox_V2 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->enable_set_V2 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->manual_val_V2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar_ChartUpdateRate = (gcnew System::Windows::Forms::TrackBar());
			this->button_SetVoltage = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->Act_ChartUpdateRate = (gcnew System::Windows::Forms::TextBox());
			this->manual_groupbox_V1 = (gcnew System::Windows::Forms::GroupBox());
			this->enable_set_V1 = (gcnew System::Windows::Forms::CheckBox());
			this->manual_val_V1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage_Sweep = (gcnew System::Windows::Forms::TabPage());
			this->sweep_groupbox_V8 = (gcnew System::Windows::Forms::GroupBox());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Final_V8 = (gcnew System::Windows::Forms::TextBox());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Step_V8 = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_Enable_V8 = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Initial_V8 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->sweep_groupbox_V7 = (gcnew System::Windows::Forms::GroupBox());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Final_V7 = (gcnew System::Windows::Forms::TextBox());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Step_V7 = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_Enable_V7 = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Initial_V7 = (gcnew System::Windows::Forms::TextBox());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->sweep_groupbox_V6 = (gcnew System::Windows::Forms::GroupBox());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Final_V6 = (gcnew System::Windows::Forms::TextBox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Step_V6 = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_Enable_V6 = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Initial_V6 = (gcnew System::Windows::Forms::TextBox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->sweep_groupbox_V5 = (gcnew System::Windows::Forms::GroupBox());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Final_V5 = (gcnew System::Windows::Forms::TextBox());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Step_V5 = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_Enable_V5 = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Initial_V5 = (gcnew System::Windows::Forms::TextBox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->sweep_groupbox_V4 = (gcnew System::Windows::Forms::GroupBox());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Final_V4 = (gcnew System::Windows::Forms::TextBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Step_V4 = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_Enable_V4 = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Initial_V4 = (gcnew System::Windows::Forms::TextBox());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->sweep_groupbox_V3 = (gcnew System::Windows::Forms::GroupBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Final_V3 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Step_V3 = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_Enable_V3 = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Initial_V3 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->sweep_groupbox_V2 = (gcnew System::Windows::Forms::GroupBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Final_V2 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Step_V2 = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_Enable_V2 = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Initial_V2 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->sweep_groupbox_V1 = (gcnew System::Windows::Forms::GroupBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Final_V1 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Step_V1 = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_Enable_V1 = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Initial_V1 = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->Sweep_DelayTime = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_FileName = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_FileOpen = (gcnew System::Windows::Forms::Button());
			this->Sweep_ValsFromFile = (gcnew System::Windows::Forms::RadioButton());
			this->Sweep_ValsFromMask = (gcnew System::Windows::Forms::RadioButton());
			this->sweep_estimated_time = (gcnew System::Windows::Forms::Label());
			this->Sweep_Sync = (gcnew System::Windows::Forms::CheckBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->Sweep_ResultSpectra = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_StatusProgress = (gcnew System::Windows::Forms::Label());
			this->Sweep_StatusStep = (gcnew System::Windows::Forms::Label());
			this->Sweep_Progress = (gcnew System::Windows::Forms::ProgressBar());
			this->Sweep_StartPause = (gcnew System::Windows::Forms::Button());
			this->Sweep_Cancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Sweep_CalcFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->Sweep_Loops = (gcnew System::Windows::Forms::TextBox());
			this->Sweep_Loop = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Cycle = (gcnew System::Windows::Forms::CheckBox());
			this->Sweep_Calculate = (gcnew System::Windows::Forms::Button());
			this->tabPage_Settings = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->current_limit_V3 = (gcnew System::Windows::Forms::TextBox());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->current_limit_V2 = (gcnew System::Windows::Forms::TextBox());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->sweep_ramp_cycle = (gcnew System::Windows::Forms::TextBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->sweep_ramp_init = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tabPage_test = (gcnew System::Windows::Forms::TabPage());
			this->testI0 = (gcnew System::Windows::Forms::CheckBox());
			this->testDisconnect = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->testError = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->testOutputLines = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->testGetPCI = (gcnew System::Windows::Forms::Button());
			this->testPCIList = (gcnew System::Windows::Forms::TextBox());
			this->testInputChannels = (gcnew System::Windows::Forms::TextBox());
			this->testSuccess = (gcnew System::Windows::Forms::CheckBox());
			this->testConnected = (gcnew System::Windows::Forms::CheckBox());
			this->testOutput = (gcnew System::Windows::Forms::CheckBox());
			this->testID = (gcnew System::Windows::Forms::TextBox());
			this->testCardNumber = (gcnew System::Windows::Forms::TextBox());
			this->testGetIO = (gcnew System::Windows::Forms::Button());
			this->testSetIO = (gcnew System::Windows::Forms::Button());
			this->testConnect = (gcnew System::Windows::Forms::Button());
			this->channel_V1 = (gcnew System::Windows::Forms::TextBox());
			this->channel_V2 = (gcnew System::Windows::Forms::TextBox());
			this->channel_V3 = (gcnew System::Windows::Forms::TextBox());
			this->context_Chart = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStrip_Chart_SavaData = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStrip_Chart_Start = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip_Chart_Stop = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip_Chart_Clear = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStrip_Chart_StartAll = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip_Chart_StopAll = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manual_Chart_It2 = (gcnew ChartDirector::WinChartViewer());
			this->button_manual_ClearErrors = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button_Connect_IOs = (gcnew System::Windows::Forms::Button());
			this->Status_IOs = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->button_Connect_CAN = (gcnew System::Windows::Forms::Button());
			this->Status_CAN = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button_Connect_Freq = (gcnew System::Windows::Forms::Button());
			this->Status_FreqCounter = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->tbFrequency = (gcnew System::Windows::Forms::TextBox());
			this->Module_error = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->out_setpoint_V1 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->manual_Chart_IV1 = (gcnew ChartDirector::WinChartViewer());
			this->manual_Chart_It1 = (gcnew ChartDirector::WinChartViewer());
			this->out_val_V1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->out_val_I1 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->out_setpoint_V2 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->manual_Chart_IV2 = (gcnew ChartDirector::WinChartViewer());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->out_setpoint_V3 = (gcnew System::Windows::Forms::TextBox());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->manual_Chart_IV3 = (gcnew ChartDirector::WinChartViewer());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->out_val_I3 = (gcnew System::Windows::Forms::TextBox());
			this->manual_Chart_It3 = (gcnew ChartDirector::WinChartViewer());
			this->out_val_V3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker_Sweep = (gcnew System::ComponentModel::BackgroundWorker());
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->timer_creep_update = (gcnew System::Windows::Forms::Timer(this->components));
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->TabControl1->SuspendLayout();
			this->tabPage_Manual->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->manual_groupbox_V8->SuspendLayout();
			this->manual_groupbox_V7->SuspendLayout();
			this->manual_groupbox_V6->SuspendLayout();
			this->manual_groupbox_V5->SuspendLayout();
			this->manual_groupbox_V4->SuspendLayout();
			this->manual_groupbox_V3->SuspendLayout();
			this->manual_groupbox_V2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar_ChartUpdateRate))->BeginInit();
			this->manual_groupbox_V1->SuspendLayout();
			this->tabPage_Sweep->SuspendLayout();
			this->sweep_groupbox_V8->SuspendLayout();
			this->sweep_groupbox_V7->SuspendLayout();
			this->sweep_groupbox_V6->SuspendLayout();
			this->sweep_groupbox_V5->SuspendLayout();
			this->sweep_groupbox_V4->SuspendLayout();
			this->sweep_groupbox_V3->SuspendLayout();
			this->sweep_groupbox_V2->SuspendLayout();
			this->sweep_groupbox_V1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage_Settings->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->tabPage_test->SuspendLayout();
			this->context_Chart->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_It2))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_IV1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_It1))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_IV2))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_IV3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_It3))->BeginInit();
			this->SuspendLayout();
			// 
			// out_val_V2
			// 
			this->out_val_V2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->out_val_V2->Location = System::Drawing::Point(160, 23);
			this->out_val_V2->Name = L"out_val_V2";
			this->out_val_V2->ReadOnly = true;
			this->out_val_V2->Size = System::Drawing::Size(64, 20);
			this->out_val_V2->TabIndex = 18;
			// 
			// manual_val_ramp
			// 
			this->manual_val_ramp->Location = System::Drawing::Point(184, 32);
			this->manual_val_ramp->Name = L"manual_val_ramp";
			this->manual_val_ramp->Size = System::Drawing::Size(67, 20);
			this->manual_val_ramp->TabIndex = 20;
			this->manual_val_ramp->Text = L"0,01";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Ramp Manual Mode";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(257, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"V/s";
			// 
			// out_val_ramp
			// 
			this->out_val_ramp->Location = System::Drawing::Point(373, 32);
			this->out_val_ramp->Name = L"out_val_ramp";
			this->out_val_ramp->ReadOnly = true;
			this->out_val_ramp->Size = System::Drawing::Size(67, 20);
			this->out_val_ramp->TabIndex = 23;
			this->toolTip->SetToolTip(this->out_val_ramp, L"Actually used ramp for all channels");
			// 
			// button_AllOff
			// 
			this->button_AllOff->Location = System::Drawing::Point(22, 150);
			this->button_AllOff->Name = L"button_AllOff";
			this->button_AllOff->Size = System::Drawing::Size(173, 22);
			this->button_AllOff->TabIndex = 2;
			this->button_AllOff->Text = L"All Off";
			this->button_AllOff->UseVisualStyleBackColor = true;
			this->button_AllOff->Click += gcnew System::EventHandler(this, &Form1::button_AllOff_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(446, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"V/s";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(229, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"V";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(227, 49);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 13);
			this->label15->TabIndex = 38;
			this->label15->Text = L"µA";
			// 
			// out_val_I2
			// 
			this->out_val_I2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->out_val_I2->Location = System::Drawing::Point(160, 48);
			this->out_val_I2->Name = L"out_val_I2";
			this->out_val_I2->ReadOnly = true;
			this->out_val_I2->Size = System::Drawing::Size(64, 20);
			this->out_val_I2->TabIndex = 35;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(18, 33);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 13);
			this->label17->TabIndex = 41;
			this->label17->Text = L"V1";
			// 
			// current_limit_V1
			// 
			this->current_limit_V1->Location = System::Drawing::Point(154, 30);
			this->current_limit_V1->Name = L"current_limit_V1";
			this->current_limit_V1->Size = System::Drawing::Size(67, 20);
			this->current_limit_V1->TabIndex = 42;
			this->current_limit_V1->Text = L"0";
			this->toolTip->SetToolTip(this->current_limit_V1, L"If a channel exceeds this limit, all channels ramp down\r\nto 0V. A new voltage can"
				L" be set after pressing the\r\n\"Clear errors\" button");
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(223, 33);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(20, 13);
			this->label18->TabIndex = 43;
			this->label18->Text = L"µA";
			// 
			// timer_OPC_update
			// 
			this->timer_OPC_update->Interval = 20;
			this->timer_OPC_update->Tick += gcnew System::EventHandler(this, &Form1::timer_OPC_update_Tick);
			// 
			// timer_Chart_update
			// 
			this->timer_Chart_update->Interval = 500;
			this->timer_Chart_update->Tick += gcnew System::EventHandler(this, &Form1::timer_Chart_update_Tick);
			// 
			// timer_form_update
			// 
			this->timer_form_update->Interval = 300;
			this->timer_form_update->Tick += gcnew System::EventHandler(this, &Form1::timer_form_update_Tick);
			// 
			// TabControl1
			// 
			this->TabControl1->Controls->Add(this->tabPage_Manual);
			this->TabControl1->Controls->Add(this->tabPage_Sweep);
			this->TabControl1->Controls->Add(this->tabPage_Settings);
			this->TabControl1->Controls->Add(this->tabPage_test);
			this->TabControl1->Location = System::Drawing::Point(12, 12);
			this->TabControl1->Name = L"TabControl1";
			this->TabControl1->SelectedIndex = 0;
			this->TabControl1->Size = System::Drawing::Size(644, 663);
			this->TabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->TabControl1->TabIndex = 0;
			// 
			// tabPage_Manual
			// 
			this->tabPage_Manual->AutoScroll = true;
			this->tabPage_Manual->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage_Manual->Controls->Add(this->groupBox8);
			this->tabPage_Manual->Controls->Add(this->manual_groupbox_V8);
			this->tabPage_Manual->Controls->Add(this->manual_groupbox_V7);
			this->tabPage_Manual->Controls->Add(this->manual_groupbox_V6);
			this->tabPage_Manual->Controls->Add(this->manual_groupbox_V5);
			this->tabPage_Manual->Controls->Add(this->manual_groupbox_V4);
			this->tabPage_Manual->Controls->Add(this->manual_groupbox_V3);
			this->tabPage_Manual->Controls->Add(this->manual_groupbox_V2);
			this->tabPage_Manual->Controls->Add(this->groupBox2);
			this->tabPage_Manual->Controls->Add(this->manual_groupbox_V1);
			this->tabPage_Manual->Location = System::Drawing::Point(4, 22);
			this->tabPage_Manual->Name = L"tabPage_Manual";
			this->tabPage_Manual->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Manual->Size = System::Drawing::Size(636, 637);
			this->tabPage_Manual->TabIndex = 0;
			this->tabPage_Manual->Text = L"Manual Mode";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->creep_apply);
			this->groupBox8->Controls->Add(this->creep_A);
			this->groupBox8->Controls->Add(this->label119);
			this->groupBox8->Controls->Add(this->label120);
			this->groupBox8->Controls->Add(this->label118);
			this->groupBox8->Controls->Add(this->creep_time);
			this->groupBox8->Controls->Add(this->label117);
			this->groupBox8->Controls->Add(this->enable_CreepCompensation);
			this->groupBox8->Controls->Add(this->creep_lambda);
			this->groupBox8->Controls->Add(this->label115);
			this->groupBox8->Controls->Add(this->pictureBox4);
			this->groupBox8->Controls->Add(this->label116);
			this->groupBox8->Location = System::Drawing::Point(258, 24);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(362, 196);
			this->groupBox8->TabIndex = 53;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Creep Compensation";
			// 
			// creep_apply
			// 
			this->creep_apply->Location = System::Drawing::Point(260, 99);
			this->creep_apply->Name = L"creep_apply";
			this->creep_apply->Size = System::Drawing::Size(64, 23);
			this->creep_apply->TabIndex = 54;
			this->creep_apply->Text = L"Apply";
			this->creep_apply->UseVisualStyleBackColor = true;
			this->creep_apply->Click += gcnew System::EventHandler(this, &Form1::Creep_apply_Click);
			// 
			// creep_A
			// 
			this->creep_A->BackColor = System::Drawing::SystemColors::Window;
			this->creep_A->ForeColor = System::Drawing::SystemColors::WindowText;
			this->creep_A->Location = System::Drawing::Point(260, 45);
			this->creep_A->Name = L"creep_A";
			this->creep_A->Size = System::Drawing::Size(64, 20);
			this->creep_A->TabIndex = 71;
			this->creep_A->Text = L"0";
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->Location = System::Drawing::Point(232, 48);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(14, 13);
			this->label119->TabIndex = 73;
			this->label119->Text = L"A";
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->Location = System::Drawing::Point(330, 49);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(23, 13);
			this->label120->TabIndex = 72;
			this->label120->Text = L"1/s";
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Location = System::Drawing::Point(232, 160);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(10, 13);
			this->label118->TabIndex = 70;
			this->label118->Text = L"t";
			// 
			// creep_time
			// 
			this->creep_time->BackColor = System::Drawing::SystemColors::ControlLight;
			this->creep_time->Location = System::Drawing::Point(260, 157);
			this->creep_time->Name = L"creep_time";
			this->creep_time->ReadOnly = true;
			this->creep_time->Size = System::Drawing::Size(64, 20);
			this->creep_time->TabIndex = 68;
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->Location = System::Drawing::Point(330, 161);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(12, 13);
			this->label117->TabIndex = 69;
			this->label117->Text = L"s";
			// 
			// enable_CreepCompensation
			// 
			this->enable_CreepCompensation->AutoSize = true;
			this->enable_CreepCompensation->Location = System::Drawing::Point(263, 19);
			this->enable_CreepCompensation->Name = L"enable_CreepCompensation";
			this->enable_CreepCompensation->Size = System::Drawing::Size(58, 17);
			this->enable_CreepCompensation->TabIndex = 33;
			this->enable_CreepCompensation->Text = L"enable";
			this->enable_CreepCompensation->UseVisualStyleBackColor = true;
			// 
			// creep_lambda
			// 
			this->creep_lambda->BackColor = System::Drawing::SystemColors::Window;
			this->creep_lambda->ForeColor = System::Drawing::SystemColors::WindowText;
			this->creep_lambda->Location = System::Drawing::Point(260, 71);
			this->creep_lambda->Name = L"creep_lambda";
			this->creep_lambda->Size = System::Drawing::Size(64, 20);
			this->creep_lambda->TabIndex = 33;
			this->creep_lambda->Text = L"0";
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Location = System::Drawing::Point(232, 74);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(12, 13);
			this->label115->TabIndex = 35;
			this->label115->Text = L"λ";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(6, 16);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(204, 161);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->Location = System::Drawing::Point(330, 75);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(23, 13);
			this->label116->TabIndex = 34;
			this->label116->Text = L"1/s";
			// 
			// manual_groupbox_V8
			// 
			this->manual_groupbox_V8->Controls->Add(this->checkBox5);
			this->manual_groupbox_V8->Controls->Add(this->textBox11);
			this->manual_groupbox_V8->Controls->Add(this->label95);
			this->manual_groupbox_V8->Controls->Add(this->label96);
			this->manual_groupbox_V8->Location = System::Drawing::Point(482, 410);
			this->manual_groupbox_V8->Name = L"manual_groupbox_V8";
			this->manual_groupbox_V8->Size = System::Drawing::Size(135, 142);
			this->manual_groupbox_V8->TabIndex = 52;
			this->manual_groupbox_V8->TabStop = false;
			this->manual_groupbox_V8->Text = L"Voltage 8";
			this->manual_groupbox_V8->Visible = false;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(57, 27);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(58, 17);
			this->checkBox5->TabIndex = 0;
			this->checkBox5->Text = L"enable";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Window;
			this->textBox11->Enabled = false;
			this->textBox11->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox11->Location = System::Drawing::Point(57, 50);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(58, 20);
			this->textBox11->TabIndex = 1;
			this->textBox11->Text = L"0";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(4, 50);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(46, 13);
			this->label95->TabIndex = 32;
			this->label95->Text = L"Setpoint";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(117, 53);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(14, 13);
			this->label96->TabIndex = 26;
			this->label96->Text = L"V";
			// 
			// manual_groupbox_V7
			// 
			this->manual_groupbox_V7->Controls->Add(this->checkBox4);
			this->manual_groupbox_V7->Controls->Add(this->textBox10);
			this->manual_groupbox_V7->Controls->Add(this->label93);
			this->manual_groupbox_V7->Controls->Add(this->label94);
			this->manual_groupbox_V7->Location = System::Drawing::Point(331, 410);
			this->manual_groupbox_V7->Name = L"manual_groupbox_V7";
			this->manual_groupbox_V7->Size = System::Drawing::Size(135, 142);
			this->manual_groupbox_V7->TabIndex = 52;
			this->manual_groupbox_V7->TabStop = false;
			this->manual_groupbox_V7->Text = L"Voltage 7";
			this->manual_groupbox_V7->Visible = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(57, 27);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(58, 17);
			this->checkBox4->TabIndex = 0;
			this->checkBox4->Text = L"enable";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Window;
			this->textBox10->Enabled = false;
			this->textBox10->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox10->Location = System::Drawing::Point(57, 50);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(58, 20);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = L"0";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(4, 50);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(46, 13);
			this->label93->TabIndex = 32;
			this->label93->Text = L"Setpoint";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Location = System::Drawing::Point(117, 53);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(14, 13);
			this->label94->TabIndex = 26;
			this->label94->Text = L"V";
			// 
			// manual_groupbox_V6
			// 
			this->manual_groupbox_V6->Controls->Add(this->enable_set_V6);
			this->manual_groupbox_V6->Controls->Add(this->manual_val_V6);
			this->manual_groupbox_V6->Controls->Add(this->label73);
			this->manual_groupbox_V6->Controls->Add(this->label74);
			this->manual_groupbox_V6->Location = System::Drawing::Point(175, 410);
			this->manual_groupbox_V6->Name = L"manual_groupbox_V6";
			this->manual_groupbox_V6->Size = System::Drawing::Size(135, 142);
			this->manual_groupbox_V6->TabIndex = 51;
			this->manual_groupbox_V6->TabStop = false;
			this->manual_groupbox_V6->Text = L"Voltage 6";
			this->manual_groupbox_V6->Visible = false;
			// 
			// enable_set_V6
			// 
			this->enable_set_V6->AutoSize = true;
			this->enable_set_V6->Location = System::Drawing::Point(57, 27);
			this->enable_set_V6->Name = L"enable_set_V6";
			this->enable_set_V6->Size = System::Drawing::Size(58, 17);
			this->enable_set_V6->TabIndex = 0;
			this->enable_set_V6->Text = L"enable";
			this->enable_set_V6->UseVisualStyleBackColor = true;
			// 
			// manual_val_V6
			// 
			this->manual_val_V6->BackColor = System::Drawing::SystemColors::Window;
			this->manual_val_V6->Enabled = false;
			this->manual_val_V6->ForeColor = System::Drawing::SystemColors::WindowText;
			this->manual_val_V6->Location = System::Drawing::Point(57, 50);
			this->manual_val_V6->Name = L"manual_val_V6";
			this->manual_val_V6->Size = System::Drawing::Size(58, 20);
			this->manual_val_V6->TabIndex = 1;
			this->manual_val_V6->Text = L"0";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(4, 50);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(46, 13);
			this->label73->TabIndex = 32;
			this->label73->Text = L"Setpoint";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(117, 53);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(14, 13);
			this->label74->TabIndex = 26;
			this->label74->Text = L"V";
			// 
			// manual_groupbox_V5
			// 
			this->manual_groupbox_V5->Controls->Add(this->enable_set_V5);
			this->manual_groupbox_V5->Controls->Add(this->manual_val_V5);
			this->manual_groupbox_V5->Controls->Add(this->label71);
			this->manual_groupbox_V5->Controls->Add(this->label72);
			this->manual_groupbox_V5->Location = System::Drawing::Point(20, 410);
			this->manual_groupbox_V5->Name = L"manual_groupbox_V5";
			this->manual_groupbox_V5->Size = System::Drawing::Size(139, 142);
			this->manual_groupbox_V5->TabIndex = 50;
			this->manual_groupbox_V5->TabStop = false;
			this->manual_groupbox_V5->Text = L"Voltage 5";
			this->manual_groupbox_V5->Visible = false;
			// 
			// enable_set_V5
			// 
			this->enable_set_V5->AutoSize = true;
			this->enable_set_V5->Location = System::Drawing::Point(60, 27);
			this->enable_set_V5->Name = L"enable_set_V5";
			this->enable_set_V5->Size = System::Drawing::Size(58, 17);
			this->enable_set_V5->TabIndex = 0;
			this->enable_set_V5->Text = L"enable";
			this->enable_set_V5->UseVisualStyleBackColor = true;
			// 
			// manual_val_V5
			// 
			this->manual_val_V5->BackColor = System::Drawing::SystemColors::Window;
			this->manual_val_V5->Enabled = false;
			this->manual_val_V5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->manual_val_V5->Location = System::Drawing::Point(60, 50);
			this->manual_val_V5->Name = L"manual_val_V5";
			this->manual_val_V5->Size = System::Drawing::Size(58, 20);
			this->manual_val_V5->TabIndex = 1;
			this->manual_val_V5->Text = L"0";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(5, 53);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(46, 13);
			this->label71->TabIndex = 32;
			this->label71->Text = L"Setpoint";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(120, 53);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(14, 13);
			this->label72->TabIndex = 26;
			this->label72->Text = L"V";
			// 
			// manual_groupbox_V4
			// 
			this->manual_groupbox_V4->Controls->Add(this->enable_set_V4);
			this->manual_groupbox_V4->Controls->Add(this->manual_val_V4);
			this->manual_groupbox_V4->Controls->Add(this->label69);
			this->manual_groupbox_V4->Controls->Add(this->label70);
			this->manual_groupbox_V4->Location = System::Drawing::Point(483, 256);
			this->manual_groupbox_V4->Name = L"manual_groupbox_V4";
			this->manual_groupbox_V4->Size = System::Drawing::Size(139, 142);
			this->manual_groupbox_V4->TabIndex = 49;
			this->manual_groupbox_V4->TabStop = false;
			this->manual_groupbox_V4->Text = L"Voltage 4";
			this->manual_groupbox_V4->Visible = false;
			// 
			// enable_set_V4
			// 
			this->enable_set_V4->AutoSize = true;
			this->enable_set_V4->Location = System::Drawing::Point(60, 27);
			this->enable_set_V4->Name = L"enable_set_V4";
			this->enable_set_V4->Size = System::Drawing::Size(58, 17);
			this->enable_set_V4->TabIndex = 0;
			this->enable_set_V4->Text = L"enable";
			this->enable_set_V4->UseVisualStyleBackColor = true;
			// 
			// manual_val_V4
			// 
			this->manual_val_V4->BackColor = System::Drawing::SystemColors::Window;
			this->manual_val_V4->Enabled = false;
			this->manual_val_V4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->manual_val_V4->Location = System::Drawing::Point(60, 50);
			this->manual_val_V4->Name = L"manual_val_V4";
			this->manual_val_V4->Size = System::Drawing::Size(58, 20);
			this->manual_val_V4->TabIndex = 1;
			this->manual_val_V4->Text = L"0";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(5, 53);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(46, 13);
			this->label69->TabIndex = 32;
			this->label69->Text = L"Setpoint";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(120, 53);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(14, 13);
			this->label70->TabIndex = 26;
			this->label70->Text = L"V";
			// 
			// manual_groupbox_V3
			// 
			this->manual_groupbox_V3->Controls->Add(this->label41);
			this->manual_groupbox_V3->Controls->Add(this->enable_set_V3);
			this->manual_groupbox_V3->Controls->Add(this->manual_val_V3);
			this->manual_groupbox_V3->Controls->Add(this->label10);
			this->manual_groupbox_V3->Location = System::Drawing::Point(327, 258);
			this->manual_groupbox_V3->Name = L"manual_groupbox_V3";
			this->manual_groupbox_V3->Size = System::Drawing::Size(139, 140);
			this->manual_groupbox_V3->TabIndex = 0;
			this->manual_groupbox_V3->TabStop = false;
			this->manual_groupbox_V3->Text = L"Voltage 3";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(9, 51);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(46, 13);
			this->label41->TabIndex = 37;
			this->label41->Text = L"Setpoint";
			// 
			// enable_set_V3
			// 
			this->enable_set_V3->AutoSize = true;
			this->enable_set_V3->Location = System::Drawing::Point(61, 25);
			this->enable_set_V3->Name = L"enable_set_V3";
			this->enable_set_V3->Size = System::Drawing::Size(58, 17);
			this->enable_set_V3->TabIndex = 0;
			this->enable_set_V3->Text = L"enable";
			this->enable_set_V3->UseVisualStyleBackColor = true;
			// 
			// manual_val_V3
			// 
			this->manual_val_V3->BackColor = System::Drawing::SystemColors::Window;
			this->manual_val_V3->Enabled = false;
			this->manual_val_V3->Location = System::Drawing::Point(61, 51);
			this->manual_val_V3->Name = L"manual_val_V3";
			this->manual_val_V3->Size = System::Drawing::Size(53, 20);
			this->manual_val_V3->TabIndex = 1;
			this->manual_val_V3->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(116, 53);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 39;
			this->label10->Text = L"V";
			// 
			// manual_groupbox_V2
			// 
			this->manual_groupbox_V2->Controls->Add(this->label12);
			this->manual_groupbox_V2->Controls->Add(this->enable_set_V2);
			this->manual_groupbox_V2->Controls->Add(this->label8);
			this->manual_groupbox_V2->Controls->Add(this->manual_val_V2);
			this->manual_groupbox_V2->Location = System::Drawing::Point(175, 258);
			this->manual_groupbox_V2->Name = L"manual_groupbox_V2";
			this->manual_groupbox_V2->Size = System::Drawing::Size(135, 140);
			this->manual_groupbox_V2->TabIndex = 1;
			this->manual_groupbox_V2->TabStop = false;
			this->manual_groupbox_V2->Text = L"Voltage 2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 51);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 13);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Setpoint";
			// 
			// enable_set_V2
			// 
			this->enable_set_V2->AutoSize = true;
			this->enable_set_V2->Location = System::Drawing::Point(57, 25);
			this->enable_set_V2->Name = L"enable_set_V2";
			this->enable_set_V2->Size = System::Drawing::Size(58, 17);
			this->enable_set_V2->TabIndex = 0;
			this->enable_set_V2->Text = L"enable";
			this->enable_set_V2->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(116, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"V";
			// 
			// manual_val_V2
			// 
			this->manual_val_V2->BackColor = System::Drawing::SystemColors::Window;
			this->manual_val_V2->Enabled = false;
			this->manual_val_V2->Location = System::Drawing::Point(57, 48);
			this->manual_val_V2->Name = L"manual_val_V2";
			this->manual_val_V2->Size = System::Drawing::Size(53, 20);
			this->manual_val_V2->TabIndex = 1;
			this->manual_val_V2->Text = L"0";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button_AllOff);
			this->groupBox2->Controls->Add(this->trackBar_ChartUpdateRate);
			this->groupBox2->Controls->Add(this->button_SetVoltage);
			this->groupBox2->Controls->Add(this->label32);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->Act_ChartUpdateRate);
			this->groupBox2->Location = System::Drawing::Point(20, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(221, 196);
			this->groupBox2->TabIndex = 48;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"General";
			// 
			// trackBar_ChartUpdateRate
			// 
			this->trackBar_ChartUpdateRate->Location = System::Drawing::Point(17, 66);
			this->trackBar_ChartUpdateRate->Maximum = 2000;
			this->trackBar_ChartUpdateRate->Minimum = 100;
			this->trackBar_ChartUpdateRate->Name = L"trackBar_ChartUpdateRate";
			this->trackBar_ChartUpdateRate->Size = System::Drawing::Size(178, 45);
			this->trackBar_ChartUpdateRate->TabIndex = 0;
			this->trackBar_ChartUpdateRate->TickFrequency = 100;
			this->trackBar_ChartUpdateRate->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar_ChartUpdateRate->Value = 1000;
			this->trackBar_ChartUpdateRate->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar_ChartUpdateRate_ValueChanged);
			// 
			// button_SetVoltage
			// 
			this->button_SetVoltage->Location = System::Drawing::Point(22, 124);
			this->button_SetVoltage->Name = L"button_SetVoltage";
			this->button_SetVoltage->Size = System::Drawing::Size(173, 23);
			this->button_SetVoltage->TabIndex = 1;
			this->button_SetVoltage->Text = L"Set Voltage(s)";
			this->button_SetVoltage->UseVisualStyleBackColor = true;
			this->button_SetVoltage->Click += gcnew System::EventHandler(this, &Form1::button_SetVoltage_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(19, 30);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(108, 13);
			this->label32->TabIndex = 50;
			this->label32->Text = L"V(I) Chart update rate";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(175, 31);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(20, 13);
			this->label33->TabIndex = 53;
			this->label33->Text = L"ms";
			// 
			// Act_ChartUpdateRate
			// 
			this->Act_ChartUpdateRate->BackColor = System::Drawing::SystemColors::Control;
			this->Act_ChartUpdateRate->Location = System::Drawing::Point(129, 28);
			this->Act_ChartUpdateRate->Name = L"Act_ChartUpdateRate";
			this->Act_ChartUpdateRate->ReadOnly = true;
			this->Act_ChartUpdateRate->Size = System::Drawing::Size(44, 20);
			this->Act_ChartUpdateRate->TabIndex = 52;
			// 
			// manual_groupbox_V1
			// 
			this->manual_groupbox_V1->Controls->Add(this->enable_set_V1);
			this->manual_groupbox_V1->Controls->Add(this->manual_val_V1);
			this->manual_groupbox_V1->Controls->Add(this->label11);
			this->manual_groupbox_V1->Controls->Add(this->label5);
			this->manual_groupbox_V1->Location = System::Drawing::Point(20, 256);
			this->manual_groupbox_V1->Name = L"manual_groupbox_V1";
			this->manual_groupbox_V1->Size = System::Drawing::Size(139, 142);
			this->manual_groupbox_V1->TabIndex = 0;
			this->manual_groupbox_V1->TabStop = false;
			this->manual_groupbox_V1->Text = L"Voltage 1 (Creep comp.)";
			// 
			// enable_set_V1
			// 
			this->enable_set_V1->AutoSize = true;
			this->enable_set_V1->Location = System::Drawing::Point(60, 27);
			this->enable_set_V1->Name = L"enable_set_V1";
			this->enable_set_V1->Size = System::Drawing::Size(58, 17);
			this->enable_set_V1->TabIndex = 0;
			this->enable_set_V1->Text = L"enable";
			this->enable_set_V1->UseVisualStyleBackColor = true;
			// 
			// manual_val_V1
			// 
			this->manual_val_V1->BackColor = System::Drawing::SystemColors::Window;
			this->manual_val_V1->Enabled = false;
			this->manual_val_V1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->manual_val_V1->Location = System::Drawing::Point(60, 50);
			this->manual_val_V1->Name = L"manual_val_V1";
			this->manual_val_V1->Size = System::Drawing::Size(58, 20);
			this->manual_val_V1->TabIndex = 1;
			this->manual_val_V1->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(5, 53);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 13);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Setpoint";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(120, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"V";
			// 
			// tabPage_Sweep
			// 
			this->tabPage_Sweep->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage_Sweep->Controls->Add(this->sweep_groupbox_V8);
			this->tabPage_Sweep->Controls->Add(this->sweep_groupbox_V7);
			this->tabPage_Sweep->Controls->Add(this->sweep_groupbox_V6);
			this->tabPage_Sweep->Controls->Add(this->sweep_groupbox_V5);
			this->tabPage_Sweep->Controls->Add(this->sweep_groupbox_V4);
			this->tabPage_Sweep->Controls->Add(this->sweep_groupbox_V3);
			this->tabPage_Sweep->Controls->Add(this->sweep_groupbox_V2);
			this->tabPage_Sweep->Controls->Add(this->sweep_groupbox_V1);
			this->tabPage_Sweep->Controls->Add(this->groupBox1);
			this->tabPage_Sweep->Location = System::Drawing::Point(4, 22);
			this->tabPage_Sweep->Name = L"tabPage_Sweep";
			this->tabPage_Sweep->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Sweep->Size = System::Drawing::Size(636, 637);
			this->tabPage_Sweep->TabIndex = 1;
			this->tabPage_Sweep->Text = L"Sweep Mode";
			// 
			// sweep_groupbox_V8
			// 
			this->sweep_groupbox_V8->Controls->Add(this->label103);
			this->sweep_groupbox_V8->Controls->Add(this->Sweep_Final_V8);
			this->sweep_groupbox_V8->Controls->Add(this->label104);
			this->sweep_groupbox_V8->Controls->Add(this->Sweep_Step_V8);
			this->sweep_groupbox_V8->Controls->Add(this->Sweep_Enable_V8);
			this->sweep_groupbox_V8->Controls->Add(this->Sweep_Initial_V8);
			this->sweep_groupbox_V8->Controls->Add(this->label105);
			this->sweep_groupbox_V8->Controls->Add(this->label106);
			this->sweep_groupbox_V8->Controls->Add(this->label107);
			this->sweep_groupbox_V8->Controls->Add(this->label108);
			this->sweep_groupbox_V8->Location = System::Drawing::Point(478, 478);
			this->sweep_groupbox_V8->Name = L"sweep_groupbox_V8";
			this->sweep_groupbox_V8->Size = System::Drawing::Size(139, 143);
			this->sweep_groupbox_V8->TabIndex = 77;
			this->sweep_groupbox_V8->TabStop = false;
			this->sweep_groupbox_V8->Text = L"Voltage 8";
			this->sweep_groupbox_V8->Visible = false;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Location = System::Drawing::Point(118, 105);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(14, 13);
			this->label103->TabIndex = 73;
			this->label103->Text = L"V";
			// 
			// Sweep_Final_V8
			// 
			this->Sweep_Final_V8->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Final_V8->Enabled = false;
			this->Sweep_Final_V8->Location = System::Drawing::Point(58, 102);
			this->Sweep_Final_V8->Name = L"Sweep_Final_V8";
			this->Sweep_Final_V8->Size = System::Drawing::Size(58, 20);
			this->Sweep_Final_V8->TabIndex = 72;
			this->Sweep_Final_V8->Text = L"0";
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Location = System::Drawing::Point(118, 78);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(14, 13);
			this->label104->TabIndex = 71;
			this->label104->Text = L"V";
			// 
			// Sweep_Step_V8
			// 
			this->Sweep_Step_V8->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Step_V8->Enabled = false;
			this->Sweep_Step_V8->Location = System::Drawing::Point(58, 75);
			this->Sweep_Step_V8->Name = L"Sweep_Step_V8";
			this->Sweep_Step_V8->Size = System::Drawing::Size(58, 20);
			this->Sweep_Step_V8->TabIndex = 70;
			this->Sweep_Step_V8->Text = L"0";
			this->toolTip->SetToolTip(this->Sweep_Step_V8, L"Must not be larger than the whole range (|Final - Initial|)\r\nand must fit in dire"
				L"ction (e.g. Initial=10V, Final =-10\r\n-> Positive step in not permitted)");
			// 
			// Sweep_Enable_V8
			// 
			this->Sweep_Enable_V8->AutoSize = true;
			this->Sweep_Enable_V8->Location = System::Drawing::Point(58, 27);
			this->Sweep_Enable_V8->Name = L"Sweep_Enable_V8";
			this->Sweep_Enable_V8->Size = System::Drawing::Size(58, 17);
			this->Sweep_Enable_V8->TabIndex = 14;
			this->Sweep_Enable_V8->Text = L"enable";
			this->toolTip->SetToolTip(this->Sweep_Enable_V8, L"Enables the Voltage for Sweep Mode. If not enabled,\r\nall parameters are ignored a"
				L"nd no I(V)-measurement\r\nwill be started.\r\n");
			this->Sweep_Enable_V8->UseVisualStyleBackColor = true;
			// 
			// Sweep_Initial_V8
			// 
			this->Sweep_Initial_V8->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Initial_V8->Enabled = false;
			this->Sweep_Initial_V8->Location = System::Drawing::Point(58, 50);
			this->Sweep_Initial_V8->Name = L"Sweep_Initial_V8";
			this->Sweep_Initial_V8->Size = System::Drawing::Size(58, 20);
			this->Sweep_Initial_V8->TabIndex = 11;
			this->Sweep_Initial_V8->Text = L"0";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Location = System::Drawing::Point(118, 53);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(14, 13);
			this->label105->TabIndex = 26;
			this->label105->Text = L"V";
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->Location = System::Drawing::Point(11, 53);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(31, 13);
			this->label106->TabIndex = 46;
			this->label106->Text = L"Initial";
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->Location = System::Drawing::Point(11, 78);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(29, 13);
			this->label107->TabIndex = 58;
			this->label107->Text = L"Step";
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->Location = System::Drawing::Point(11, 105);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(29, 13);
			this->label108->TabIndex = 69;
			this->label108->Text = L"Final";
			// 
			// sweep_groupbox_V7
			// 
			this->sweep_groupbox_V7->Controls->Add(this->label97);
			this->sweep_groupbox_V7->Controls->Add(this->Sweep_Final_V7);
			this->sweep_groupbox_V7->Controls->Add(this->label98);
			this->sweep_groupbox_V7->Controls->Add(this->Sweep_Step_V7);
			this->sweep_groupbox_V7->Controls->Add(this->Sweep_Enable_V7);
			this->sweep_groupbox_V7->Controls->Add(this->Sweep_Initial_V7);
			this->sweep_groupbox_V7->Controls->Add(this->label99);
			this->sweep_groupbox_V7->Controls->Add(this->label100);
			this->sweep_groupbox_V7->Controls->Add(this->label101);
			this->sweep_groupbox_V7->Controls->Add(this->label102);
			this->sweep_groupbox_V7->Location = System::Drawing::Point(325, 478);
			this->sweep_groupbox_V7->Name = L"sweep_groupbox_V7";
			this->sweep_groupbox_V7->Size = System::Drawing::Size(139, 143);
			this->sweep_groupbox_V7->TabIndex = 76;
			this->sweep_groupbox_V7->TabStop = false;
			this->sweep_groupbox_V7->Text = L"Voltage 7";
			this->sweep_groupbox_V7->Visible = false;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(118, 105);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(14, 13);
			this->label97->TabIndex = 73;
			this->label97->Text = L"V";
			// 
			// Sweep_Final_V7
			// 
			this->Sweep_Final_V7->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Final_V7->Enabled = false;
			this->Sweep_Final_V7->Location = System::Drawing::Point(58, 102);
			this->Sweep_Final_V7->Name = L"Sweep_Final_V7";
			this->Sweep_Final_V7->Size = System::Drawing::Size(58, 20);
			this->Sweep_Final_V7->TabIndex = 72;
			this->Sweep_Final_V7->Text = L"0";
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(118, 78);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(14, 13);
			this->label98->TabIndex = 71;
			this->label98->Text = L"V";
			// 
			// Sweep_Step_V7
			// 
			this->Sweep_Step_V7->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Step_V7->Enabled = false;
			this->Sweep_Step_V7->Location = System::Drawing::Point(58, 75);
			this->Sweep_Step_V7->Name = L"Sweep_Step_V7";
			this->Sweep_Step_V7->Size = System::Drawing::Size(58, 20);
			this->Sweep_Step_V7->TabIndex = 70;
			this->Sweep_Step_V7->Text = L"0";
			this->toolTip->SetToolTip(this->Sweep_Step_V7, L"Must not be larger than the whole range (|Final - Initial|)\r\nand must fit in dire"
				L"ction (e.g. Initial=10V, Final =-10\r\n-> Positive step in not permitted)");
			// 
			// Sweep_Enable_V7
			// 
			this->Sweep_Enable_V7->AutoSize = true;
			this->Sweep_Enable_V7->Location = System::Drawing::Point(58, 27);
			this->Sweep_Enable_V7->Name = L"Sweep_Enable_V7";
			this->Sweep_Enable_V7->Size = System::Drawing::Size(58, 17);
			this->Sweep_Enable_V7->TabIndex = 14;
			this->Sweep_Enable_V7->Text = L"enable";
			this->toolTip->SetToolTip(this->Sweep_Enable_V7, L"Enables the Voltage for Sweep Mode. If not enabled,\r\nall parameters are ignored a"
				L"nd no I(V)-measurement\r\nwill be started.\r\n");
			this->Sweep_Enable_V7->UseVisualStyleBackColor = true;
			// 
			// Sweep_Initial_V7
			// 
			this->Sweep_Initial_V7->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Initial_V7->Enabled = false;
			this->Sweep_Initial_V7->Location = System::Drawing::Point(58, 50);
			this->Sweep_Initial_V7->Name = L"Sweep_Initial_V7";
			this->Sweep_Initial_V7->Size = System::Drawing::Size(58, 20);
			this->Sweep_Initial_V7->TabIndex = 11;
			this->Sweep_Initial_V7->Text = L"0";
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(118, 53);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(14, 13);
			this->label99->TabIndex = 26;
			this->label99->Text = L"V";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(11, 53);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(31, 13);
			this->label100->TabIndex = 46;
			this->label100->Text = L"Initial";
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(11, 78);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(29, 13);
			this->label101->TabIndex = 58;
			this->label101->Text = L"Step";
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Location = System::Drawing::Point(11, 105);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(29, 13);
			this->label102->TabIndex = 69;
			this->label102->Text = L"Final";
			// 
			// sweep_groupbox_V6
			// 
			this->sweep_groupbox_V6->Controls->Add(this->label87);
			this->sweep_groupbox_V6->Controls->Add(this->Sweep_Final_V6);
			this->sweep_groupbox_V6->Controls->Add(this->label88);
			this->sweep_groupbox_V6->Controls->Add(this->Sweep_Step_V6);
			this->sweep_groupbox_V6->Controls->Add(this->Sweep_Enable_V6);
			this->sweep_groupbox_V6->Controls->Add(this->Sweep_Initial_V6);
			this->sweep_groupbox_V6->Controls->Add(this->label89);
			this->sweep_groupbox_V6->Controls->Add(this->label90);
			this->sweep_groupbox_V6->Controls->Add(this->label91);
			this->sweep_groupbox_V6->Controls->Add(this->label92);
			this->sweep_groupbox_V6->Location = System::Drawing::Point(174, 478);
			this->sweep_groupbox_V6->Name = L"sweep_groupbox_V6";
			this->sweep_groupbox_V6->Size = System::Drawing::Size(139, 143);
			this->sweep_groupbox_V6->TabIndex = 76;
			this->sweep_groupbox_V6->TabStop = false;
			this->sweep_groupbox_V6->Text = L"Voltage 6";
			this->sweep_groupbox_V6->Visible = false;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(118, 105);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(14, 13);
			this->label87->TabIndex = 73;
			this->label87->Text = L"V";
			// 
			// Sweep_Final_V6
			// 
			this->Sweep_Final_V6->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Final_V6->Enabled = false;
			this->Sweep_Final_V6->Location = System::Drawing::Point(58, 102);
			this->Sweep_Final_V6->Name = L"Sweep_Final_V6";
			this->Sweep_Final_V6->Size = System::Drawing::Size(58, 20);
			this->Sweep_Final_V6->TabIndex = 72;
			this->Sweep_Final_V6->Text = L"0";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(118, 78);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(14, 13);
			this->label88->TabIndex = 71;
			this->label88->Text = L"V";
			// 
			// Sweep_Step_V6
			// 
			this->Sweep_Step_V6->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Step_V6->Enabled = false;
			this->Sweep_Step_V6->Location = System::Drawing::Point(58, 75);
			this->Sweep_Step_V6->Name = L"Sweep_Step_V6";
			this->Sweep_Step_V6->Size = System::Drawing::Size(58, 20);
			this->Sweep_Step_V6->TabIndex = 70;
			this->Sweep_Step_V6->Text = L"0";
			this->toolTip->SetToolTip(this->Sweep_Step_V6, L"Must not be larger than the whole range (|Final - Initial|)\r\nand must fit in dire"
				L"ction (e.g. Initial=10V, Final =-10\r\n-> Positive step in not permitted)");
			// 
			// Sweep_Enable_V6
			// 
			this->Sweep_Enable_V6->AutoSize = true;
			this->Sweep_Enable_V6->Location = System::Drawing::Point(58, 27);
			this->Sweep_Enable_V6->Name = L"Sweep_Enable_V6";
			this->Sweep_Enable_V6->Size = System::Drawing::Size(58, 17);
			this->Sweep_Enable_V6->TabIndex = 14;
			this->Sweep_Enable_V6->Text = L"enable";
			this->toolTip->SetToolTip(this->Sweep_Enable_V6, L"Enables the Voltage for Sweep Mode. If not enabled,\r\nall parameters are ignored a"
				L"nd no I(V)-measurement\r\nwill be started.\r\n");
			this->Sweep_Enable_V6->UseVisualStyleBackColor = true;
			// 
			// Sweep_Initial_V6
			// 
			this->Sweep_Initial_V6->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Initial_V6->Enabled = false;
			this->Sweep_Initial_V6->Location = System::Drawing::Point(58, 50);
			this->Sweep_Initial_V6->Name = L"Sweep_Initial_V6";
			this->Sweep_Initial_V6->Size = System::Drawing::Size(58, 20);
			this->Sweep_Initial_V6->TabIndex = 11;
			this->Sweep_Initial_V6->Text = L"0";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Location = System::Drawing::Point(118, 53);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(14, 13);
			this->label89->TabIndex = 26;
			this->label89->Text = L"V";
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(11, 53);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(31, 13);
			this->label90->TabIndex = 46;
			this->label90->Text = L"Initial";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(11, 78);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(29, 13);
			this->label91->TabIndex = 58;
			this->label91->Text = L"Step";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(11, 105);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(29, 13);
			this->label92->TabIndex = 69;
			this->label92->Text = L"Final";
			// 
			// sweep_groupbox_V5
			// 
			this->sweep_groupbox_V5->Controls->Add(this->label81);
			this->sweep_groupbox_V5->Controls->Add(this->Sweep_Final_V5);
			this->sweep_groupbox_V5->Controls->Add(this->label82);
			this->sweep_groupbox_V5->Controls->Add(this->Sweep_Step_V5);
			this->sweep_groupbox_V5->Controls->Add(this->Sweep_Enable_V5);
			this->sweep_groupbox_V5->Controls->Add(this->Sweep_Initial_V5);
			this->sweep_groupbox_V5->Controls->Add(this->label83);
			this->sweep_groupbox_V5->Controls->Add(this->label84);
			this->sweep_groupbox_V5->Controls->Add(this->label85);
			this->sweep_groupbox_V5->Controls->Add(this->label86);
			this->sweep_groupbox_V5->Location = System::Drawing::Point(20, 478);
			this->sweep_groupbox_V5->Name = L"sweep_groupbox_V5";
			this->sweep_groupbox_V5->Size = System::Drawing::Size(139, 143);
			this->sweep_groupbox_V5->TabIndex = 76;
			this->sweep_groupbox_V5->TabStop = false;
			this->sweep_groupbox_V5->Text = L"Voltage 5";
			this->sweep_groupbox_V5->Visible = false;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(118, 105);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(14, 13);
			this->label81->TabIndex = 73;
			this->label81->Text = L"V";
			// 
			// Sweep_Final_V5
			// 
			this->Sweep_Final_V5->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Final_V5->Enabled = false;
			this->Sweep_Final_V5->Location = System::Drawing::Point(58, 102);
			this->Sweep_Final_V5->Name = L"Sweep_Final_V5";
			this->Sweep_Final_V5->Size = System::Drawing::Size(58, 20);
			this->Sweep_Final_V5->TabIndex = 72;
			this->Sweep_Final_V5->Text = L"0";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(118, 78);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(14, 13);
			this->label82->TabIndex = 71;
			this->label82->Text = L"V";
			// 
			// Sweep_Step_V5
			// 
			this->Sweep_Step_V5->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Step_V5->Enabled = false;
			this->Sweep_Step_V5->Location = System::Drawing::Point(58, 75);
			this->Sweep_Step_V5->Name = L"Sweep_Step_V5";
			this->Sweep_Step_V5->Size = System::Drawing::Size(58, 20);
			this->Sweep_Step_V5->TabIndex = 70;
			this->Sweep_Step_V5->Text = L"0";
			this->toolTip->SetToolTip(this->Sweep_Step_V5, L"Must not be larger than the whole range (|Final - Initial|)\r\nand must fit in dire"
				L"ction (e.g. Initial=10V, Final =-10\r\n-> Positive step in not permitted)");
			// 
			// Sweep_Enable_V5
			// 
			this->Sweep_Enable_V5->AutoSize = true;
			this->Sweep_Enable_V5->Location = System::Drawing::Point(58, 27);
			this->Sweep_Enable_V5->Name = L"Sweep_Enable_V5";
			this->Sweep_Enable_V5->Size = System::Drawing::Size(58, 17);
			this->Sweep_Enable_V5->TabIndex = 14;
			this->Sweep_Enable_V5->Text = L"enable";
			this->toolTip->SetToolTip(this->Sweep_Enable_V5, L"Enables the Voltage for Sweep Mode. If not enabled,\r\nall parameters are ignored a"
				L"nd no I(V)-measurement\r\nwill be started.\r\n");
			this->Sweep_Enable_V5->UseVisualStyleBackColor = true;
			// 
			// Sweep_Initial_V5
			// 
			this->Sweep_Initial_V5->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Initial_V5->Enabled = false;
			this->Sweep_Initial_V5->Location = System::Drawing::Point(58, 50);
			this->Sweep_Initial_V5->Name = L"Sweep_Initial_V5";
			this->Sweep_Initial_V5->Size = System::Drawing::Size(58, 20);
			this->Sweep_Initial_V5->TabIndex = 11;
			this->Sweep_Initial_V5->Text = L"0";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(118, 53);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(14, 13);
			this->label83->TabIndex = 26;
			this->label83->Text = L"V";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(11, 53);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(31, 13);
			this->label84->TabIndex = 46;
			this->label84->Text = L"Initial";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(11, 78);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(29, 13);
			this->label85->TabIndex = 58;
			this->label85->Text = L"Step";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(11, 105);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(29, 13);
			this->label86->TabIndex = 69;
			this->label86->Text = L"Final";
			// 
			// sweep_groupbox_V4
			// 
			this->sweep_groupbox_V4->Controls->Add(this->label75);
			this->sweep_groupbox_V4->Controls->Add(this->Sweep_Final_V4);
			this->sweep_groupbox_V4->Controls->Add(this->label76);
			this->sweep_groupbox_V4->Controls->Add(this->Sweep_Step_V4);
			this->sweep_groupbox_V4->Controls->Add(this->Sweep_Enable_V4);
			this->sweep_groupbox_V4->Controls->Add(this->Sweep_Initial_V4);
			this->sweep_groupbox_V4->Controls->Add(this->label77);
			this->sweep_groupbox_V4->Controls->Add(this->label78);
			this->sweep_groupbox_V4->Controls->Add(this->label79);
			this->sweep_groupbox_V4->Controls->Add(this->label80);
			this->sweep_groupbox_V4->Location = System::Drawing::Point(478, 315);
			this->sweep_groupbox_V4->Name = L"sweep_groupbox_V4";
			this->sweep_groupbox_V4->Size = System::Drawing::Size(139, 143);
			this->sweep_groupbox_V4->TabIndex = 75;
			this->sweep_groupbox_V4->TabStop = false;
			this->sweep_groupbox_V4->Text = L"Voltage 4";
			this->sweep_groupbox_V4->Visible = false;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(118, 105);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(14, 13);
			this->label75->TabIndex = 73;
			this->label75->Text = L"V";
			// 
			// Sweep_Final_V4
			// 
			this->Sweep_Final_V4->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Final_V4->Enabled = false;
			this->Sweep_Final_V4->Location = System::Drawing::Point(58, 102);
			this->Sweep_Final_V4->Name = L"Sweep_Final_V4";
			this->Sweep_Final_V4->Size = System::Drawing::Size(58, 20);
			this->Sweep_Final_V4->TabIndex = 72;
			this->Sweep_Final_V4->Text = L"0";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(118, 78);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(14, 13);
			this->label76->TabIndex = 71;
			this->label76->Text = L"V";
			// 
			// Sweep_Step_V4
			// 
			this->Sweep_Step_V4->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Step_V4->Enabled = false;
			this->Sweep_Step_V4->Location = System::Drawing::Point(58, 75);
			this->Sweep_Step_V4->Name = L"Sweep_Step_V4";
			this->Sweep_Step_V4->Size = System::Drawing::Size(58, 20);
			this->Sweep_Step_V4->TabIndex = 70;
			this->Sweep_Step_V4->Text = L"0";
			this->toolTip->SetToolTip(this->Sweep_Step_V4, L"Must not be larger than the whole range (|Final - Initial|)\r\nand must fit in dire"
				L"ction (e.g. Initial=10V, Final =-10\r\n-> Positive step in not permitted)");
			// 
			// Sweep_Enable_V4
			// 
			this->Sweep_Enable_V4->AutoSize = true;
			this->Sweep_Enable_V4->Location = System::Drawing::Point(58, 27);
			this->Sweep_Enable_V4->Name = L"Sweep_Enable_V4";
			this->Sweep_Enable_V4->Size = System::Drawing::Size(58, 17);
			this->Sweep_Enable_V4->TabIndex = 14;
			this->Sweep_Enable_V4->Text = L"enable";
			this->toolTip->SetToolTip(this->Sweep_Enable_V4, L"Enables the Voltage for Sweep Mode. If not enabled,\r\nall parameters are ignored a"
				L"nd no I(V)-measurement\r\nwill be started.\r\n");
			this->Sweep_Enable_V4->UseVisualStyleBackColor = true;
			// 
			// Sweep_Initial_V4
			// 
			this->Sweep_Initial_V4->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Initial_V4->Enabled = false;
			this->Sweep_Initial_V4->Location = System::Drawing::Point(58, 50);
			this->Sweep_Initial_V4->Name = L"Sweep_Initial_V4";
			this->Sweep_Initial_V4->Size = System::Drawing::Size(58, 20);
			this->Sweep_Initial_V4->TabIndex = 11;
			this->Sweep_Initial_V4->Text = L"0";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(118, 53);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(14, 13);
			this->label77->TabIndex = 26;
			this->label77->Text = L"V";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(11, 53);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(31, 13);
			this->label78->TabIndex = 46;
			this->label78->Text = L"Initial";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(11, 78);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(29, 13);
			this->label79->TabIndex = 58;
			this->label79->Text = L"Step";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(11, 105);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(29, 13);
			this->label80->TabIndex = 69;
			this->label80->Text = L"Final";
			// 
			// sweep_groupbox_V3
			// 
			this->sweep_groupbox_V3->Controls->Add(this->label48);
			this->sweep_groupbox_V3->Controls->Add(this->Sweep_Final_V3);
			this->sweep_groupbox_V3->Controls->Add(this->label49);
			this->sweep_groupbox_V3->Controls->Add(this->Sweep_Step_V3);
			this->sweep_groupbox_V3->Controls->Add(this->Sweep_Enable_V3);
			this->sweep_groupbox_V3->Controls->Add(this->Sweep_Initial_V3);
			this->sweep_groupbox_V3->Controls->Add(this->label51);
			this->sweep_groupbox_V3->Controls->Add(this->label52);
			this->sweep_groupbox_V3->Controls->Add(this->label53);
			this->sweep_groupbox_V3->Controls->Add(this->label54);
			this->sweep_groupbox_V3->Location = System::Drawing::Point(325, 315);
			this->sweep_groupbox_V3->Name = L"sweep_groupbox_V3";
			this->sweep_groupbox_V3->Size = System::Drawing::Size(139, 143);
			this->sweep_groupbox_V3->TabIndex = 74;
			this->sweep_groupbox_V3->TabStop = false;
			this->sweep_groupbox_V3->Text = L"Voltage 3";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(118, 105);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(14, 13);
			this->label48->TabIndex = 73;
			this->label48->Text = L"V";
			// 
			// Sweep_Final_V3
			// 
			this->Sweep_Final_V3->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Final_V3->Enabled = false;
			this->Sweep_Final_V3->Location = System::Drawing::Point(58, 102);
			this->Sweep_Final_V3->Name = L"Sweep_Final_V3";
			this->Sweep_Final_V3->Size = System::Drawing::Size(58, 20);
			this->Sweep_Final_V3->TabIndex = 72;
			this->Sweep_Final_V3->Text = L"0";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(118, 78);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(14, 13);
			this->label49->TabIndex = 71;
			this->label49->Text = L"V";
			// 
			// Sweep_Step_V3
			// 
			this->Sweep_Step_V3->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Step_V3->Enabled = false;
			this->Sweep_Step_V3->Location = System::Drawing::Point(58, 75);
			this->Sweep_Step_V3->Name = L"Sweep_Step_V3";
			this->Sweep_Step_V3->Size = System::Drawing::Size(58, 20);
			this->Sweep_Step_V3->TabIndex = 70;
			this->Sweep_Step_V3->Text = L"0";
			this->toolTip->SetToolTip(this->Sweep_Step_V3, L"Must not be larger than the whole range (|Final - Initial|)\r\nand must fit in dire"
				L"ction (e.g. Initial=10V, Final =-10\r\n-> Positive step in not permitted)");
			// 
			// Sweep_Enable_V3
			// 
			this->Sweep_Enable_V3->AutoSize = true;
			this->Sweep_Enable_V3->Location = System::Drawing::Point(58, 27);
			this->Sweep_Enable_V3->Name = L"Sweep_Enable_V3";
			this->Sweep_Enable_V3->Size = System::Drawing::Size(58, 17);
			this->Sweep_Enable_V3->TabIndex = 14;
			this->Sweep_Enable_V3->Text = L"enable";
			this->toolTip->SetToolTip(this->Sweep_Enable_V3, L"Enables the Voltage for Sweep Mode. If not enabled,\r\nall parameters are ignored a"
				L"nd no I(V)-measurement\r\nwill be started.\r\n");
			this->Sweep_Enable_V3->UseVisualStyleBackColor = true;
			// 
			// Sweep_Initial_V3
			// 
			this->Sweep_Initial_V3->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Initial_V3->Enabled = false;
			this->Sweep_Initial_V3->Location = System::Drawing::Point(58, 50);
			this->Sweep_Initial_V3->Name = L"Sweep_Initial_V3";
			this->Sweep_Initial_V3->Size = System::Drawing::Size(58, 20);
			this->Sweep_Initial_V3->TabIndex = 11;
			this->Sweep_Initial_V3->Text = L"0";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(118, 53);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(14, 13);
			this->label51->TabIndex = 26;
			this->label51->Text = L"V";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(11, 53);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(31, 13);
			this->label52->TabIndex = 46;
			this->label52->Text = L"Initial";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(11, 78);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(29, 13);
			this->label53->TabIndex = 58;
			this->label53->Text = L"Step";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(11, 105);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(29, 13);
			this->label54->TabIndex = 69;
			this->label54->Text = L"Final";
			// 
			// sweep_groupbox_V2
			// 
			this->sweep_groupbox_V2->Controls->Add(this->label35);
			this->sweep_groupbox_V2->Controls->Add(this->Sweep_Final_V2);
			this->sweep_groupbox_V2->Controls->Add(this->label40);
			this->sweep_groupbox_V2->Controls->Add(this->Sweep_Step_V2);
			this->sweep_groupbox_V2->Controls->Add(this->Sweep_Enable_V2);
			this->sweep_groupbox_V2->Controls->Add(this->Sweep_Initial_V2);
			this->sweep_groupbox_V2->Controls->Add(this->label43);
			this->sweep_groupbox_V2->Controls->Add(this->label44);
			this->sweep_groupbox_V2->Controls->Add(this->label45);
			this->sweep_groupbox_V2->Controls->Add(this->label47);
			this->sweep_groupbox_V2->Location = System::Drawing::Point(174, 315);
			this->sweep_groupbox_V2->Name = L"sweep_groupbox_V2";
			this->sweep_groupbox_V2->Size = System::Drawing::Size(139, 143);
			this->sweep_groupbox_V2->TabIndex = 74;
			this->sweep_groupbox_V2->TabStop = false;
			this->sweep_groupbox_V2->Text = L"Voltage 2";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(120, 107);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(14, 13);
			this->label35->TabIndex = 73;
			this->label35->Text = L"V";
			// 
			// Sweep_Final_V2
			// 
			this->Sweep_Final_V2->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Final_V2->Enabled = false;
			this->Sweep_Final_V2->Location = System::Drawing::Point(60, 104);
			this->Sweep_Final_V2->Name = L"Sweep_Final_V2";
			this->Sweep_Final_V2->Size = System::Drawing::Size(58, 20);
			this->Sweep_Final_V2->TabIndex = 72;
			this->Sweep_Final_V2->Text = L"0";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(120, 80);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(14, 13);
			this->label40->TabIndex = 71;
			this->label40->Text = L"V";
			// 
			// Sweep_Step_V2
			// 
			this->Sweep_Step_V2->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Step_V2->Enabled = false;
			this->Sweep_Step_V2->Location = System::Drawing::Point(60, 77);
			this->Sweep_Step_V2->Name = L"Sweep_Step_V2";
			this->Sweep_Step_V2->Size = System::Drawing::Size(58, 20);
			this->Sweep_Step_V2->TabIndex = 70;
			this->Sweep_Step_V2->Text = L"0";
			this->toolTip->SetToolTip(this->Sweep_Step_V2, L"Must not be larger than the whole range (|Final - Initial|)\r\nand must fit in dire"
				L"ction (e.g. Initial=10V, Final =-10\r\n-> Positive step in not permitted)");
			// 
			// Sweep_Enable_V2
			// 
			this->Sweep_Enable_V2->AutoSize = true;
			this->Sweep_Enable_V2->Location = System::Drawing::Point(60, 29);
			this->Sweep_Enable_V2->Name = L"Sweep_Enable_V2";
			this->Sweep_Enable_V2->Size = System::Drawing::Size(58, 17);
			this->Sweep_Enable_V2->TabIndex = 14;
			this->Sweep_Enable_V2->Text = L"enable";
			this->toolTip->SetToolTip(this->Sweep_Enable_V2, L"Enables the Voltage for Sweep Mode. If not enabled,\r\nall parameters are ignored a"
				L"nd no I(V)-measurement\r\nwill be started.\r\n");
			this->Sweep_Enable_V2->UseVisualStyleBackColor = true;
			// 
			// Sweep_Initial_V2
			// 
			this->Sweep_Initial_V2->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Initial_V2->Enabled = false;
			this->Sweep_Initial_V2->Location = System::Drawing::Point(60, 52);
			this->Sweep_Initial_V2->Name = L"Sweep_Initial_V2";
			this->Sweep_Initial_V2->Size = System::Drawing::Size(58, 20);
			this->Sweep_Initial_V2->TabIndex = 11;
			this->Sweep_Initial_V2->Text = L"0";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(120, 55);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(14, 13);
			this->label43->TabIndex = 26;
			this->label43->Text = L"V";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(11, 53);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(31, 13);
			this->label44->TabIndex = 46;
			this->label44->Text = L"Initial";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(11, 78);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(29, 13);
			this->label45->TabIndex = 58;
			this->label45->Text = L"Step";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(11, 105);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(29, 13);
			this->label47->TabIndex = 69;
			this->label47->Text = L"Final";
			// 
			// sweep_groupbox_V1
			// 
			this->sweep_groupbox_V1->Controls->Add(this->label57);
			this->sweep_groupbox_V1->Controls->Add(this->Sweep_Final_V1);
			this->sweep_groupbox_V1->Controls->Add(this->label42);
			this->sweep_groupbox_V1->Controls->Add(this->Sweep_Step_V1);
			this->sweep_groupbox_V1->Controls->Add(this->Sweep_Enable_V1);
			this->sweep_groupbox_V1->Controls->Add(this->Sweep_Initial_V1);
			this->sweep_groupbox_V1->Controls->Add(this->label56);
			this->sweep_groupbox_V1->Controls->Add(this->label46);
			this->sweep_groupbox_V1->Controls->Add(this->label50);
			this->sweep_groupbox_V1->Controls->Add(this->label55);
			this->sweep_groupbox_V1->Location = System::Drawing::Point(20, 315);
			this->sweep_groupbox_V1->Name = L"sweep_groupbox_V1";
			this->sweep_groupbox_V1->Size = System::Drawing::Size(139, 143);
			this->sweep_groupbox_V1->TabIndex = 51;
			this->sweep_groupbox_V1->TabStop = false;
			this->sweep_groupbox_V1->Text = L"Voltage 1";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(120, 105);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(14, 13);
			this->label57->TabIndex = 73;
			this->label57->Text = L"V";
			// 
			// Sweep_Final_V1
			// 
			this->Sweep_Final_V1->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Final_V1->Enabled = false;
			this->Sweep_Final_V1->Location = System::Drawing::Point(60, 102);
			this->Sweep_Final_V1->Name = L"Sweep_Final_V1";
			this->Sweep_Final_V1->Size = System::Drawing::Size(58, 20);
			this->Sweep_Final_V1->TabIndex = 72;
			this->Sweep_Final_V1->Text = L"0";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(120, 78);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(14, 13);
			this->label42->TabIndex = 71;
			this->label42->Text = L"V";
			// 
			// Sweep_Step_V1
			// 
			this->Sweep_Step_V1->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Step_V1->Enabled = false;
			this->Sweep_Step_V1->Location = System::Drawing::Point(60, 75);
			this->Sweep_Step_V1->Name = L"Sweep_Step_V1";
			this->Sweep_Step_V1->Size = System::Drawing::Size(58, 20);
			this->Sweep_Step_V1->TabIndex = 70;
			this->Sweep_Step_V1->Text = L"0";
			this->toolTip->SetToolTip(this->Sweep_Step_V1, L"Must not be larger than the whole range (|Final - Initial|)\r\nand must fit in dire"
				L"ction (e.g. Initial=10V, Final =-10\r\n-> Positive step in not permitted)");
			// 
			// Sweep_Enable_V1
			// 
			this->Sweep_Enable_V1->AutoSize = true;
			this->Sweep_Enable_V1->Location = System::Drawing::Point(60, 27);
			this->Sweep_Enable_V1->Name = L"Sweep_Enable_V1";
			this->Sweep_Enable_V1->Size = System::Drawing::Size(58, 17);
			this->Sweep_Enable_V1->TabIndex = 14;
			this->Sweep_Enable_V1->Text = L"enable";
			this->toolTip->SetToolTip(this->Sweep_Enable_V1, L"Enables the Voltage for Sweep Mode. If not enabled,\r\nall parameters are ignored a"
				L"nd no I(V)-measurement\r\nwill be started.");
			this->Sweep_Enable_V1->UseVisualStyleBackColor = true;
			// 
			// Sweep_Initial_V1
			// 
			this->Sweep_Initial_V1->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Initial_V1->Enabled = false;
			this->Sweep_Initial_V1->Location = System::Drawing::Point(60, 50);
			this->Sweep_Initial_V1->Name = L"Sweep_Initial_V1";
			this->Sweep_Initial_V1->Size = System::Drawing::Size(58, 20);
			this->Sweep_Initial_V1->TabIndex = 11;
			this->Sweep_Initial_V1->Text = L"0";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(120, 53);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(14, 13);
			this->label56->TabIndex = 26;
			this->label56->Text = L"V";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(11, 53);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(31, 13);
			this->label46->TabIndex = 46;
			this->label46->Text = L"Initial";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(11, 78);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(29, 13);
			this->label50->TabIndex = 58;
			this->label50->Text = L"Step";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(11, 105);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(29, 13);
			this->label55->TabIndex = 69;
			this->label55->Text = L"Final";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label110);
			this->groupBox1->Controls->Add(this->label109);
			this->groupBox1->Controls->Add(this->Sweep_DelayTime);
			this->groupBox1->Controls->Add(this->Sweep_FileName);
			this->groupBox1->Controls->Add(this->Sweep_FileOpen);
			this->groupBox1->Controls->Add(this->Sweep_ValsFromFile);
			this->groupBox1->Controls->Add(this->Sweep_ValsFromMask);
			this->groupBox1->Controls->Add(this->sweep_estimated_time);
			this->groupBox1->Controls->Add(this->Sweep_Sync);
			this->groupBox1->Controls->Add(this->label58);
			this->groupBox1->Controls->Add(this->Sweep_ResultSpectra);
			this->groupBox1->Controls->Add(this->Sweep_StatusProgress);
			this->groupBox1->Controls->Add(this->Sweep_StatusStep);
			this->groupBox1->Controls->Add(this->Sweep_Progress);
			this->groupBox1->Controls->Add(this->Sweep_StartPause);
			this->groupBox1->Controls->Add(this->Sweep_Cancel);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->Sweep_CalcFrom);
			this->groupBox1->Controls->Add(this->label28);
			this->groupBox1->Controls->Add(this->Sweep_Loops);
			this->groupBox1->Controls->Add(this->Sweep_Loop);
			this->groupBox1->Controls->Add(this->Sweep_Cycle);
			this->groupBox1->Controls->Add(this->Sweep_Calculate);
			this->groupBox1->Location = System::Drawing::Point(20, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(585, 280);
			this->groupBox1->TabIndex = 50;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"General";
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->Location = System::Drawing::Point(141, 99);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(20, 13);
			this->label110->TabIndex = 99;
			this->label110->Text = L"ms";
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->Location = System::Drawing::Point(11, 99);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(56, 13);
			this->label109->TabIndex = 98;
			this->label109->Text = L"Delay time";
			// 
			// Sweep_DelayTime
			// 
			this->Sweep_DelayTime->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_DelayTime->Location = System::Drawing::Point(80, 96);
			this->Sweep_DelayTime->Name = L"Sweep_DelayTime";
			this->Sweep_DelayTime->Size = System::Drawing::Size(53, 20);
			this->Sweep_DelayTime->TabIndex = 97;
			this->Sweep_DelayTime->Text = L"0";
			this->toolTip->SetToolTip(this->Sweep_DelayTime, L"Delay time after all voltage setpoints are reached");
			// 
			// Sweep_FileName
			// 
			this->Sweep_FileName->Location = System::Drawing::Point(43, 235);
			this->Sweep_FileName->Name = L"Sweep_FileName";
			this->Sweep_FileName->ReadOnly = true;
			this->Sweep_FileName->Size = System::Drawing::Size(201, 20);
			this->Sweep_FileName->TabIndex = 96;
			// 
			// Sweep_FileOpen
			// 
			this->Sweep_FileOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sweep_FileOpen.Image")));
			this->Sweep_FileOpen->Location = System::Drawing::Point(8, 231);
			this->Sweep_FileOpen->Name = L"Sweep_FileOpen";
			this->Sweep_FileOpen->Size = System::Drawing::Size(27, 27);
			this->Sweep_FileOpen->TabIndex = 95;
			this->Sweep_FileOpen->UseVisualStyleBackColor = true;
			this->Sweep_FileOpen->Click += gcnew System::EventHandler(this, &Form1::Sweep_FileOpen_Click);
			// 
			// Sweep_ValsFromFile
			// 
			this->Sweep_ValsFromFile->AutoSize = true;
			this->Sweep_ValsFromFile->Location = System::Drawing::Point(8, 208);
			this->Sweep_ValsFromFile->Name = L"Sweep_ValsFromFile";
			this->Sweep_ValsFromFile->Size = System::Drawing::Size(99, 17);
			this->Sweep_ValsFromFile->TabIndex = 94;
			this->Sweep_ValsFromFile->Text = L"Values from File";
			this->Sweep_ValsFromFile->UseVisualStyleBackColor = true;
			// 
			// Sweep_ValsFromMask
			// 
			this->Sweep_ValsFromMask->AutoSize = true;
			this->Sweep_ValsFromMask->Checked = true;
			this->Sweep_ValsFromMask->Location = System::Drawing::Point(8, 129);
			this->Sweep_ValsFromMask->Name = L"Sweep_ValsFromMask";
			this->Sweep_ValsFromMask->Size = System::Drawing::Size(153, 17);
			this->Sweep_ValsFromMask->TabIndex = 93;
			this->Sweep_ValsFromMask->TabStop = true;
			this->Sweep_ValsFromMask->Text = L"Values from Voltage Masks";
			this->Sweep_ValsFromMask->UseVisualStyleBackColor = true;
			// 
			// sweep_estimated_time
			// 
			this->sweep_estimated_time->AutoSize = true;
			this->sweep_estimated_time->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->sweep_estimated_time->Location = System::Drawing::Point(302, 114);
			this->sweep_estimated_time->Name = L"sweep_estimated_time";
			this->sweep_estimated_time->Size = System::Drawing::Size(75, 13);
			this->sweep_estimated_time->TabIndex = 92;
			this->sweep_estimated_time->Text = L"Estimated time";
			this->sweep_estimated_time->Visible = false;
			// 
			// Sweep_Sync
			// 
			this->Sweep_Sync->AutoSize = true;
			this->Sweep_Sync->Checked = true;
			this->Sweep_Sync->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Sweep_Sync->Location = System::Drawing::Point(14, 76);
			this->Sweep_Sync->Name = L"Sweep_Sync";
			this->Sweep_Sync->Size = System::Drawing::Size(153, 17);
			this->Sweep_Sync->TabIndex = 91;
			this->Sweep_Sync->Text = L"Synchronize with WinSpec";
			this->toolTip->SetToolTip(this->Sweep_Sync, L"If checked: Programm sets TTL-Output and waits \r\nfor TTL-Input vom WinSpec. (PI C"
				L"843 Module required)");
			this->Sweep_Sync->UseVisualStyleBackColor = true;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(301, 22);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(89, 13);
			this->label58->TabIndex = 90;
			this->label58->Text = L"Resulting spectra";
			// 
			// Sweep_ResultSpectra
			// 
			this->Sweep_ResultSpectra->BackColor = System::Drawing::Color::LightSkyBlue;
			this->Sweep_ResultSpectra->Location = System::Drawing::Point(462, 19);
			this->Sweep_ResultSpectra->Name = L"Sweep_ResultSpectra";
			this->Sweep_ResultSpectra->ReadOnly = true;
			this->Sweep_ResultSpectra->Size = System::Drawing::Size(53, 20);
			this->Sweep_ResultSpectra->TabIndex = 89;
			this->Sweep_ResultSpectra->Text = L"0";
			// 
			// Sweep_StatusProgress
			// 
			this->Sweep_StatusProgress->AutoSize = true;
			this->Sweep_StatusProgress->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Sweep_StatusProgress->Location = System::Drawing::Point(302, 64);
			this->Sweep_StatusProgress->Name = L"Sweep_StatusProgress";
			this->Sweep_StatusProgress->Size = System::Drawing::Size(38, 13);
			this->Sweep_StatusProgress->TabIndex = 88;
			this->Sweep_StatusProgress->Text = L"Ready";
			// 
			// Sweep_StatusStep
			// 
			this->Sweep_StatusStep->AutoSize = true;
			this->Sweep_StatusStep->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Sweep_StatusStep->Location = System::Drawing::Point(499, 67);
			this->Sweep_StatusStep->Name = L"Sweep_StatusStep";
			this->Sweep_StatusStep->Size = System::Drawing::Size(24, 13);
			this->Sweep_StatusStep->TabIndex = 87;
			this->Sweep_StatusStep->Text = L"0/0";
			// 
			// Sweep_Progress
			// 
			this->Sweep_Progress->Location = System::Drawing::Point(305, 84);
			this->Sweep_Progress->Name = L"Sweep_Progress";
			this->Sweep_Progress->Size = System::Drawing::Size(222, 23);
			this->Sweep_Progress->Step = 1;
			this->Sweep_Progress->TabIndex = 86;
			// 
			// Sweep_StartPause
			// 
			this->Sweep_StartPause->Location = System::Drawing::Point(305, 134);
			this->Sweep_StartPause->Name = L"Sweep_StartPause";
			this->Sweep_StartPause->Size = System::Drawing::Size(108, 23);
			this->Sweep_StartPause->TabIndex = 85;
			this->Sweep_StartPause->Text = L"Start";
			this->Sweep_StartPause->UseVisualStyleBackColor = true;
			this->Sweep_StartPause->Click += gcnew System::EventHandler(this, &Form1::Sweep_StartPause_Click);
			// 
			// Sweep_Cancel
			// 
			this->Sweep_Cancel->Location = System::Drawing::Point(419, 134);
			this->Sweep_Cancel->Name = L"Sweep_Cancel";
			this->Sweep_Cancel->Size = System::Drawing::Size(108, 23);
			this->Sweep_Cancel->TabIndex = 84;
			this->Sweep_Cancel->Text = L"Cancel";
			this->Sweep_Cancel->UseVisualStyleBackColor = true;
			this->Sweep_Cancel->Click += gcnew System::EventHandler(this, &Form1::Sweep_Cancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 83;
			this->label1->Text = L"Calculate Steps from";
			// 
			// Sweep_CalcFrom
			// 
			this->Sweep_CalcFrom->FormattingEnabled = true;
			this->Sweep_CalcFrom->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Voltage 1", L"Voltage 2", L"Voltage 3" });
			this->Sweep_CalcFrom->Location = System::Drawing::Point(123, 155);
			this->Sweep_CalcFrom->Name = L"Sweep_CalcFrom";
			this->Sweep_CalcFrom->Size = System::Drawing::Size(122, 21);
			this->Sweep_CalcFrom->TabIndex = 82;
			this->toolTip->SetToolTip(this->Sweep_CalcFrom, L"Redefines Steps of the other voltages by adjusting\r\nthem to reach the same number"
				L" of spectra as\r\nthe defined source voltage.");
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(141, 48);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(36, 13);
			this->label28->TabIndex = 80;
			this->label28->Text = L"Loops";
			// 
			// Sweep_Loops
			// 
			this->Sweep_Loops->BackColor = System::Drawing::SystemColors::Window;
			this->Sweep_Loops->Enabled = false;
			this->Sweep_Loops->Location = System::Drawing::Point(80, 45);
			this->Sweep_Loops->Name = L"Sweep_Loops";
			this->Sweep_Loops->Size = System::Drawing::Size(53, 20);
			this->Sweep_Loops->TabIndex = 81;
			this->Sweep_Loops->Text = L"0";
			// 
			// Sweep_Loop
			// 
			this->Sweep_Loop->AutoSize = true;
			this->Sweep_Loop->Location = System::Drawing::Point(14, 48);
			this->Sweep_Loop->Name = L"Sweep_Loop";
			this->Sweep_Loop->Size = System::Drawing::Size(50, 17);
			this->Sweep_Loop->TabIndex = 49;
			this->Sweep_Loop->Text = L"Loop";
			this->toolTip->SetToolTip(this->Sweep_Loop, L"Repeats cycle the defined times.");
			this->Sweep_Loop->UseVisualStyleBackColor = true;
			// 
			// Sweep_Cycle
			// 
			this->Sweep_Cycle->AutoSize = true;
			this->Sweep_Cycle->Location = System::Drawing::Point(14, 21);
			this->Sweep_Cycle->Name = L"Sweep_Cycle";
			this->Sweep_Cycle->Size = System::Drawing::Size(52, 17);
			this->Sweep_Cycle->TabIndex = 48;
			this->Sweep_Cycle->Text = L"Cycle";
			this->toolTip->SetToolTip(this->Sweep_Cycle, L"Voltage returns to Initial Value in the defined\r\nstepsize after reaching the Fina"
				L"l Value.");
			this->Sweep_Cycle->UseVisualStyleBackColor = true;
			// 
			// Sweep_Calculate
			// 
			this->Sweep_Calculate->Location = System::Drawing::Point(123, 179);
			this->Sweep_Calculate->Name = L"Sweep_Calculate";
			this->Sweep_Calculate->Size = System::Drawing::Size(122, 23);
			this->Sweep_Calculate->TabIndex = 47;
			this->Sweep_Calculate->Text = L"Calculate";
			this->toolTip->SetToolTip(this->Sweep_Calculate, L"Redefines Steps of the other voltages by adjusting");
			this->Sweep_Calculate->UseVisualStyleBackColor = true;
			this->Sweep_Calculate->Click += gcnew System::EventHandler(this, &Form1::Sweep_Calculate_Click);
			// 
			// tabPage_Settings
			// 
			this->tabPage_Settings->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage_Settings->Controls->Add(this->groupBox7);
			this->tabPage_Settings->Controls->Add(this->sweep_ramp_cycle);
			this->tabPage_Settings->Controls->Add(this->label61);
			this->tabPage_Settings->Controls->Add(this->label62);
			this->tabPage_Settings->Controls->Add(this->sweep_ramp_init);
			this->tabPage_Settings->Controls->Add(this->label60);
			this->tabPage_Settings->Controls->Add(this->label59);
			this->tabPage_Settings->Controls->Add(this->out_val_ramp);
			this->tabPage_Settings->Controls->Add(this->manual_val_ramp);
			this->tabPage_Settings->Controls->Add(this->label31);
			this->tabPage_Settings->Controls->Add(this->label2);
			this->tabPage_Settings->Controls->Add(this->label3);
			this->tabPage_Settings->Controls->Add(this->label4);
			this->tabPage_Settings->Location = System::Drawing::Point(4, 22);
			this->tabPage_Settings->Name = L"tabPage_Settings";
			this->tabPage_Settings->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Settings->Size = System::Drawing::Size(636, 637);
			this->tabPage_Settings->TabIndex = 3;
			this->tabPage_Settings->Text = L"Settings";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->current_limit_V3);
			this->groupBox7->Controls->Add(this->label113);
			this->groupBox7->Controls->Add(this->label114);
			this->groupBox7->Controls->Add(this->current_limit_V2);
			this->groupBox7->Controls->Add(this->label111);
			this->groupBox7->Controls->Add(this->label112);
			this->groupBox7->Controls->Add(this->current_limit_V1);
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Location = System::Drawing::Point(31, 120);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(409, 124);
			this->groupBox7->TabIndex = 55;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Current limits";
			// 
			// current_limit_V3
			// 
			this->current_limit_V3->Location = System::Drawing::Point(154, 82);
			this->current_limit_V3->Name = L"current_limit_V3";
			this->current_limit_V3->Size = System::Drawing::Size(67, 20);
			this->current_limit_V3->TabIndex = 48;
			this->current_limit_V3->Text = L"0";
			this->toolTip->SetToolTip(this->current_limit_V3, L"If a channel exceeds this limit, all channels ramp down\r\nto 0V. A new voltage can"
				L" be set after pressing the\r\n\"Clear errors\" button");
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Location = System::Drawing::Point(223, 85);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(20, 13);
			this->label113->TabIndex = 49;
			this->label113->Text = L"µA";
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->Location = System::Drawing::Point(18, 85);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(20, 13);
			this->label114->TabIndex = 47;
			this->label114->Text = L"V3";
			// 
			// current_limit_V2
			// 
			this->current_limit_V2->Location = System::Drawing::Point(154, 56);
			this->current_limit_V2->Name = L"current_limit_V2";
			this->current_limit_V2->Size = System::Drawing::Size(67, 20);
			this->current_limit_V2->TabIndex = 45;
			this->current_limit_V2->Text = L"0";
			this->toolTip->SetToolTip(this->current_limit_V2, L"If a channel exceeds this limit, all channels ramp down\r\nto 0V. A new voltage can"
				L" be set after pressing the\r\n\"Clear errors\" button");
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->Location = System::Drawing::Point(223, 59);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(20, 13);
			this->label111->TabIndex = 46;
			this->label111->Text = L"µA";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Location = System::Drawing::Point(18, 59);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(20, 13);
			this->label112->TabIndex = 44;
			this->label112->Text = L"V2";
			// 
			// sweep_ramp_cycle
			// 
			this->sweep_ramp_cycle->Location = System::Drawing::Point(184, 86);
			this->sweep_ramp_cycle->Name = L"sweep_ramp_cycle";
			this->sweep_ramp_cycle->Size = System::Drawing::Size(67, 20);
			this->sweep_ramp_cycle->TabIndex = 53;
			this->sweep_ramp_cycle->Text = L"0,01";
			this->toolTip->SetToolTip(this->sweep_ramp_cycle, L"Ramp used during each step of the Sweep Mode");
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(257, 89);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(24, 13);
			this->label61->TabIndex = 54;
			this->label61->Text = L"V/s";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(28, 88);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(126, 13);
			this->label62->TabIndex = 52;
			this->label62->Text = L"Ramp Sweep Mode Step";
			// 
			// sweep_ramp_init
			// 
			this->sweep_ramp_init->Location = System::Drawing::Point(184, 59);
			this->sweep_ramp_init->Name = L"sweep_ramp_init";
			this->sweep_ramp_init->Size = System::Drawing::Size(67, 20);
			this->sweep_ramp_init->TabIndex = 50;
			this->sweep_ramp_init->Text = L"0,01";
			this->toolTip->SetToolTip(this->sweep_ramp_init, L"Ramp used for reaching the Initial Value\r\nin Sweep mode.");
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(257, 62);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(24, 13);
			this->label60->TabIndex = 51;
			this->label60->Text = L"V/s";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(27, 62);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(128, 13);
			this->label59->TabIndex = 49;
			this->label59->Text = L"Ramp Sweep Mode Initial";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(292, 35);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(63, 13);
			this->label31->TabIndex = 48;
			this->label31->Text = L"Actual ramp";
			// 
			// tabPage_test
			// 
			this->tabPage_test->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage_test->Controls->Add(this->testI0);
			this->tabPage_test->Controls->Add(this->testDisconnect);
			this->tabPage_test->Controls->Add(this->label38);
			this->tabPage_test->Controls->Add(this->testError);
			this->tabPage_test->Controls->Add(this->label37);
			this->tabPage_test->Controls->Add(this->testOutputLines);
			this->tabPage_test->Controls->Add(this->label36);
			this->tabPage_test->Controls->Add(this->testGetPCI);
			this->tabPage_test->Controls->Add(this->testPCIList);
			this->tabPage_test->Controls->Add(this->testInputChannels);
			this->tabPage_test->Controls->Add(this->testSuccess);
			this->tabPage_test->Controls->Add(this->testConnected);
			this->tabPage_test->Controls->Add(this->testOutput);
			this->tabPage_test->Controls->Add(this->testID);
			this->tabPage_test->Controls->Add(this->testCardNumber);
			this->tabPage_test->Controls->Add(this->testGetIO);
			this->tabPage_test->Controls->Add(this->testSetIO);
			this->tabPage_test->Controls->Add(this->testConnect);
			this->tabPage_test->Location = System::Drawing::Point(4, 22);
			this->tabPage_test->Name = L"tabPage_test";
			this->tabPage_test->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_test->Size = System::Drawing::Size(636, 637);
			this->tabPage_test->TabIndex = 2;
			this->tabPage_test->Text = L"Testing";
			// 
			// testI0
			// 
			this->testI0->AutoSize = true;
			this->testI0->Location = System::Drawing::Point(237, 253);
			this->testI0->Name = L"testI0";
			this->testI0->Size = System::Drawing::Size(35, 17);
			this->testI0->TabIndex = 45;
			this->testI0->Text = L"I0";
			this->testI0->UseVisualStyleBackColor = true;
			// 
			// testDisconnect
			// 
			this->testDisconnect->Location = System::Drawing::Point(142, 164);
			this->testDisconnect->Name = L"testDisconnect";
			this->testDisconnect->Size = System::Drawing::Size(75, 23);
			this->testDisconnect->TabIndex = 44;
			this->testDisconnect->Text = L"Disconnect";
			this->testDisconnect->UseVisualStyleBackColor = true;
			this->testDisconnect->Click += gcnew System::EventHandler(this, &Form1::testDisconnect_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(388, 225);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(0, 13);
			this->label38->TabIndex = 43;
			// 
			// testError
			// 
			this->testError->Location = System::Drawing::Point(450, 222);
			this->testError->Name = L"testError";
			this->testError->ReadOnly = true;
			this->testError->Size = System::Drawing::Size(84, 20);
			this->testError->TabIndex = 42;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(346, 177);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(0, 13);
			this->label37->TabIndex = 41;
			// 
			// testOutputLines
			// 
			this->testOutputLines->Location = System::Drawing::Point(412, 174);
			this->testOutputLines->Name = L"testOutputLines";
			this->testOutputLines->ReadOnly = true;
			this->testOutputLines->Size = System::Drawing::Size(122, 20);
			this->testOutputLines->TabIndex = 40;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(346, 151);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(0, 13);
			this->label36->TabIndex = 39;
			// 
			// testGetPCI
			// 
			this->testGetPCI->Location = System::Drawing::Point(142, 51);
			this->testGetPCI->Name = L"testGetPCI";
			this->testGetPCI->Size = System::Drawing::Size(75, 23);
			this->testGetPCI->TabIndex = 38;
			this->testGetPCI->Text = L"GetPCI";
			this->testGetPCI->UseVisualStyleBackColor = true;
			this->testGetPCI->Click += gcnew System::EventHandler(this, &Form1::testGetPCI_Click);
			// 
			// testPCIList
			// 
			this->testPCIList->Location = System::Drawing::Point(237, 51);
			this->testPCIList->Multiline = true;
			this->testPCIList->Name = L"testPCIList";
			this->testPCIList->ReadOnly = true;
			this->testPCIList->Size = System::Drawing::Size(67, 67);
			this->testPCIList->TabIndex = 37;
			// 
			// testInputChannels
			// 
			this->testInputChannels->Location = System::Drawing::Point(412, 148);
			this->testInputChannels->Name = L"testInputChannels";
			this->testInputChannels->ReadOnly = true;
			this->testInputChannels->Size = System::Drawing::Size(122, 20);
			this->testInputChannels->TabIndex = 36;
			// 
			// testSuccess
			// 
			this->testSuccess->AutoSize = true;
			this->testSuccess->Location = System::Drawing::Point(43, 245);
			this->testSuccess->Name = L"testSuccess";
			this->testSuccess->Size = System::Drawing::Size(65, 17);
			this->testSuccess->TabIndex = 35;
			this->testSuccess->Text = L"success";
			this->testSuccess->UseVisualStyleBackColor = true;
			// 
			// testConnected
			// 
			this->testConnected->AutoSize = true;
			this->testConnected->Location = System::Drawing::Point(237, 151);
			this->testConnected->Name = L"testConnected";
			this->testConnected->Size = System::Drawing::Size(77, 17);
			this->testConnected->TabIndex = 34;
			this->testConnected->Text = L"connected";
			this->testConnected->UseVisualStyleBackColor = true;
			// 
			// testOutput
			// 
			this->testOutput->AutoSize = true;
			this->testOutput->Location = System::Drawing::Point(237, 222);
			this->testOutput->Name = L"testOutput";
			this->testOutput->Size = System::Drawing::Size(58, 17);
			this->testOutput->TabIndex = 33;
			this->testOutput->Text = L"Output";
			this->testOutput->UseVisualStyleBackColor = true;
			// 
			// testID
			// 
			this->testID->Location = System::Drawing::Point(62, 167);
			this->testID->Name = L"testID";
			this->testID->ReadOnly = true;
			this->testID->Size = System::Drawing::Size(58, 20);
			this->testID->TabIndex = 32;
			// 
			// testCardNumber
			// 
			this->testCardNumber->Location = System::Drawing::Point(62, 141);
			this->testCardNumber->Name = L"testCardNumber";
			this->testCardNumber->Size = System::Drawing::Size(58, 20);
			this->testCardNumber->TabIndex = 31;
			// 
			// testGetIO
			// 
			this->testGetIO->Location = System::Drawing::Point(142, 247);
			this->testGetIO->Name = L"testGetIO";
			this->testGetIO->Size = System::Drawing::Size(75, 23);
			this->testGetIO->TabIndex = 30;
			this->testGetIO->Text = L"GetIO";
			this->testGetIO->UseVisualStyleBackColor = true;
			this->testGetIO->Click += gcnew System::EventHandler(this, &Form1::testGetIO_Click);
			// 
			// testSetIO
			// 
			this->testSetIO->Location = System::Drawing::Point(142, 218);
			this->testSetIO->Name = L"testSetIO";
			this->testSetIO->Size = System::Drawing::Size(75, 23);
			this->testSetIO->TabIndex = 29;
			this->testSetIO->Text = L"SetIO";
			this->testSetIO->UseVisualStyleBackColor = true;
			this->testSetIO->Click += gcnew System::EventHandler(this, &Form1::testSetIO_Click);
			// 
			// testConnect
			// 
			this->testConnect->Location = System::Drawing::Point(142, 139);
			this->testConnect->Name = L"testConnect";
			this->testConnect->Size = System::Drawing::Size(75, 23);
			this->testConnect->TabIndex = 28;
			this->testConnect->Text = L"Connect";
			this->testConnect->UseVisualStyleBackColor = true;
			this->testConnect->Click += gcnew System::EventHandler(this, &Form1::testConnect_Click);
			// 
			// channel_V1
			// 
			this->channel_V1->BackColor = System::Drawing::SystemColors::Control;
			this->channel_V1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->channel_V1->Location = System::Drawing::Point(1066, 134);
			this->channel_V1->Name = L"channel_V1";
			this->channel_V1->ReadOnly = true;
			this->channel_V1->Size = System::Drawing::Size(158, 20);
			this->channel_V1->TabIndex = 46;
			// 
			// channel_V2
			// 
			this->channel_V2->Location = System::Drawing::Point(1066, 318);
			this->channel_V2->Name = L"channel_V2";
			this->channel_V2->ReadOnly = true;
			this->channel_V2->Size = System::Drawing::Size(158, 20);
			this->channel_V2->TabIndex = 47;
			// 
			// channel_V3
			// 
			this->channel_V3->Location = System::Drawing::Point(385, -3);
			this->channel_V3->Name = L"channel_V3";
			this->channel_V3->ReadOnly = true;
			this->channel_V3->Size = System::Drawing::Size(158, 20);
			this->channel_V3->TabIndex = 52;
			// 
			// context_Chart
			// 
			this->context_Chart->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStrip_Chart_SavaData,
					this->toolStripSeparator2, this->toolStrip_Chart_Start, this->toolStrip_Chart_Stop, this->toolStrip_Chart_Clear, this->toolStripSeparator1,
					this->toolStrip_Chart_StartAll, this->toolStrip_Chart_StopAll
			});
			this->context_Chart->Name = L"context_Chart";
			this->context_Chart->Size = System::Drawing::Size(194, 148);
			this->context_Chart->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::context_Chart_Opening);
			// 
			// toolStrip_Chart_SavaData
			// 
			this->toolStrip_Chart_SavaData->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStrip_Chart_SavaData.Image")));
			this->toolStrip_Chart_SavaData->Name = L"toolStrip_Chart_SavaData";
			this->toolStrip_Chart_SavaData->Size = System::Drawing::Size(193, 22);
			this->toolStrip_Chart_SavaData->Text = L"Save data points to file";
			this->toolStrip_Chart_SavaData->Click += gcnew System::EventHandler(this, &Form1::toolStrip_Chart_SavaData_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(190, 6);
			// 
			// toolStrip_Chart_Start
			// 
			this->toolStrip_Chart_Start->Name = L"toolStrip_Chart_Start";
			this->toolStrip_Chart_Start->Size = System::Drawing::Size(193, 22);
			this->toolStrip_Chart_Start->Text = L"Start";
			this->toolStrip_Chart_Start->Click += gcnew System::EventHandler(this, &Form1::toolStrip_Chart_Start_Click);
			// 
			// toolStrip_Chart_Stop
			// 
			this->toolStrip_Chart_Stop->Name = L"toolStrip_Chart_Stop";
			this->toolStrip_Chart_Stop->Size = System::Drawing::Size(193, 22);
			this->toolStrip_Chart_Stop->Text = L"Stop";
			this->toolStrip_Chart_Stop->Click += gcnew System::EventHandler(this, &Form1::toolStrip_Chart_Stop_Click);
			// 
			// toolStrip_Chart_Clear
			// 
			this->toolStrip_Chart_Clear->Name = L"toolStrip_Chart_Clear";
			this->toolStrip_Chart_Clear->Size = System::Drawing::Size(193, 22);
			this->toolStrip_Chart_Clear->Text = L"Clear";
			this->toolStrip_Chart_Clear->Click += gcnew System::EventHandler(this, &Form1::toolStrip_Chart_Clear_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(190, 6);
			// 
			// toolStrip_Chart_StartAll
			// 
			this->toolStrip_Chart_StartAll->Name = L"toolStrip_Chart_StartAll";
			this->toolStrip_Chart_StartAll->Size = System::Drawing::Size(193, 22);
			this->toolStrip_Chart_StartAll->Text = L"Start all";
			this->toolStrip_Chart_StartAll->Click += gcnew System::EventHandler(this, &Form1::toolStrip_Chart_StartAll_Click);
			// 
			// toolStrip_Chart_StopAll
			// 
			this->toolStrip_Chart_StopAll->Name = L"toolStrip_Chart_StopAll";
			this->toolStrip_Chart_StopAll->Size = System::Drawing::Size(193, 22);
			this->toolStrip_Chart_StopAll->Text = L"Stop all";
			this->toolStrip_Chart_StopAll->Click += gcnew System::EventHandler(this, &Form1::toolStrip_Chart_StopAll_Click);
			// 
			// manual_Chart_It2
			// 
			this->manual_Chart_It2->Location = System::Drawing::Point(11, 72);
			this->manual_Chart_It2->Name = L"manual_Chart_It2";
			this->manual_Chart_It2->Size = System::Drawing::Size(239, 87);
			this->manual_Chart_It2->TabIndex = 51;
			this->manual_Chart_It2->TabStop = false;
			this->manual_Chart_It2->ViewPortChanged += gcnew ChartDirector::WinViewPortEventHandler(this, &Form1::manual_Chart_It2_ViewPortChanged);
			// 
			// button_manual_ClearErrors
			// 
			this->button_manual_ClearErrors->Enabled = false;
			this->button_manual_ClearErrors->Location = System::Drawing::Point(375, 20);
			this->button_manual_ClearErrors->Name = L"button_manual_ClearErrors";
			this->button_manual_ClearErrors->Size = System::Drawing::Size(106, 21);
			this->button_manual_ClearErrors->TabIndex = 54;
			this->button_manual_ClearErrors->Text = L"Clear Errors";
			this->toolTip->SetToolTip(this->button_manual_ClearErrors, L"Clear current trip errors and ISEG module errors");
			this->button_manual_ClearErrors->UseVisualStyleBackColor = true;
			this->button_manual_ClearErrors->Click += gcnew System::EventHandler(this, &Form1::button_manual_ClearErrors_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			this->saveFileDialog1->Title = L"Sava Data Points";
			// 
			// button_Connect_IOs
			// 
			this->button_Connect_IOs->Enabled = false;
			this->button_Connect_IOs->Location = System::Drawing::Point(250, 42);
			this->button_Connect_IOs->Name = L"button_Connect_IOs";
			this->button_Connect_IOs->Size = System::Drawing::Size(106, 22);
			this->button_Connect_IOs->TabIndex = 1;
			this->button_Connect_IOs->Text = L"Connect IOs";
			this->button_Connect_IOs->UseVisualStyleBackColor = true;
			this->button_Connect_IOs->Click += gcnew System::EventHandler(this, &Form1::button_Connect_IOs_Click);
			// 
			// Status_IOs
			// 
			this->Status_IOs->AutoSize = true;
			this->Status_IOs->Location = System::Drawing::Point(130, 47);
			this->Status_IOs->Name = L"Status_IOs";
			this->Status_IOs->Size = System::Drawing::Size(76, 13);
			this->Status_IOs->TabIndex = 63;
			this->Status_IOs->Text = L"not connected";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(39, 47);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(90, 13);
			this->label39->TabIndex = 62;
			this->label39->Text = L"C843 Trigger IOs:";
			// 
			// button_Connect_CAN
			// 
			this->button_Connect_CAN->Enabled = false;
			this->button_Connect_CAN->Location = System::Drawing::Point(250, 20);
			this->button_Connect_CAN->Name = L"button_Connect_CAN";
			this->button_Connect_CAN->Size = System::Drawing::Size(106, 21);
			this->button_Connect_CAN->TabIndex = 0;
			this->button_Connect_CAN->Text = L"Connect ISEG";
			this->button_Connect_CAN->UseVisualStyleBackColor = true;
			this->button_Connect_CAN->Click += gcnew System::EventHandler(this, &Form1::button_Connect_CAN_Click);
			// 
			// Status_CAN
			// 
			this->Status_CAN->AutoSize = true;
			this->Status_CAN->Location = System::Drawing::Point(130, 24);
			this->Status_CAN->Name = L"Status_CAN";
			this->Status_CAN->Size = System::Drawing::Size(76, 13);
			this->Status_CAN->TabIndex = 60;
			this->Status_CAN->Text = L"not connected";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(13, 24);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(116, 13);
			this->label34->TabIndex = 59;
			this->label34->Text = L"ISEG CAN connection:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button_Connect_Freq);
			this->groupBox3->Controls->Add(this->Status_FreqCounter);
			this->groupBox3->Controls->Add(this->label121);
			this->groupBox3->Controls->Add(this->tbFrequency);
			this->groupBox3->Controls->Add(this->Module_error);
			this->groupBox3->Controls->Add(this->button_manual_ClearErrors);
			this->groupBox3->Controls->Add(this->button_Connect_IOs);
			this->groupBox3->Controls->Add(this->Status_IOs);
			this->groupBox3->Controls->Add(this->label39);
			this->groupBox3->Controls->Add(this->button_Connect_CAN);
			this->groupBox3->Controls->Add(this->Status_CAN);
			this->groupBox3->Controls->Add(this->label34);
			this->groupBox3->Location = System::Drawing::Point(681, 27);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(543, 96);
			this->groupBox3->TabIndex = 59;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Connections";
			// 
			// button_Connect_Freq
			// 
			this->button_Connect_Freq->Location = System::Drawing::Point(250, 65);
			this->button_Connect_Freq->Name = L"button_Connect_Freq";
			this->button_Connect_Freq->Size = System::Drawing::Size(106, 22);
			this->button_Connect_Freq->TabIndex = 68;
			this->button_Connect_Freq->Text = L"Connect Freq";
			this->button_Connect_Freq->UseVisualStyleBackColor = true;
			this->button_Connect_Freq->Click += gcnew System::EventHandler(this, &Form1::Button_Connect_Freq_Click);
			// 
			// Status_FreqCounter
			// 
			this->Status_FreqCounter->AutoSize = true;
			this->Status_FreqCounter->Location = System::Drawing::Point(130, 70);
			this->Status_FreqCounter->Name = L"Status_FreqCounter";
			this->Status_FreqCounter->Size = System::Drawing::Size(76, 13);
			this->Status_FreqCounter->TabIndex = 67;
			this->Status_FreqCounter->Text = L"not connected";
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->Location = System::Drawing::Point(11, 70);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(118, 13);
			this->label121->TabIndex = 66;
			this->label121->Text = L"HP Frequency Counter:";
			// 
			// tbFrequency
			// 
			this->tbFrequency->BackColor = System::Drawing::SystemColors::Control;
			this->tbFrequency->ForeColor = System::Drawing::SystemColors::WindowText;
			this->tbFrequency->Location = System::Drawing::Point(375, 66);
			this->tbFrequency->Name = L"tbFrequency";
			this->tbFrequency->ReadOnly = true;
			this->tbFrequency->Size = System::Drawing::Size(106, 20);
			this->tbFrequency->TabIndex = 62;
			// 
			// Module_error
			// 
			this->Module_error->AutoSize = true;
			this->Module_error->ForeColor = System::Drawing::Color::Red;
			this->Module_error->Location = System::Drawing::Point(382, 47);
			this->Module_error->Name = L"Module_error";
			this->Module_error->Size = System::Drawing::Size(95, 13);
			this->Module_error->TabIndex = 65;
			this->Module_error->Text = L"ISEG Module Error";
			this->Module_error->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->out_setpoint_V1);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->pictureBox3);
			this->groupBox4->Controls->Add(this->manual_Chart_IV1);
			this->groupBox4->Controls->Add(this->manual_Chart_It1);
			this->groupBox4->Controls->Add(this->out_val_V1);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->out_val_I1);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Location = System::Drawing::Point(681, 138);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(543, 172);
			this->groupBox4->TabIndex = 60;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"State V1";
			// 
			// out_setpoint_V1
			// 
			this->out_setpoint_V1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->out_setpoint_V1->Location = System::Drawing::Point(73, 26);
			this->out_setpoint_V1->Name = L"out_setpoint_V1";
			this->out_setpoint_V1->ReadOnly = true;
			this->out_setpoint_V1->Size = System::Drawing::Size(64, 20);
			this->out_setpoint_V1->TabIndex = 66;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(137, 29);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(14, 13);
			this->label27->TabIndex = 67;
			this->label27->Text = L"V";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(83, 10);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 13);
			this->label22->TabIndex = 65;
			this->label22->Text = L"setpoint";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(173, 10);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(36, 13);
			this->label19->TabIndex = 64;
			this->label19->Text = L"actual";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(521, 127);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(20, 13);
			this->label21->TabIndex = 63;
			this->label21->Text = L"[V]";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(279, 12);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(26, 13);
			this->label20->TabIndex = 62;
			this->label20->Text = L"[µA]";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 59);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 13);
			this->label13->TabIndex = 61;
			this->label13->Text = L"[µA]";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(11, 149);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(510, 17);
			this->pictureBox3->TabIndex = 60;
			this->pictureBox3->TabStop = false;
			// 
			// manual_Chart_IV1
			// 
			this->manual_Chart_IV1->ContextMenuStrip = this->context_Chart;
			this->manual_Chart_IV1->Location = System::Drawing::Point(261, 26);
			this->manual_Chart_IV1->Name = L"manual_Chart_IV1";
			this->manual_Chart_IV1->Size = System::Drawing::Size(260, 136);
			this->manual_Chart_IV1->TabIndex = 58;
			this->manual_Chart_IV1->TabStop = false;
			this->manual_Chart_IV1->ViewPortChanged += gcnew ChartDirector::WinViewPortEventHandler(this, &Form1::manual_Chart_IV1_ViewPortChanged);
			// 
			// manual_Chart_It1
			// 
			this->manual_Chart_It1->Location = System::Drawing::Point(11, 75);
			this->manual_Chart_It1->Name = L"manual_Chart_It1";
			this->manual_Chart_It1->Size = System::Drawing::Size(239, 87);
			this->manual_Chart_It1->TabIndex = 59;
			this->manual_Chart_It1->TabStop = false;
			this->manual_Chart_It1->ViewPortChanged += gcnew ChartDirector::WinViewPortEventHandler(this, &Form1::manual_Chart_It1_ViewPortChanged);
			// 
			// out_val_V1
			// 
			this->out_val_V1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->out_val_V1->Location = System::Drawing::Point(160, 26);
			this->out_val_V1->Name = L"out_val_V1";
			this->out_val_V1->ReadOnly = true;
			this->out_val_V1->Size = System::Drawing::Size(64, 20);
			this->out_val_V1->TabIndex = 51;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(230, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 52;
			this->label6->Text = L"V";
			// 
			// out_val_I1
			// 
			this->out_val_I1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->out_val_I1->Location = System::Drawing::Point(160, 49);
			this->out_val_I1->Name = L"out_val_I1";
			this->out_val_I1->ReadOnly = true;
			this->out_val_I1->Size = System::Drawing::Size(64, 20);
			this->out_val_I1->TabIndex = 53;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(230, 52);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 13);
			this->label16->TabIndex = 54;
			this->label16->Text = L"µA";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->out_setpoint_V2);
			this->groupBox5->Controls->Add(this->label64);
			this->groupBox5->Controls->Add(this->label65);
			this->groupBox5->Controls->Add(this->label63);
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->label25);
			this->groupBox5->Controls->Add(this->label23);
			this->groupBox5->Controls->Add(this->pictureBox1);
			this->groupBox5->Controls->Add(this->manual_Chart_IV2);
			this->groupBox5->Controls->Add(this->manual_Chart_It2);
			this->groupBox5->Controls->Add(this->out_val_V2);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->out_val_I2);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Location = System::Drawing::Point(681, 320);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(543, 172);
			this->groupBox5->TabIndex = 61;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"State V2";
			// 
			// out_setpoint_V2
			// 
			this->out_setpoint_V2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->out_setpoint_V2->Location = System::Drawing::Point(75, 25);
			this->out_setpoint_V2->Name = L"out_setpoint_V2";
			this->out_setpoint_V2->ReadOnly = true;
			this->out_setpoint_V2->Size = System::Drawing::Size(64, 20);
			this->out_setpoint_V2->TabIndex = 69;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(139, 29);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(14, 13);
			this->label64->TabIndex = 70;
			this->label64->Text = L"V";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(85, 10);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(44, 13);
			this->label65->TabIndex = 68;
			this->label65->Text = L"setpoint";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(173, 9);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(36, 13);
			this->label63->TabIndex = 65;
			this->label63->Text = L"actual";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(521, 116);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(20, 13);
			this->label29->TabIndex = 64;
			this->label29->Text = L"[V]";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(279, 10);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(26, 13);
			this->label25->TabIndex = 63;
			this->label25->Text = L"[µA]";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(13, 56);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(26, 13);
			this->label23->TabIndex = 62;
			this->label23->Text = L"[µA]";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(11, 149);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(510, 17);
			this->pictureBox1->TabIndex = 61;
			this->pictureBox1->TabStop = false;
			// 
			// manual_Chart_IV2
			// 
			this->manual_Chart_IV2->ContextMenuStrip = this->context_Chart;
			this->manual_Chart_IV2->Location = System::Drawing::Point(261, 23);
			this->manual_Chart_IV2->Name = L"manual_Chart_IV2";
			this->manual_Chart_IV2->Size = System::Drawing::Size(260, 136);
			this->manual_Chart_IV2->TabIndex = 50;
			this->manual_Chart_IV2->TabStop = false;
			this->manual_Chart_IV2->ViewPortChanged += gcnew ChartDirector::WinViewPortEventHandler(this, &Form1::manual_Chart_IV2_ViewPortChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->out_setpoint_V3);
			this->groupBox6->Controls->Add(this->label67);
			this->groupBox6->Controls->Add(this->label68);
			this->groupBox6->Controls->Add(this->label66);
			this->groupBox6->Controls->Add(this->channel_V3);
			this->groupBox6->Controls->Add(this->label30);
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Controls->Add(this->label24);
			this->groupBox6->Controls->Add(this->pictureBox2);
			this->groupBox6->Controls->Add(this->manual_Chart_IV3);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Controls->Add(this->out_val_I3);
			this->groupBox6->Controls->Add(this->manual_Chart_It3);
			this->groupBox6->Controls->Add(this->out_val_V3);
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Location = System::Drawing::Point(681, 499);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(543, 172);
			this->groupBox6->TabIndex = 48;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"State V3";
			// 
			// out_setpoint_V3
			// 
			this->out_setpoint_V3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->out_setpoint_V3->Location = System::Drawing::Point(75, 23);
			this->out_setpoint_V3->Name = L"out_setpoint_V3";
			this->out_setpoint_V3->ReadOnly = true;
			this->out_setpoint_V3->Size = System::Drawing::Size(64, 20);
			this->out_setpoint_V3->TabIndex = 72;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(139, 26);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(14, 13);
			this->label67->TabIndex = 73;
			this->label67->Text = L"V";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(85, 8);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(44, 13);
			this->label68->TabIndex = 71;
			this->label68->Text = L"setpoint";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(173, 9);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(36, 13);
			this->label66->TabIndex = 70;
			this->label66->Text = L"actual";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(521, 116);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(20, 13);
			this->label30->TabIndex = 69;
			this->label30->Text = L"[V]";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(279, 9);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(26, 13);
			this->label26->TabIndex = 68;
			this->label26->Text = L"[µA]";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(13, 55);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(26, 13);
			this->label24->TabIndex = 67;
			this->label24->Text = L"[µA]";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(11, 148);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(510, 17);
			this->pictureBox2->TabIndex = 66;
			this->pictureBox2->TabStop = false;
			// 
			// manual_Chart_IV3
			// 
			this->manual_Chart_IV3->ContextMenuStrip = this->context_Chart;
			this->manual_Chart_IV3->Location = System::Drawing::Point(261, 22);
			this->manual_Chart_IV3->Name = L"manual_Chart_IV3";
			this->manual_Chart_IV3->Size = System::Drawing::Size(260, 136);
			this->manual_Chart_IV3->TabIndex = 61;
			this->manual_Chart_IV3->TabStop = false;
			this->manual_Chart_IV3->ViewPortChanged += gcnew ChartDirector::WinViewPortEventHandler(this, &Form1::manual_Chart_IV3_ViewPortChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(230, 48);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 13);
			this->label14->TabIndex = 59;
			this->label14->Text = L"µA";
			// 
			// out_val_I3
			// 
			this->out_val_I3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->out_val_I3->Location = System::Drawing::Point(160, 45);
			this->out_val_I3->Name = L"out_val_I3";
			this->out_val_I3->ReadOnly = true;
			this->out_val_I3->Size = System::Drawing::Size(64, 20);
			this->out_val_I3->TabIndex = 58;
			// 
			// manual_Chart_It3
			// 
			this->manual_Chart_It3->Location = System::Drawing::Point(11, 71);
			this->manual_Chart_It3->Name = L"manual_Chart_It3";
			this->manual_Chart_It3->Size = System::Drawing::Size(239, 87);
			this->manual_Chart_It3->TabIndex = 64;
			this->manual_Chart_It3->TabStop = false;
			this->manual_Chart_It3->ViewPortChanged += gcnew ChartDirector::WinViewPortEventHandler(this, &Form1::manual_Chart_It3_ViewPortChanged);
			// 
			// out_val_V3
			// 
			this->out_val_V3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->out_val_V3->Location = System::Drawing::Point(160, 22);
			this->out_val_V3->Name = L"out_val_V3";
			this->out_val_V3->ReadOnly = true;
			this->out_val_V3->Size = System::Drawing::Size(64, 20);
			this->out_val_V3->TabIndex = 56;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(230, 25);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 57;
			this->label9->Text = L"V";
			// 
			// backgroundWorker_Sweep
			// 
			this->backgroundWorker_Sweep->WorkerReportsProgress = true;
			this->backgroundWorker_Sweep->WorkerSupportsCancellation = true;
			this->backgroundWorker_Sweep->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker_Sweep_DoWork);
			this->backgroundWorker_Sweep->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &Form1::backgroundWorker_Sweep_ProgressChanged);
			this->backgroundWorker_Sweep->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &Form1::backgroundWorker_Sweep_RunWorkerCompleted);
			// 
			// toolTip
			// 
			this->toolTip->AutoPopDelay = 10000;
			this->toolTip->InitialDelay = 500;
			this->toolTip->ReshowDelay = 100;
			this->toolTip->ShowAlways = true;
			// 
			// timer_creep_update
			// 
			this->timer_creep_update->Interval = 500;
			this->timer_creep_update->Tick += gcnew System::EventHandler(this, &Form1::Timer_creep_update_Tick);
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->Location = System::Drawing::Point(1164, 97);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(20, 13);
			this->label122->TabIndex = 69;
			this->label122->Text = L"Hz";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1237, 682);
			this->Controls->Add(this->label122);
			this->Controls->Add(this->channel_V1);
			this->Controls->Add(this->channel_V2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->TabControl1);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"ISEG_Control";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load_1);
			this->TabControl1->ResumeLayout(false);
			this->tabPage_Manual->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->manual_groupbox_V8->ResumeLayout(false);
			this->manual_groupbox_V8->PerformLayout();
			this->manual_groupbox_V7->ResumeLayout(false);
			this->manual_groupbox_V7->PerformLayout();
			this->manual_groupbox_V6->ResumeLayout(false);
			this->manual_groupbox_V6->PerformLayout();
			this->manual_groupbox_V5->ResumeLayout(false);
			this->manual_groupbox_V5->PerformLayout();
			this->manual_groupbox_V4->ResumeLayout(false);
			this->manual_groupbox_V4->PerformLayout();
			this->manual_groupbox_V3->ResumeLayout(false);
			this->manual_groupbox_V3->PerformLayout();
			this->manual_groupbox_V2->ResumeLayout(false);
			this->manual_groupbox_V2->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar_ChartUpdateRate))->EndInit();
			this->manual_groupbox_V1->ResumeLayout(false);
			this->manual_groupbox_V1->PerformLayout();
			this->tabPage_Sweep->ResumeLayout(false);
			this->sweep_groupbox_V8->ResumeLayout(false);
			this->sweep_groupbox_V8->PerformLayout();
			this->sweep_groupbox_V7->ResumeLayout(false);
			this->sweep_groupbox_V7->PerformLayout();
			this->sweep_groupbox_V6->ResumeLayout(false);
			this->sweep_groupbox_V6->PerformLayout();
			this->sweep_groupbox_V5->ResumeLayout(false);
			this->sweep_groupbox_V5->PerformLayout();
			this->sweep_groupbox_V4->ResumeLayout(false);
			this->sweep_groupbox_V4->PerformLayout();
			this->sweep_groupbox_V3->ResumeLayout(false);
			this->sweep_groupbox_V3->PerformLayout();
			this->sweep_groupbox_V2->ResumeLayout(false);
			this->sweep_groupbox_V2->PerformLayout();
			this->sweep_groupbox_V1->ResumeLayout(false);
			this->sweep_groupbox_V1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage_Settings->ResumeLayout(false);
			this->tabPage_Settings->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->tabPage_test->ResumeLayout(false);
			this->tabPage_test->PerformLayout();
			this->context_Chart->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_It2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_IV1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_It1))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_IV2))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_IV3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manual_Chart_It3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion


		 
#pragma region Form Data Handling
//#############################################################
//
//		     F O R M   D A T A   H A N D L I N G
//
//#############################################################

private: System::Void init_form_data()
		 {
						
			//*********************
			// Manual Mode
			//*********************
			
			manual_groupbox_V1->Text = "Voltage1: Ch"+VoltControl::Chan_V1->ToString();
			manual_groupbox_V2->Text = "Voltage2: Ch" + VoltControl::Chan_V2->ToString();
			manual_groupbox_V3->Text = "Voltage3: Ch" + VoltControl::Chan_V3->ToString();

			manual_val_V1->Text=ManualMode::Default.Setpoint_V1.ToString();
			manual_val_V2->Text=ManualMode::Default.Setpoint_V2.ToString();
			manual_val_V3->Text=ManualMode::Default.Setpoint_V3.ToString();

			current_limit_V1->Text=ManualMode::Default.I_Limit_V1.ToString();
			current_limit_V2->Text = ManualMode::Default.I_Limit_V2.ToString();
			current_limit_V3->Text = ManualMode::Default.I_Limit_V3.ToString();
			manual_val_ramp->Text=ManualMode::Default.Ramp.ToString();

			if((ManualMode::Default.ChartUpdateRate>=trackBar_ChartUpdateRate->Minimum)&&(ManualMode::Default.ChartUpdateRate<=trackBar_ChartUpdateRate->Maximum))
			{
				trackBar_ChartUpdateRate->Value=ManualMode::Default.ChartUpdateRate;
			}

			//*********************
			// SweepMode
			//*********************

			sweep_groupbox_V1->Text = "Voltage1: Ch" + VoltControl::Chan_V1->ToString();
			sweep_groupbox_V2->Text = "Voltage2: Ch" + VoltControl::Chan_V2->ToString();
			sweep_groupbox_V3->Text = "Voltage3: Ch" + VoltControl::Chan_V3->ToString();

			Sweep_Initial_V1->Text = SweepMode::Default.Initial_V1.ToString();
			Sweep_Initial_V2->Text = SweepMode::Default.Initial_V2.ToString();
			Sweep_Initial_V3->Text = SweepMode::Default.Initial_V3.ToString();

			Sweep_Step_V1->Text = SweepMode::Default.Step_V1.ToString();
			Sweep_Step_V2->Text = SweepMode::Default.Step_V2.ToString();
			Sweep_Step_V3->Text = SweepMode::Default.Step_V3.ToString();

			Sweep_Final_V1->Text = SweepMode::Default.Final_V1.ToString();
			Sweep_Final_V2->Text = SweepMode::Default.Final_V2.ToString();
			Sweep_Final_V3->Text = SweepMode::Default.Final_V3.ToString();

			sweep_ramp_init->Text = SweepMode::Default.Ramp_Initial.ToString();
			sweep_ramp_cycle->Text = SweepMode::Default.Ramp_Cycle.ToString();
		 }

private: System::Void get_form_data()
		{
			 bool ok;

			 //*********************
			 // Manual Mode
			 //*********************
			 ManualMode::UserInputData.I_Limit_V1 = Global::StringToFloat(current_limit_V1->Text,&ok);
			 ManualMode::UserInputData.I_Limit_V2 = Global::StringToFloat(current_limit_V2->Text, &ok);
			 ManualMode::UserInputData.I_Limit_V3 = Global::StringToFloat(current_limit_V3->Text, &ok);
			 ManualMode::UserInputData.Ramp = Global::StringToFloat(manual_val_ramp->Text, &ok);

			 if (tabPage_Manual->Visible)
			 {
				 ManualMode::UserInputData.Setpoint_V1 = Global::StringToFloat(manual_val_V1->Text, &ok);
				 ManualMode::UserInputData.Setpoint_V2 = Global::StringToFloat(manual_val_V2->Text, &ok);
				 ManualMode::UserInputData.Setpoint_V3 = Global::StringToFloat(manual_val_V3->Text, &ok);
			 }

			
			 //*********************
			 // Sweep Mode
			 //*********************
			 SweepMode::UserInputData.Ramp_Initial = Global::StringToFloat(sweep_ramp_init->Text, &ok);
			 SweepMode::UserInputData.Ramp_Cycle = Global::StringToFloat(sweep_ramp_cycle->Text, &ok);
			 SweepMode::UserInputData.I_Limit_V1 = Global::StringToFloat(current_limit_V1->Text, &ok);
			 SweepMode::UserInputData.I_Limit_V2 = Global::StringToFloat(current_limit_V2->Text, &ok);
			 SweepMode::UserInputData.I_Limit_V3 = Global::StringToFloat(current_limit_V3->Text, &ok);

			 if (tabPage_Sweep->Visible)
			 {
				 SweepMode::UserInputData.ValsFromMask = Sweep_ValsFromMask->Checked;
				 SweepMode::UserInputData.ValsFromFile = Sweep_ValsFromFile->Checked;

				 SweepMode::UserInputData.Cycle = Sweep_Cycle->Checked;
				 SweepMode::UserInputData.Loop = Sweep_Loop->Checked;
				 SweepMode::UserInputData.Loops = Global::StringToInt(Sweep_Loops->Text, &ok);
				 SweepMode::UserInputData.Sync = Sweep_Sync->Checked;

				 SweepMode::UserInputData.DelayTime = Global::StringToInt(Sweep_DelayTime->Text, &ok);

				 SweepMode::UserInputData.Enable_V1 = Sweep_Enable_V1->Checked;
				 SweepMode::UserInputData.Enable_V2 = Sweep_Enable_V2->Checked;
				 SweepMode::UserInputData.Enable_V3 = Sweep_Enable_V3->Checked;

				 SweepMode::UserInputData.Initial_V1 = Global::StringToFloat(Sweep_Initial_V1->Text, &ok);
				 SweepMode::UserInputData.Step_V1 = Global::StringToFloat(Sweep_Step_V1->Text, &ok);
				 SweepMode::UserInputData.Final_V1 = Global::StringToFloat(Sweep_Final_V1->Text, &ok);

				 SweepMode::UserInputData.Initial_V2 = Global::StringToFloat(Sweep_Initial_V2->Text, &ok);
				 SweepMode::UserInputData.Step_V2 = Global::StringToFloat(Sweep_Step_V2->Text, &ok);
				 SweepMode::UserInputData.Final_V2 = Global::StringToFloat(Sweep_Final_V2->Text, &ok);

				 SweepMode::UserInputData.Initial_V3 = Global::StringToFloat(Sweep_Initial_V3->Text, &ok);
				 SweepMode::UserInputData.Step_V3 = Global::StringToFloat(Sweep_Step_V3->Text, &ok);
				 SweepMode::UserInputData.Final_V3 = Global::StringToFloat(Sweep_Final_V3->Text, &ok);

			 }

		
		}
private: System::Void check_form_data()
			{
			 //*********************
			 // Manual Mode
			 //*********************
			 ManualMode::InputError.I_Limit_V1 = !Global::CheckRangeFloat(ManualMode::UserInputData.I_Limit_V1, VoltControl::min_Current, VoltControl::max_Current);
			 ManualMode::InputError.I_Limit_V2 = !Global::CheckRangeFloat(ManualMode::UserInputData.I_Limit_V2, VoltControl::min_Current, VoltControl::max_Current);
			 ManualMode::InputError.I_Limit_V3 = !Global::CheckRangeFloat(ManualMode::UserInputData.I_Limit_V3, VoltControl::min_Current, VoltControl::max_Current);
			 ManualMode::InputError.Ramp = !Global::CheckRangeFloat(ManualMode::UserInputData.Ramp, VoltControl::min_Ramp, VoltControl::max_Ramp);

			 if (tabPage_Manual->Visible)
			 {
			
				 ManualMode::InputError.Setpoint_V1 = !Global::CheckRangeFloat(ManualMode::UserInputData.Setpoint_V1, VoltControl::LowerLimits.V1, VoltControl::UpperLimits.V1);
				 ManualMode::InputError.Setpoint_V2 = !Global::CheckRangeFloat(ManualMode::UserInputData.Setpoint_V2, VoltControl::LowerLimits.V2, VoltControl::UpperLimits.V2);
				 ManualMode::InputError.Setpoint_V3 = !Global::CheckRangeFloat(ManualMode::UserInputData.Setpoint_V3, VoltControl::LowerLimits.V3, VoltControl::UpperLimits.V3);

				 ManualMode::InputWarning.Setpoint_V1 = !Global::CheckRangeFloat(ManualMode::UserInputData.Setpoint_V1, VoltControl::LowerWarning.V1, VoltControl::UpperWarning.V1);
				 ManualMode::InputWarning.Setpoint_V2 = !Global::CheckRangeFloat(ManualMode::UserInputData.Setpoint_V2, VoltControl::LowerWarning.V2, VoltControl::UpperWarning.V2);
				 ManualMode::InputWarning.Setpoint_V3 = !Global::CheckRangeFloat(ManualMode::UserInputData.Setpoint_V3, VoltControl::LowerWarning.V3, VoltControl::UpperWarning.V3);
			 }

			 ManualMode::InputError.sum_bit = (ManualMode::InputError.Setpoint_V1 ||
												 ManualMode::InputError.Setpoint_V2 ||
												 ManualMode::InputError.Setpoint_V3 ||
												 ManualMode::InputError.I_Limit_V1 ||
												 ManualMode::InputError.I_Limit_V2 ||
												 ManualMode::InputError.I_Limit_V3 ||
												 ManualMode::InputError.Ramp);

			 ManualMode::InputWarning.sum_bit = (ManualMode::InputWarning.Setpoint_V1 ||
												 ManualMode::InputWarning.Setpoint_V2 ||
												 ManualMode::InputWarning.Setpoint_V3);



			 //*********************
			 // Sweep Mode
			 //*********************

			 SweepMode::Inputerror.Initial_Ramp = !(Global::CheckRangeFloat(SweepMode::UserInputData.Ramp_Initial, VoltControl::min_Ramp, VoltControl::max_Ramp));
			 SweepMode::Inputerror.Cycle_Ramp = !(Global::CheckRangeFloat(SweepMode::UserInputData.Ramp_Cycle, VoltControl::min_Ramp, VoltControl::max_Ramp));

			 if (SweepMode::UserInputData.DelayTime > 50000) Sweep_DelayTime->Text = "50000";
			 if (SweepMode::UserInputData.DelayTime < 0) Sweep_DelayTime->Text = "0";

				 	
				 if (tabPage_Sweep->Visible)
				 {
			 

					 SweepMode::Inputerror.Loops = Sweep_Loop->Checked && (SweepMode::UserInputData.Loops < 0);

					 SweepMode::Inputerror.Initial_V1 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Initial_V1, VoltControl::LowerLimits.V1, VoltControl::UpperLimits.V1));
					 SweepMode::Inputwarning.Initial_V1 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Initial_V1, VoltControl::LowerWarning.V1, VoltControl::UpperWarning.V1));
					 SweepMode::Inputerror.Step_V1 = !SweepMode::CheckStep(SweepMode::UserInputData.Step_V1, SweepMode::UserInputData.Initial_V1, SweepMode::UserInputData.Final_V1);
					 SweepMode::Inputerror.Final_V1 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Final_V1, VoltControl::LowerLimits.V1, VoltControl::UpperLimits.V1));
					 SweepMode::Inputwarning.Final_V1 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Final_V1, VoltControl::LowerWarning.V1, VoltControl::UpperWarning.V1));

					 SweepMode::Inputerror.Initial_V2 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Initial_V2, VoltControl::LowerLimits.V2, VoltControl::UpperLimits.V2));
					 SweepMode::Inputwarning.Initial_V2 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Initial_V2, VoltControl::LowerWarning.V2, VoltControl::UpperWarning.V2));
					 SweepMode::Inputerror.Step_V2 = !SweepMode::CheckStep(SweepMode::UserInputData.Step_V2, SweepMode::UserInputData.Initial_V2, SweepMode::UserInputData.Final_V2);
					 SweepMode::Inputerror.Final_V2 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Final_V2, VoltControl::LowerLimits.V2, VoltControl::UpperLimits.V2));
					 SweepMode::Inputwarning.Final_V2 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Final_V2, VoltControl::LowerWarning.V2, VoltControl::UpperWarning.V2));

					 SweepMode::Inputerror.Initial_V3 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Initial_V3, VoltControl::LowerLimits.V3, VoltControl::UpperLimits.V3));
					 SweepMode::Inputwarning.Initial_V3 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Initial_V3, VoltControl::LowerWarning.V3, VoltControl::UpperWarning.V3));
					 SweepMode::Inputerror.Step_V3 = !SweepMode::CheckStep(SweepMode::UserInputData.Step_V3, SweepMode::UserInputData.Initial_V3, SweepMode::UserInputData.Final_V3);
					 SweepMode::Inputerror.Final_V3 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Final_V3, VoltControl::LowerLimits.V3, VoltControl::UpperLimits.V3));
					 SweepMode::Inputwarning.Final_V3 = !(Global::CheckRangeFloat(SweepMode::UserInputData.Final_V3, VoltControl::LowerWarning.V3, VoltControl::UpperWarning.V3));

					 
					 /////////////////////////////////////////////////
					 /// C H E C K   R E S U L T I N G  S P E C T R A 
					 /////////////////////////////////////////////////

					 //Values from Mask
					 if (SweepMode::UserInputData.ValsFromMask)
					 {

						 int tmp_N1, tmp_N2, tmp_N3;
						 int factor1, factor2, factor3;
						 int rem1, rem2, rem3;
						 int sum_N;
						 int sum_Enable;

						 tmp_N1 = Math::Round((Math::Abs((SweepMode::UserInputData.Final_V1 - SweepMode::UserInputData.Initial_V1)) / SweepMode::UserInputData.Step_V1) + 0.4999)*Convert::ToInt32(SweepMode::UserInputData.Enable_V1);
						 tmp_N2 = Math::Round((Math::Abs((SweepMode::UserInputData.Final_V2 - SweepMode::UserInputData.Initial_V2)) / SweepMode::UserInputData.Step_V2) + 0.4999)*Convert::ToInt32(SweepMode::UserInputData.Enable_V2);
						 tmp_N3 = Math::Round((Math::Abs((SweepMode::UserInputData.Final_V3 - SweepMode::UserInputData.Initial_V3)) / SweepMode::UserInputData.Step_V3) + 0.4999)*Convert::ToInt32(SweepMode::UserInputData.Enable_V3);
						 sum_N = tmp_N1 + tmp_N2 + tmp_N3;
						 sum_Enable = Convert::ToInt32(SweepMode::UserInputData.Enable_V1) + Convert::ToInt32(SweepMode::UserInputData.Enable_V2) + Convert::ToInt32(SweepMode::UserInputData.Enable_V3);

						 rem1 = SweepMode::Mod(sum_N, tmp_N1, factor1);
						 rem2 = SweepMode::Mod(sum_N, tmp_N2, factor2);
						 rem3 = SweepMode::Mod(sum_N, tmp_N3, factor3);


						 if ((sum_N == 0) ||
							 (SweepMode::UserInputData.Enable_V1 && (rem1 > 0 || (factor1 != sum_Enable))) ||
							 (SweepMode::UserInputData.Enable_V2 && (rem2 > 0 || (factor2 != sum_Enable))) ||
							 (SweepMode::UserInputData.Enable_V3 && (rem3 > 0 || (factor3 != sum_Enable))))
						 {
							 SweepMode::UserInputData.ResultSpectra = -1;
							 SweepMode::Inputerror.ResultSpectra = true;
							 toolTip->SetToolTip(Sweep_ResultSpectra, "All enabled voltages must coincide in resulting number of steps");

						 }
						 else
						 {
							 int SpecFactor = (Convert::ToInt32(SweepMode::UserInputData.Cycle) + 1); //consider Cycle
							 if (SweepMode::UserInputData.Loop) SpecFactor *= (SweepMode::UserInputData.Loops + 1);

							 if (SweepMode::UserInputData.Enable_V1) SweepMode::UserInputData.ResultSpectra = tmp_N1;
							 else if (SweepMode::UserInputData.Enable_V2) SweepMode::UserInputData.ResultSpectra = tmp_N2;
							 else if (SweepMode::UserInputData.Enable_V3) SweepMode::UserInputData.ResultSpectra = tmp_N3;
							 SweepMode::UserInputData.OverallSpectra = (SweepMode::UserInputData.ResultSpectra*SpecFactor) + 1;
							 SweepMode::Inputerror.ResultSpectra = false;
							 toolTip->SetToolTip(Sweep_ResultSpectra, "Resulting number of spectra (use this number for WinSpec)");
						 }
					 }

					 //Values from File
					 else if (SweepMode::UserInputData.ValsFromFile)
					 {
						 int SpecFactor = (Convert::ToInt32(SweepMode::UserInputData.Cycle) + 1); //consider Cycle
						 if (SweepMode::UserInputData.Loop) SpecFactor *= (SweepMode::UserInputData.Loops + 1);

						 SweepMode::UserInputData.ResultSpectra = SweepMode::Sweepfile_Values->GetLength(0)-1;
						 SweepMode::Inputerror.ResultSpectra = SweepMode::UserInputData.ResultSpectra < 1;

						 SweepMode::UserInputData.OverallSpectra = (SweepMode::UserInputData.ResultSpectra*SpecFactor) + 1;
					 }

				}

				
				 bool tmp_Inputerror_ValsFromMask = ((SweepMode::UserInputData.Enable_V1 && (SweepMode::Inputerror.Initial_V1 || SweepMode::Inputerror.Step_V1 || SweepMode::Inputerror.Final_V1)) ||
					 (SweepMode::UserInputData.Enable_V2 && (SweepMode::Inputerror.Initial_V2 || SweepMode::Inputerror.Step_V2 || SweepMode::Inputerror.Final_V2)) ||
					 (SweepMode::UserInputData.Enable_V3 && (SweepMode::Inputerror.Initial_V3 || SweepMode::Inputerror.Step_V3 || SweepMode::Inputerror.Final_V3)));

				 bool tmp_Inputwarning_ValsFromMask = ((SweepMode::UserInputData.Enable_V1 && (SweepMode::Inputwarning.Initial_V1 || SweepMode::Inputwarning.Final_V1)) ||
					 (SweepMode::UserInputData.Enable_V2 && (SweepMode::Inputwarning.Initial_V2 || SweepMode::Inputwarning.Final_V2)) ||
					 (SweepMode::UserInputData.Enable_V3 && (SweepMode::Inputwarning.Initial_V3 || SweepMode::Inputwarning.Final_V3)));

				 bool tmp_Inputerror_ValsFromFile = true;
				 bool tmp_Inputwarning_ValsFromFile = true;
				 if (SweepMode::file_valid)
				 {
					 tmp_Inputerror_ValsFromFile = ((SweepMode::UserInputData.Enable_V1 && (SweepMode::Get_File_Min(1)<VoltControl::LowerLimits.V1 || SweepMode::Get_File_Max(1)>VoltControl::UpperLimits.V1)) ||
						 (SweepMode::UserInputData.Enable_V2 && (SweepMode::Get_File_Min(2)<VoltControl::LowerLimits.V2 || SweepMode::Get_File_Max(2)>VoltControl::UpperLimits.V2)) ||
						 (SweepMode::UserInputData.Enable_V3 && (SweepMode::Get_File_Min(3)<VoltControl::LowerLimits.V3 || SweepMode::Get_File_Max(3)>VoltControl::UpperLimits.V3)));

					 tmp_Inputwarning_ValsFromFile = ((SweepMode::UserInputData.Enable_V1 && (SweepMode::Get_File_Min(1)<VoltControl::LowerWarning.V1 || SweepMode::Get_File_Max(1)>VoltControl::UpperWarning.V1)) ||
						 (SweepMode::UserInputData.Enable_V2 && (SweepMode::Get_File_Min(2)<VoltControl::LowerWarning.V2 || SweepMode::Get_File_Max(2)>VoltControl::UpperWarning.V2)) ||
						 (SweepMode::UserInputData.Enable_V3 && (SweepMode::Get_File_Min(3)<VoltControl::LowerWarning.V3 || SweepMode::Get_File_Max(3)>VoltControl::UpperWarning.V3)));
				 }
						
				 
				 SweepMode::Inputerror.sum_bit = (SweepMode::Inputerror.Loops ||
												 SweepMode::Inputerror.ResultSpectra || SweepMode::Inputerror.Initial_Ramp || SweepMode::Inputerror.Cycle_Ramp ||
												 (SweepMode::UserInputData.ValsFromMask && tmp_Inputerror_ValsFromMask) ||
												 (SweepMode::UserInputData.ValsFromFile && tmp_Inputerror_ValsFromFile));

								

				 SweepMode::Inputwarning.sum_bit = ((SweepMode::UserInputData.ValsFromMask && tmp_Inputwarning_ValsFromMask) ||
					 (SweepMode::UserInputData.ValsFromFile  && tmp_Inputwarning_ValsFromFile));
					
			}

private: System::Void set_form_data()
		 {
			 //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			 //IMPORTANT: ONLY SET READ-ONLY-ELEMENTS!!!
			 //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			 bool ok;

			 //*********************
			 // General
			 //*********************
			
			 //Frequency
			 tbFrequency->Text = freqCounter->GetFrequency().ToString("F4");

			 if (freqCounter->Connected)
			 {
				 Status_FreqCounter->Text = "Connected";
				 Status_FreqCounter->ForeColor = System::Drawing::Color::Black;
			 }
			 else
			 {
				 Status_FreqCounter->Text = "Not Connected";
				 Status_FreqCounter->ForeColor = System::Drawing::Color::Red;
			 }

			 //CAN Status
			 Status_CAN->Text = VoltControl::Status_CAN;
			 Status_CAN->ForeColor = VoltControl::Status_CAN_Color;
			 Module_error->Visible = VoltControl::ModuleStatus.IsSumError;

			 //Channel status
			 channel_V1->Text = "Ch" + VoltControl::Chan_V1->ToString() + ":  " + VoltControl::ChanStatus_V1.Text;
			 channel_V1->ForeColor = VoltControl::ChanStatus_V1.TextColor; //Only takes effect after changing BackColor ;-)
			 channel_V1->BackColor = System::Drawing::SystemColors::ControlDark;
			 channel_V1->BackColor = System::Drawing::SystemColors::Control;
			 channel_V2->Text = "Ch" + VoltControl::Chan_V2->ToString() + ":  " + VoltControl::ChanStatus_V2.Text;
			 channel_V2->ForeColor = VoltControl::ChanStatus_V2.TextColor;
			 channel_V2->BackColor = System::Drawing::SystemColors::ControlDark;
			 channel_V2->BackColor = System::Drawing::SystemColors::Control;
			 channel_V3->Text = "Ch" + VoltControl::Chan_V3->ToString() + ":  " + VoltControl::ChanStatus_V3.Text;
			 channel_V3->ForeColor = VoltControl::ChanStatus_V3.TextColor;
			 channel_V3->BackColor = System::Drawing::SystemColors::ControlDark;
			 channel_V3->BackColor = System::Drawing::SystemColors::Control;

			 // Textboxes
			 out_setpoint_V1->Text = VoltControl::Act.setpoint_V1.ToString();
			 out_setpoint_V2->Text = VoltControl::Act.setpoint_V2.ToString();
			 out_setpoint_V3->Text = VoltControl::Act.setpoint_V3.ToString();

			 out_val_V1->Text = VoltControl::Act.V1.ToString();
			 out_val_V2->Text = VoltControl::Act.V2.ToString();
			 out_val_V3->Text = VoltControl::Act.V3.ToString();
			 out_val_ramp->Text = VoltControl::Act_Ramp.ToString();

			 out_val_I1->Text = VoltControl::Act.I1.ToString();
			 out_val_I2->Text = VoltControl::Act.I2.ToString();
			 out_val_I3->Text = VoltControl::Act.I3.ToString();

			 //enable controll elements
			 button_Connect_CAN->Enabled = !VoltControl::CAN_connected;
			 button_Connect_IOs->Enabled = !TriggerIO->connected;
			 button_manual_ClearErrors->Enabled = ((VoltControl::CAN_connected) &&
				 (VoltControl::ModuleStatus.IsSumError ||
				 VoltControl::ChanStatus_V1.set_IsTripExeeded ||
				 VoltControl::ChanStatus_V2.set_IsTripExeeded ||
				 VoltControl::ChanStatus_V3.set_IsTripExeeded));

			//*********************
			// Manual Mode
			//*********************

			 if (ManualMode::InputError.I_Limit_V1) current_limit_V1->BackColor = System::Drawing::Color::Red;
			 else current_limit_V1->BackColor = System::Drawing::SystemColors::Window;
			 if (ManualMode::InputError.I_Limit_V2) current_limit_V2->BackColor = System::Drawing::Color::Red;
			 else current_limit_V2->BackColor = System::Drawing::SystemColors::Window;
			 if (ManualMode::InputError.I_Limit_V3) current_limit_V3->BackColor = System::Drawing::Color::Red;
			 else current_limit_V3->BackColor = System::Drawing::SystemColors::Window;
			 if (ManualMode::InputError.Ramp) manual_val_ramp->BackColor = System::Drawing::Color::Red;
			 else manual_val_ramp->BackColor = System::Drawing::SystemColors::Window;

			 if (tabPage_Manual->Visible)
			 {
				 //enable controll elements
				 button_SetVoltage->Enabled = VoltControl::CAN_connected && !ManualMode::InputError.sum_bit && !SweepMode::SweepRunning;
				 button_AllOff->Enabled = VoltControl::CAN_connected;

				 manual_val_V1->Enabled = enable_set_V1->Checked;
				 manual_val_V2->Enabled = enable_set_V2->Checked;
				 manual_val_V3->Enabled = enable_set_V3->Checked;

				 if (!enable_set_V1->Checked) manual_val_V1->BackColor = System::Drawing::SystemColors::Control;
				 else if (ManualMode::InputError.Setpoint_V1) manual_val_V1->BackColor = System::Drawing::Color::Red;
				 else if (ManualMode::InputWarning.Setpoint_V1) manual_val_V1->BackColor = System::Drawing::Color::Yellow;
				 else manual_val_V1->BackColor = System::Drawing::SystemColors::Window;

				 if (!enable_set_V2->Checked) manual_val_V2->BackColor = System::Drawing::SystemColors::Control;
				 else if (ManualMode::InputError.Setpoint_V2) manual_val_V2->BackColor = System::Drawing::Color::Red;
				 else if (ManualMode::InputWarning.Setpoint_V2) manual_val_V2->BackColor = System::Drawing::Color::Yellow;
				 else manual_val_V2->BackColor = System::Drawing::SystemColors::Window;

				 if (!enable_set_V3->Checked) manual_val_V3->BackColor = System::Drawing::SystemColors::Control;
				 else if (ManualMode::InputError.Setpoint_V3) manual_val_V3->BackColor = System::Drawing::Color::Red;
				 else if (ManualMode::InputWarning.Setpoint_V3) manual_val_V3->BackColor = System::Drawing::Color::Yellow;
				 else manual_val_V3->BackColor = System::Drawing::SystemColors::Window;

				 creep_time->Text = ManualMode::CreepTime.ToString();
			 }
		
			//*********************
			// SweepMode
			//*********************
			
			 //Textboxes

			 if (SweepMode::Inputerror.Initial_Ramp) sweep_ramp_init->BackColor = System::Drawing::Color::Red;
			 else sweep_ramp_init->BackColor = System::Drawing::SystemColors::Window;
			 if (SweepMode::Inputerror.Cycle_Ramp) sweep_ramp_cycle->BackColor = System::Drawing::Color::Red;
			 else sweep_ramp_cycle->BackColor = System::Drawing::SystemColors::Window;

			 if (tabPage_Sweep->Visible)
			 {
				 //Textboxes

				 if (!Sweep_Loop->Checked) Sweep_Loops->BackColor = System::Drawing::SystemColors::Control;
				 else if (SweepMode::Inputerror.Loops) Sweep_Loops->BackColor = System::Drawing::Color::Red;
				 else Sweep_Loops->BackColor = System::Drawing::SystemColors::Window;

				 if (!Sweep_Enable_V1->Checked)
				 {
					 Sweep_Initial_V1->BackColor = System::Drawing::SystemColors::Control;
					 Sweep_Step_V1->BackColor = System::Drawing::SystemColors::Control;
					 Sweep_Final_V1->BackColor = System::Drawing::SystemColors::Control;
				 }
				 else
				 {
					 if (SweepMode::Inputerror.Initial_V1) Sweep_Initial_V1->BackColor = System::Drawing::Color::Red;
					 else if (SweepMode::Inputwarning.Initial_V1) Sweep_Initial_V1->BackColor = System::Drawing::Color::Yellow;
					 else Sweep_Initial_V1->BackColor = System::Drawing::SystemColors::Window;

					 if (SweepMode::Inputerror.Step_V1) Sweep_Step_V1->BackColor = System::Drawing::Color::Red;
					 else Sweep_Step_V1->BackColor = System::Drawing::SystemColors::Window;

					 if (SweepMode::Inputerror.Final_V1) Sweep_Final_V1->BackColor = System::Drawing::Color::Red;
					 else if (SweepMode::Inputwarning.Final_V1) Sweep_Final_V1->BackColor = System::Drawing::Color::Yellow;
					 else Sweep_Final_V1->BackColor = System::Drawing::SystemColors::Window;
				 }
				
				 if (!Sweep_Enable_V2->Checked)
				 {
					 Sweep_Initial_V2->BackColor = System::Drawing::SystemColors::Control;
					 Sweep_Step_V2->BackColor = System::Drawing::SystemColors::Control;
					 Sweep_Final_V2->BackColor = System::Drawing::SystemColors::Control;
				 }
				 else
				 {
					 if (SweepMode::Inputerror.Initial_V2) Sweep_Initial_V2->BackColor = System::Drawing::Color::Red;
					 else if (SweepMode::Inputwarning.Initial_V2) Sweep_Initial_V2->BackColor = System::Drawing::Color::Yellow;
					 else Sweep_Initial_V2->BackColor = System::Drawing::SystemColors::Window;

					 if (SweepMode::Inputerror.Step_V2) Sweep_Step_V2->BackColor = System::Drawing::Color::Red;
					 else Sweep_Step_V2->BackColor = System::Drawing::SystemColors::Window;

					 if (SweepMode::Inputerror.Final_V2) Sweep_Final_V2->BackColor = System::Drawing::Color::Red;
					 else if (SweepMode::Inputwarning.Final_V2) Sweep_Final_V2->BackColor = System::Drawing::Color::Yellow;
					 else Sweep_Final_V2->BackColor = System::Drawing::SystemColors::Window;
				 }
				 		
				 if (!Sweep_Enable_V3->Checked)
				 {
					 Sweep_Initial_V3->BackColor = System::Drawing::SystemColors::Control;
					 Sweep_Step_V3->BackColor = System::Drawing::SystemColors::Control;
					 Sweep_Final_V3->BackColor = System::Drawing::SystemColors::Control;
				 }
				 else
				 {
					 if (SweepMode::Inputerror.Initial_V3) Sweep_Initial_V3->BackColor = System::Drawing::Color::Red;
					 else if (SweepMode::Inputwarning.Initial_V3) Sweep_Initial_V3->BackColor = System::Drawing::Color::Yellow;
					 else Sweep_Initial_V3->BackColor = System::Drawing::SystemColors::Window;

					 if (SweepMode::Inputerror.Step_V3) Sweep_Step_V3->BackColor = System::Drawing::Color::Red;
					 else Sweep_Step_V3->BackColor = System::Drawing::SystemColors::Window;

					 if (SweepMode::Inputerror.Final_V3) Sweep_Final_V3->BackColor = System::Drawing::Color::Red;
					 else if (SweepMode::Inputwarning.Final_V3) Sweep_Final_V3->BackColor = System::Drawing::Color::Yellow;
					 else Sweep_Final_V3->BackColor = System::Drawing::SystemColors::Window;
				 }
				 		

				 if (SweepMode::Inputerror.ResultSpectra) Sweep_ResultSpectra->BackColor = System::Drawing::Color::Red;
				 else Sweep_ResultSpectra->BackColor = System::Drawing::Color::LightSkyBlue;
				 Sweep_ResultSpectra->Text = SweepMode::UserInputData.OverallSpectra.ToString();
				 
				 //enable control elements
				 if (Sweep_Cycle->Checked)
				 {
					 Sweep_Loop->Enabled = true;
				 }
				 else
				 {
					 Sweep_Loop->Checked = false;
					 Sweep_Loop->Enabled = false;
				 }
				 Sweep_Loops->Enabled = Sweep_Loop->Checked;

				 if (Sweep_CalcFrom->Text == "Voltage 1") Sweep_Calculate->Enabled = !SweepMode::Inputerror.Step_V1;
				 else if (Sweep_CalcFrom->Text == "Voltage 2") Sweep_Calculate->Enabled = !SweepMode::Inputerror.Step_V2;
				 else if (Sweep_CalcFrom->Text == "Voltage 3") Sweep_Calculate->Enabled = !SweepMode::Inputerror.Step_V3;
				 else Sweep_Calculate->Enabled = false;

				 Sweep_StartPause->Enabled = (!SweepMode::Inputerror.sum_bit && !SweepMode::SweepRunning && 
												 VoltControl::CAN_connected && (TriggerIO->connected || !SweepMode::UserInputData.Sync)
												 && !VoltControl::ChanStatus_V1.set_IsTripExeeded && !VoltControl::ChanStatus_V2.set_IsTripExeeded
												 && !VoltControl::ChanStatus_V3.set_IsTripExeeded && !ManualMode::InputError.I_Limit_V1
												 && !ManualMode::InputError.I_Limit_V2 && !ManualMode::InputError.I_Limit_V3
												 && (SweepMode::UserInputData.Enable_V1 || SweepMode::UserInputData.Enable_V2 || SweepMode::UserInputData.Enable_V3));
				 Sweep_Cancel->Enabled = SweepMode::SweepRunning;

				 Sweep_Initial_V1->Enabled = Sweep_Enable_V1->Checked && SweepMode::UserInputData.ValsFromMask;
				 Sweep_Step_V1->Enabled = Sweep_Enable_V1->Checked && SweepMode::UserInputData.ValsFromMask;
				 Sweep_Final_V1->Enabled = Sweep_Enable_V1->Checked && SweepMode::UserInputData.ValsFromMask;

				 Sweep_Initial_V2->Enabled = Sweep_Enable_V2->Checked && SweepMode::UserInputData.ValsFromMask;
				 Sweep_Step_V2->Enabled = Sweep_Enable_V2->Checked && SweepMode::UserInputData.ValsFromMask;
				 Sweep_Final_V2->Enabled = Sweep_Enable_V2->Checked && SweepMode::UserInputData.ValsFromMask;

				 Sweep_Initial_V3->Enabled = Sweep_Enable_V3->Checked && SweepMode::UserInputData.ValsFromMask;
				 Sweep_Step_V3->Enabled = Sweep_Enable_V3->Checked && SweepMode::UserInputData.ValsFromMask;
				 Sweep_Final_V3->Enabled = Sweep_Enable_V3->Checked && SweepMode::UserInputData.ValsFromMask;

				 //Buttons
				 Sweep_FileOpen->Enabled = !SweepMode::SweepRunning;

				 //Labels
				 Sweep_StatusProgress->Text = SweepMode::StatusProgress;
				 Sweep_StatusProgress->ForeColor = SweepMode::StatusProgress_Color;

			 }
		
				
			 	
			testConnected->Checked = TriggerIO->connected;
			
}
#pragma endregion

#pragma region Buttons
//#############################################################
//
//		B U T T O N S
//
//#############################################################


private: System::Void button_Connect_CAN_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Actionlog->add_entry("Connecting to OPC Server");
			 VoltControl::Connect_CAN();	
			 if(VoltControl::CAN_connected) Actionlog->add_entry("Connection to OPC Server established");

			 bool ok;
			 
			 while (VoltControl::NominalV_V1 == 0)
			 {
				 VoltControl::NominalV_V1 = VoltControl::get_NominalV(VoltControl::Chan_V1, &ok);
				 VoltControl::NominalV_V2 = VoltControl::get_NominalV(VoltControl::Chan_V2, &ok);
				 VoltControl::NominalV_V3 = VoltControl::get_NominalV(VoltControl::Chan_V3, &ok);
				 Sleep(100);
			 }
			
			 //set min/max voltages
			 VoltControl::LowerLimits.V1 = -VoltControl::NominalV_V1;
			 VoltControl::UpperLimits.V1 = VoltControl::NominalV_V1;
			 VoltControl::LowerLimits.V2 = -VoltControl::NominalV_V2;
			 VoltControl::UpperLimits.V2 = VoltControl::NominalV_V2;
			 VoltControl::LowerLimits.V3 = -VoltControl::NominalV_V3;
			 VoltControl::UpperLimits.V3 = VoltControl::NominalV_V3;

			 //Overrwrite user defined maximum ramp, if NominalV < user input
			 if (VoltControl::NominalV_V1<VoltControl::max_Ramp) VoltControl::max_Ramp = VoltControl::NominalV_V1;
		 }

//***********************************
//         Manual Mode 
//***********************************

private: System::Void button_SetVoltage_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 System::Windows::Forms::DialogResult Result;

			 //Check for voltage warnings;
			 if (ManualMode::InputWarning.sum_bit)
			 {
				 Result = MessageBox::Show("Voltage over warning threshhold. Proceed?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
				 if (!(Result == System::Windows::Forms::DialogResult::Yes)) return;
			 }

			timer_Chart_update->Enabled=true;
						
			if(!ManualMode::InputError.sum_bit)
			{
				VoltControl::set_Ramp(ManualMode::UserInputData.Ramp);
				VoltControl::set_Current(VoltControl::Chan_V1,ManualMode::UserInputData.I_Limit_V1);
				VoltControl::set_Current(VoltControl::Chan_V2,ManualMode::UserInputData.I_Limit_V2);
				VoltControl::set_Current(VoltControl::Chan_V3,ManualMode::UserInputData.I_Limit_V3);
				Actionlog->add_entry("Set ramp to " +ManualMode::UserInputData.Ramp.ToString()+" %");
				Actionlog->add_entry("Set current trip V1 to " + ManualMode::UserInputData.I_Limit_V1.ToString() + " µA");
				Actionlog->add_entry("Set current trip V2 to " + ManualMode::UserInputData.I_Limit_V2.ToString() + " µA");
				Actionlog->add_entry("Set current trip V3 to " + ManualMode::UserInputData.I_Limit_V3.ToString() + " µA");

				//Restart creep compensation	
				bool creepCompensationOn = enable_CreepCompensation->Checked;
				ManualMode::CreepActive = false;
				if (creepCompensationOn)
				{
					ManualMode::CreepTime = 0.0;
					timer_creep_update->Enabled = true;
				}
				else
				{
					timer_creep_update->Enabled = false;
				}

				//Set voltages
				if (enable_set_V1->Checked && !VoltControl::ChanStatus_V1.set_IsTripExeeded)
				{
					if (creepCompensationOn)
					{
						ManualMode::CreepSetpointVoltage = ManualMode::CreepModelVoltage(ManualMode::UserInputData.Setpoint_V1, ManualMode::CreepAmplitude, ManualMode::CreepLambda, ManualMode::CreepTime);
						VoltControl::set_Voltage(VoltControl::Chan_V1, ManualMode::CreepSetpointVoltage);
					}
					else
					{
						VoltControl::set_Voltage(VoltControl::Chan_V1, ManualMode::UserInputData.Setpoint_V1);
					}

					VoltControl::set_ChanOn(VoltControl::Chan_V1, true);
					Actionlog->add_entry("Set Voltage 1 (Channel " + VoltControl::Chan_V1->ToString() + ") to " + ManualMode::UserInputData.Setpoint_V1.ToString()+" V");

				}
				if (enable_set_V2->Checked && !VoltControl::ChanStatus_V2.set_IsTripExeeded)
				{
					VoltControl::set_Voltage(VoltControl::Chan_V2, ManualMode::UserInputData.Setpoint_V2);					
					VoltControl::set_ChanOn(VoltControl::Chan_V2, true);
					Actionlog->add_entry("Set Voltage 2 (Channel " + VoltControl::Chan_V2->ToString() + ") to " + ManualMode::UserInputData.Setpoint_V2.ToString()+ " V");
				}
				if (enable_set_V3->Checked && !VoltControl::ChanStatus_V3.set_IsTripExeeded)
				{		
					VoltControl::set_Voltage(VoltControl::Chan_V3, ManualMode::UserInputData.Setpoint_V3);			
					VoltControl::set_ChanOn(VoltControl::Chan_V3, true);
					Actionlog->add_entry("Set Voltage 3 (Channel " + VoltControl::Chan_V3->ToString() + ") to " + ManualMode::UserInputData.Setpoint_V3.ToString() + " V");
				}
			}
		 }

private: System::Void button_AllOff_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 bool ok;
			 //timer_Chart_update->Enabled=false;
			 timer_creep_update->Enabled = false;

			 //VoltControl::set_Ramp(Global::StringToFloat(manual_val_ramp->Text,&ok));
			 VoltControl::set_ChanOn(VoltControl::Chan_V1, false);
			 VoltControl::set_ChanOn(VoltControl::Chan_V2, false);
			 VoltControl::set_ChanOn(VoltControl::Chan_V3, false);
			 Actionlog->add_entry("Set all Channels off");
	
		 }


private: System::Void button_manual_ClearErrors_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 VoltControl::set_Current(VoltControl::Chan_V1, SweepMode::UserInputData.I_Limit_V1);
			 VoltControl::set_Current(VoltControl::Chan_V2, SweepMode::UserInputData.I_Limit_V2);
			 VoltControl::set_Current(VoltControl::Chan_V3, SweepMode::UserInputData.I_Limit_V3);

			 Sleep(100);

			 VoltControl::Module_ClearError();
			 VoltControl::ChanStatus_V1.ack_IsTripExeeded=true;
			 VoltControl::ChanStatus_V2.ack_IsTripExeeded=true;
			 VoltControl::ChanStatus_V3.ack_IsTripExeeded=true;
		 }

private: System::Void Creep_apply_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool ok = false;
	ManualMode::CreepLambda = Global::StringToFloat(creep_lambda->Text, &ok);
	ManualMode::CreepAmplitude = Global::StringToFloat(creep_A->Text, &ok);
}

//***********************************
//         Sweep Mode
//***********************************

private: System::Void button_Connect_IOs_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			 BOOL ok;
			 Actionlog->add_entry("Connecting to C843 IOs");
			 //Query board number
			 if (!(TriggerIO->GetPCIList(ok)->Contains(SweepMode::BoardNumber.ToString())))
			 {
				 Status_IOs->Text = "Board " + SweepMode::BoardNumber.ToString() + " not found";
				 Status_IOs->ForeColor = System::Drawing::Color::Red;
				 Actionlog->add_entry("C834 Board " + SweepMode::BoardNumber.ToString() + " not found");
				 return;
			 }

			 //Connect to board
			 if (TriggerIO->Connect(SweepMode::BoardNumber))
			 {
				 Status_IOs->Text = "OK";
				 Status_IOs->ForeColor = System::Drawing::Color::DarkGreen;
				 Actionlog->add_entry("Connection to C843 IOs established");
			 }
			 else
			 {
				 Status_IOs->Text = "connecting failed";
				 Status_IOs->ForeColor = System::Drawing::Color::Red;
				 Actionlog->add_entry("Connection to C843 IOs failed ");
			 }
		}

private: System::Void Button_Connect_Freq_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (!freqCounter->Connected)
			{
				freqCounter->Connect(Global::Freq_COM);
				if (freqCounter->Connected) freqCounter->StartReading();
			}	
		}

private: System::Void Sweep_Calculate_Click(System::Object^  sender, System::EventArgs^  e)
		{
			 int source_num;
			 if (Sweep_CalcFrom->Text == "Voltage 1")
			 {
				 source_num = Math::Round((Math::Abs((SweepMode::UserInputData.Final_V1 - SweepMode::UserInputData.Initial_V1)) / SweepMode::UserInputData.Step_V1) + 0.4999);
				 if (SweepMode::UserInputData.Enable_V2) Sweep_Step_V2->Text = Math::Round(Math::Abs((SweepMode::UserInputData.Final_V2 - SweepMode::UserInputData.Initial_V2)) / source_num, 5).ToString();
				 if (SweepMode::UserInputData.Enable_V3) Sweep_Step_V3->Text = Math::Round(Math::Abs((SweepMode::UserInputData.Final_V3 - SweepMode::UserInputData.Initial_V3)) / source_num, 5).ToString();
			 }

			 if (Sweep_CalcFrom->Text == "Voltage 2")
			 {
				 source_num = Math::Round((Math::Abs((SweepMode::UserInputData.Final_V2 - SweepMode::UserInputData.Initial_V2) / SweepMode::UserInputData.Step_V2)) + 0.4999);
				 if (SweepMode::UserInputData.Enable_V1) Sweep_Step_V1->Text = Math::Round(Math::Abs((SweepMode::UserInputData.Final_V1 - SweepMode::UserInputData.Initial_V1)) / source_num, 5).ToString();
				 if (SweepMode::UserInputData.Enable_V3) Sweep_Step_V3->Text = Math::Round(Math::Abs((SweepMode::UserInputData.Final_V3 - SweepMode::UserInputData.Initial_V3)) / source_num, 5).ToString();
			 }

			 if (Sweep_CalcFrom->Text == "Voltage 3")
			 {
				 source_num = Math::Round((Math::Abs((SweepMode::UserInputData.Final_V3 - SweepMode::UserInputData.Initial_V3)) / SweepMode::UserInputData.Step_V3) + 0.4999);
				 if (SweepMode::UserInputData.Enable_V1) Sweep_Step_V1->Text = Math::Round(Math::Abs((SweepMode::UserInputData.Final_V1 - SweepMode::UserInputData.Initial_V1)) / source_num, 5).ToString();
				 if (SweepMode::UserInputData.Enable_V2) Sweep_Step_V2->Text = Math::Round(Math::Abs((SweepMode::UserInputData.Final_V2 - SweepMode::UserInputData.Initial_V2)) / source_num, 5).ToString();
			 }
			
		}

private: System::Void Sweep_StartPause_Click(System::Object^  sender, System::EventArgs^  e)
{
			 bool ok;
			 System::Windows::Forms::DialogResult Result;

			 //Copy UserInputData to Processing data
			 SweepMode::SweepData = SweepMode::UserInputData;

			 //Check if voltages are in inital range;
			 bool tmp_warning_init_range = false;
			 if (SweepMode::SweepData.ValsFromMask)
			 {
				 tmp_warning_init_range = ((SweepMode::SweepData.Enable_V1 && !Global::CheckRangeFloat(VoltControl::Act.V1, SweepMode::SweepData.Initial_V1 - 1, SweepMode::SweepData.Initial_V1 + 1)) ||
					 (SweepMode::SweepData.Enable_V2 && !Global::CheckRangeFloat(VoltControl::Act.V2, SweepMode::SweepData.Initial_V2 - 1, SweepMode::SweepData.Initial_V2 + 1)) ||
					 (SweepMode::SweepData.Enable_V3 && !Global::CheckRangeFloat(VoltControl::Act.V3, SweepMode::SweepData.Initial_V3 - 1, SweepMode::SweepData.Initial_V3 + 1)));
			 }
			 else if (SweepMode::SweepData.ValsFromFile)
			 {
				 tmp_warning_init_range = ((SweepMode::SweepData.Enable_V1 && !Global::CheckRangeFloat(VoltControl::Act.V1, SweepMode::Sweepfile_Values[0, 0] - 1, SweepMode::Sweepfile_Values[0, 0] + 1)) ||
					 (SweepMode::SweepData.Enable_V2 && !Global::CheckRangeFloat(VoltControl::Act.V2, SweepMode::Sweepfile_Values[0, 1] - 1, SweepMode::Sweepfile_Values[0, 1] + 1)) ||
					 (SweepMode::SweepData.Enable_V3 && !Global::CheckRangeFloat(VoltControl::Act.V3, SweepMode::Sweepfile_Values[0, 2] - 1, SweepMode::Sweepfile_Values[0, 2] + 1)));
			 }
		
			 if (tmp_warning_init_range)
			 {
				 Result = MessageBox::Show("Ramping all Voltages to initial values. Proceed?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
				 if (!(Result == System::Windows::Forms::DialogResult::Yes)) return;
			 }

			 //Check for voltage warnings;
			 if (SweepMode::Inputwarning.sum_bit)
			 {
				 Result = MessageBox::Show("Voltage over warning threshhold. Proceed?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
				 if (!(Result == System::Windows::Forms::DialogResult::Yes)) return;
			 }

			 sweep_estimated_time->Visible = false;
			 SweepMode::SweepRunning = true;

			 //Define Initial Ramp
			 VoltControl::set_Ramp(SweepMode::SweepData.Ramp_Initial);
			 //Set current limits
			 VoltControl::set_Current(VoltControl::Chan_V1, SweepMode::SweepData.I_Limit_V1);
			 VoltControl::set_Current(VoltControl::Chan_V2, SweepMode::SweepData.I_Limit_V2);
			 VoltControl::set_Current(VoltControl::Chan_V3, SweepMode::SweepData.I_Limit_V3);
			 //Switch Channels on
			 if (SweepMode::SweepData.Enable_V1) VoltControl::set_ChanOn(VoltControl::Chan_V1, &ok);
			 if (SweepMode::SweepData.Enable_V2) VoltControl::set_ChanOn(VoltControl::Chan_V2, &ok);
			 if (SweepMode::SweepData.Enable_V3) VoltControl::set_ChanOn(VoltControl::Chan_V3, &ok);

			 //Initialize and Start Data Recording
			 
			 timer_Chart_update->Enabled = false;

			 if (SweepMode::SweepData.Enable_V1)
			 {
				curr1->InitChart(manual_Chart_IV1);
				curr1->active = true;
			 }
			 if (SweepMode::SweepData.Enable_V2)
			 {
				 curr2->InitChart(manual_Chart_IV2);
				 curr2->active = true;
			 }
			 if (SweepMode::SweepData.Enable_V3)
			 {
				 curr3->InitChart(manual_Chart_IV3);
				 curr3->active = true;
			 }

			 //START MAIN LOOP;
			 if (!backgroundWorker_Sweep->IsBusy)
			 {
				 Actionlog->add_entry("Voltage Sweep started ");
				 backgroundWorker_Sweep->RunWorkerAsync();
			 }
			 

		}

private: System::Void Sweep_Cancel_Click(System::Object^  sender, System::EventArgs^  e)
		{
			 if (backgroundWorker_Sweep->IsBusy) backgroundWorker_Sweep->CancelAsync();
			 SweepMode::SweepRunning = false;
		}

private: System::Void Sweep_FileOpen_Click(System::Object^  sender, System::EventArgs^  e)
	{
			 String^ openpath;
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 openpath = openFileDialog1->FileName;
				 Sweep_FileName->Text = openpath;

				 //Read file
				 if (!SweepMode::Read_Sweepfile(openpath)) MessageBox::Show("Invalid file format.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
	}

//***********************************
//         Test Purposes
//***********************************

private: System::Void testGetPCI_Click(System::Object^  sender, System::EventArgs^  e)
		{
			 BOOL ok;
			 testPCIList->Text = TriggerIO->GetPCIList(ok);
			 testError->Text = TriggerIO->GetErrorCode();
		}

 private: System::Void testConnect_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			  BOOL ok;
			  TriggerIO->Connect(Convert::ToInt32(SweepMode::BoardNumber));
			  testID->Text = TriggerIO->GetID().ToString();
			 
			  if (TriggerIO->GetID() > -1)
			  {
				  testInputChannels->Text = TriggerIO->GetInputChannels(ok);
				  testOutputLines->Text = TriggerIO->GetOutputChannels(ok);
			  }
			  testError->Text = TriggerIO->GetErrorCode();
		 }

 private: System::Void testDisconnect_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			  TriggerIO->Disconnect();
		 }
private: System::Void testSetIO_Click(System::Object^  sender, System::EventArgs^  e)
		{
			 BOOL vals[1] = { testOutput->Checked };
			 testSuccess->Checked = TriggerIO->SetOutputs(SweepMode::OutputChannel,vals);
			 testError->Text = TriggerIO->GetErrorCode();
		}
private: System::Void testGetIO_Click(System::Object^  sender, System::EventArgs^  e)
		{
			 BOOL vals[1];
			 testSuccess->Checked = TriggerIO->GetInputs(SweepMode::InputChannel, vals);
			 testI0->Checked = vals[0];
			 testError->Text = TriggerIO->GetErrorCode();
		}
#pragma endregion
	
#pragma region BackgroundWorkers

//*******************************************
//     B A C K G R O U N D W O R K E R S
//*******************************************
private: System::Void backgroundWorker_Sweep_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e)
{
			 bool ok;
			 BOOL out_pos[1] = { 1 };
			 BOOL out_neg[1] = { 0 };
			 BOOL in[1] = { 0 };
			 int act_step;
			 int overall_steps=1;
			 bool reverse;

			 //****************  S W E E P    L O O P   ************************
			 if (!SweepMode::SweepData.Loop) SweepMode::SweepData.Loops = 0;

			 for (int i = 0; i <= SweepMode::SweepData.Loops; i++)
			 {
				 act_step = 0;
				 reverse = false;

				 while (act_step >= 0 && act_step <= SweepMode::SweepData.ResultSpectra)
				 {
					 float act_volt_V1;
					 float act_volt_V2;
					 float act_volt_V3;
					 int sign_V1;
					 int sign_V2;
					 int sign_V3;
					 TimeSpan timespan, timespan_single;

					 if (!(i > 0 && act_step == 0 && !reverse)) //Skip 0th step in further loops
					 {
						 //Estimate time
						 if (overall_steps == 2)
						 {
							 SweepMode::start_time = DateTime::Now; //set time startpoint
							 VoltControl::set_Ramp(SweepMode::SweepData.Ramp_Cycle);  //Define Ramp for further Steps
						 }
						 if (overall_steps >= 3)
						 {
							 timespan = (DateTime::Now - SweepMode::start_time);
							 timespan_single = timespan.FromTicks(timespan.Ticks / (overall_steps - 2));
							 SweepMode::estimated_time = timespan_single.FromTicks(timespan_single.Ticks*(SweepMode::SweepData.OverallSpectra-(overall_steps-2)));
						 }
						 

						 backgroundWorker_Sweep->ReportProgress(overall_steps);

						 //Ramp to value;
						 SweepMode::StatusProgress = "Ramping";
						 SweepMode::StatusProgress_Color = System::Drawing::Color::Black;

						 if (SweepMode::SweepData.Enable_V1)
						 {
							 if (SweepMode::SweepData.ValsFromMask)
							 {
								 sign_V1 = Math::Sign(SweepMode::SweepData.Final_V1 - SweepMode::SweepData.Initial_V1);
								 act_volt_V1 = SweepMode::SweepData.Initial_V1 + sign_V1*act_step*SweepMode::SweepData.Step_V1;
								 if (!reverse && sign_V1*(SweepMode::SweepData.Final_V1 - act_volt_V1) < 0) act_volt_V1 = SweepMode::SweepData.Final_V1;
							 }
							 else if (SweepMode::SweepData.ValsFromFile)
							 {
								 act_volt_V1 = SweepMode::Sweepfile_Values[act_step, 0];
							 }
						
							 do{
							 VoltControl::set_Voltage(VoltControl::Chan_V1, act_volt_V1);
							 Sleep(50);
							 } while (Math::Abs(act_volt_V1 - VoltControl::get_VoltSetpoint(VoltControl::Chan_V1, &ok))>0.1);

						 }
						 if (SweepMode::SweepData.Enable_V2)
						 {
							 if (SweepMode::SweepData.ValsFromMask)
							 {
								 sign_V2 = Math::Sign(SweepMode::SweepData.Final_V2 - SweepMode::SweepData.Initial_V2);
								 act_volt_V2 = SweepMode::SweepData.Initial_V2 + sign_V2*act_step*SweepMode::SweepData.Step_V2;
								 if (!reverse && sign_V2*(SweepMode::SweepData.Final_V2 - act_volt_V2) < 0) act_volt_V2 = SweepMode::SweepData.Final_V2;
							 }
							 else if (SweepMode::SweepData.ValsFromFile)
							 {
								 act_volt_V2 = SweepMode::Sweepfile_Values[act_step, 1];
							 }

							 do{
							 VoltControl::set_Voltage(VoltControl::Chan_V2, act_volt_V2);
							 Sleep(50);
							 } while (Math::Abs(act_volt_V2 - VoltControl::get_VoltSetpoint(VoltControl::Chan_V2, &ok))>0.1);
							 

						 }
						 if (SweepMode::SweepData.Enable_V3)
						 {
							 if (SweepMode::SweepData.ValsFromMask)
							 {
								 sign_V3 = Math::Sign(SweepMode::SweepData.Final_V3 - SweepMode::SweepData.Initial_V3);
								 act_volt_V3 = SweepMode::SweepData.Initial_V3 + sign_V3*act_step*SweepMode::SweepData.Step_V3;
								 if (!reverse && sign_V3*(SweepMode::SweepData.Final_V3 - act_volt_V3) < 0) act_volt_V3 = SweepMode::SweepData.Final_V3;
							 }
							 else if (SweepMode::SweepData.ValsFromFile)
							 {
								 act_volt_V3 = SweepMode::Sweepfile_Values[act_step, 2];
							 }

							 do
							 {
								 VoltControl::set_Voltage(VoltControl::Chan_V3, act_volt_V3);
								 Sleep(50);
							 } while (Math::Abs(act_volt_V3 - VoltControl::get_VoltSetpoint(VoltControl::Chan_V3, &ok))>0.1);
							 
						 }

						 //Wait for Voltage reached; 
						 while (true)
						 {
							 if ((!SweepMode::SweepData.Enable_V1 || (Global::CheckRangeFloat(VoltControl::Act.V1, act_volt_V1 - 0.2, act_volt_V1 + 0.2)&&!VoltControl::ChanStatus_V1.IsRamping)) &&
								 (!SweepMode::SweepData.Enable_V2 || (Global::CheckRangeFloat(VoltControl::Act.V2, act_volt_V2 - 0.2, act_volt_V2 + 0.2)&&!VoltControl::ChanStatus_V2.IsRamping)) &&
								 (!SweepMode::SweepData.Enable_V3 || (Global::CheckRangeFloat(VoltControl::Act.V3, act_volt_V3 - 0.2, act_volt_V3 + 0.2)&&!VoltControl::ChanStatus_V3.IsRamping)))
							 {
								 break;
							 }
							 _CancelPending
						 }

						 
						 //Delay Time
						 for (int i = 0; i <= SweepMode::SweepData.DelayTime; i++)
						 {
							 Sleep(1);
							 _CancelPending
						 }
						
						 //TRIGGER
						 if (SweepMode::SweepData.Sync)
						 {
							 SweepMode::StatusProgress = "Triggering";
							 TriggerIO->SetOutputs(SweepMode::OutputChannel, out_pos);
							 Sleep(SweepMode::Output_Time);
							 TriggerIO->SetOutputs(SweepMode::OutputChannel, out_neg);
							 //Wait for trigger in
							 SweepMode::StatusProgress = "Waiting for Trigger";
							  while (true)
							 {
								 TriggerIO->GetInputs(SweepMode::InputChannel, in);
								 if (in[0] == 1) break;
								 _CancelPending
							 }
							 while (true)
							 {
								 TriggerIO->GetInputs(SweepMode::InputChannel, in);
								 if (in[0] == 0) break;
								 _CancelPending
							 }
							 
						 }

						 //Record Data Point
						 SweepMode::StatusProgress = "Recording Data";
						 if (curr1->active) curr1->AddData(VoltControl::Act.V1, VoltControl::Act.I1);
						 if (curr2->active) curr2->AddData(VoltControl::Act.V2, VoltControl::Act.I2);
						 if (curr3->active) curr3->AddData(VoltControl::Act.V3, VoltControl::Act.I3);

						 overall_steps++;
					 }

					
					 //Incremet or decrement actual Step (if cycle activated)
					 if (!reverse)
					 {
						 if (act_step == SweepMode::SweepData.ResultSpectra && SweepMode::SweepData.Cycle) reverse = true;
						 else act_step++;
					 }

					 if (reverse)
					 {
						 act_step--;
					 }
					 
				 }

			 }
}
private: System::Void backgroundWorker_Sweep_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e)
		{
			 
			 Sweep_StatusStep->Text = e->ProgressPercentage + "/" + SweepMode::SweepData.OverallSpectra;
			 Sweep_Progress->Value = (Math::Round((e->ProgressPercentage / Convert::ToDouble(SweepMode::SweepData.OverallSpectra)) * 100));
			 if (e->ProgressPercentage >= 3)
			 {
				 sweep_estimated_time->Text = "Estimated time: " + String::Format("{0:mm\\:ss}", SweepMode::estimated_time);
				 sweep_estimated_time->Visible = true;
			 }
			 Actionlog->add_entry("Sweep Mode step  "+e->ProgressPercentage + "/" + SweepMode::SweepData.OverallSpectra);

			 if (curr1->active) manual_Chart_IV1->updateViewPort(true, false);
			 if (curr2->active) manual_Chart_IV2->updateViewPort(true, false);
			 if (curr3->active) manual_Chart_IV3->updateViewPort(true, false);
			
		}
private: System::Void backgroundWorker_Sweep_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e)
		{
			 Sweep_StatusStep->Text = "0/0";
			 Sweep_Progress->Value = 0;
			 sweep_estimated_time->Visible = false;
			 SweepMode::SweepRunning = false;
		
			 if (e->Cancelled)
			 {
				 if (VoltControl::ChanStatus_V1.set_IsTripExeeded) SweepMode::StatusProgress = "Current Trip Exeeded V1";
				 else if (VoltControl::ChanStatus_V2.set_IsTripExeeded) SweepMode::StatusProgress = "Current Trip Exeeded V2";
				 else if (VoltControl::ChanStatus_V3.set_IsTripExeeded) SweepMode::StatusProgress = "Current Trip Exeeded V3";
				 else
				 {
					 bool ok;
					 SweepMode::StatusProgress = "Canceled";
					 if (SweepMode::SweepData.Enable_V1) VoltControl::set_Voltage(VoltControl::Chan_V1, VoltControl::get_Voltage(VoltControl::Chan_V1, &ok));
					 if (SweepMode::SweepData.Enable_V2) VoltControl::set_Voltage(VoltControl::Chan_V2, VoltControl::get_Voltage(VoltControl::Chan_V2, &ok));
					 if (SweepMode::SweepData.Enable_V3) VoltControl::set_Voltage(VoltControl::Chan_V3, VoltControl::get_Voltage(VoltControl::Chan_V3, &ok));
				 }
				 Actionlog->add_entry("Voltage Sweep canceled");
				 SweepMode::StatusProgress_Color = System::Drawing::Color::Red;
			 }
			 else
			 {
				 SweepMode::StatusProgress = "Done";
				 SweepMode::StatusProgress_Color = System::Drawing::Color::Black;
				 Actionlog->add_entry("Voltage Sweep done");
				 if (curr1->active) manual_Chart_IV1->updateViewPort(true, false);
				 if (curr2->active) manual_Chart_IV2->updateViewPort(true, false);
				 if (curr3->active) manual_Chart_IV3->updateViewPort(true, false);
			 }

			 curr1->active = false;
			 curr2->active = false;
			 curr3->active = false;
		}

#pragma endregion


#pragma region Timers
//#############################################################
//
//		T I M E R S
//
//#############################################################
 private: System::Void timer_OPC_update_Tick(System::Object^  sender, System::EventArgs^  e)
		 {
			bool ok;
			float auxval;


			//************ V O L T A G E   D A T A   O P C ************************************
		
			//Break if CAN Status not ok
			if(VoltControl::CAN_connected)
			{
				VoltControl::Check_Status_CAN();
				if (!(VoltControl::Status_CAN == "OK") && (VoltControl::Status_CAN == "BUSLIGHT"))
				{
					Actionlog->add_entry("CAN Connection interrupted");
					return;
				}
			}
			else
			{
				return;
			}

						
			//Get module data
			VoltControl::get_ModuleStatus(VoltControl::ModuleStatus);

			//Get channel data
			VoltControl::get_ChanStatus(VoltControl::Chan_V1, VoltControl::ChanStatus_V1);
			VoltControl::get_ChanStatus(VoltControl::Chan_V2, VoltControl::ChanStatus_V2);
			VoltControl::get_ChanStatus(VoltControl::Chan_V3, VoltControl::ChanStatus_V3);
			
			VoltControl::Act.V1 = Math::Round(VoltControl::get_Voltage(VoltControl::Chan_V1, &ok), _RoundDigits);
			VoltControl::Act.V2 = Math::Round(VoltControl::get_Voltage(VoltControl::Chan_V2, &ok), _RoundDigits);
			VoltControl::Act.V3 = Math::Round(VoltControl::get_Voltage(VoltControl::Chan_V3, &ok), _RoundDigits);
			VoltControl::Act_Ramp=VoltControl::get_Ramp(&ok);
			VoltControl::Act.I1 = Math::Round(VoltControl::get_Current(VoltControl::Chan_V1, &ok), _RoundDigits);
			VoltControl::Act.I2 = Math::Round(VoltControl::get_Current(VoltControl::Chan_V2, &ok), _RoundDigits);
			VoltControl::Act.I3 = Math::Round(VoltControl::get_Current(VoltControl::Chan_V3, &ok), _RoundDigits);
			VoltControl::Act.setpoint_V1 = Math::Round(VoltControl::get_VoltSetpoint(VoltControl::Chan_V1, &ok), _RoundDigits);
			VoltControl::Act.setpoint_V2 = Math::Round(VoltControl::get_VoltSetpoint(VoltControl::Chan_V2, &ok), _RoundDigits);
			VoltControl::Act.setpoint_V3 = Math::Round(VoltControl::get_VoltSetpoint(VoltControl::Chan_V3, &ok), _RoundDigits);
			
					
			//Check flancs
			Global::CheckPosFlanc(VoltControl::ChanStatus_V1.set_IsTripExeeded, VoltControl::FlancPos_ChanStatus_V1.set_IsTripExeeded, VoltControl::AUX_FlancPos_ChanStatus_V1.set_IsTripExeeded);
			Global::CheckPosFlanc(VoltControl::ChanStatus_V2.set_IsTripExeeded, VoltControl::FlancPos_ChanStatus_V2.set_IsTripExeeded, VoltControl::AUX_FlancPos_ChanStatus_V2.set_IsTripExeeded);
			Global::CheckPosFlanc(VoltControl::ChanStatus_V3.set_IsTripExeeded, VoltControl::FlancPos_ChanStatus_V3.set_IsTripExeeded, VoltControl::AUX_FlancPos_ChanStatus_V3.set_IsTripExeeded);

			// Check for Current Trip --> Ramp down
			if ((VoltControl::FlancPos_ChanStatus_V1.set_IsTripExeeded) && (VoltControl::ChanStatus_V1.IsOn))
			{
				VoltControl::set_ChanOn(VoltControl::Chan_V1, false);
				VoltControl::set_ChanOn(VoltControl::Chan_V2, false);
				VoltControl::set_ChanOn(VoltControl::Chan_V3, false);
				VoltControl::set_Voltage(VoltControl::Chan_V1, 0);
				VoltControl::set_Voltage(VoltControl::Chan_V2, 0);
				VoltControl::set_Voltage(VoltControl::Chan_V3, 0);
				Sleep(100);
				if (backgroundWorker_Sweep->IsBusy) backgroundWorker_Sweep->CancelAsync();
				Actionlog->add_entry("Current Trip Voltage 1 (Channel "+VoltControl::Chan_V1->ToString()+") exeeded");
			}
			if ((VoltControl::FlancPos_ChanStatus_V2.set_IsTripExeeded) && (VoltControl::ChanStatus_V2.IsOn))
			{
				VoltControl::set_ChanOn(VoltControl::Chan_V1, false);
				VoltControl::set_ChanOn(VoltControl::Chan_V2, false);
				VoltControl::set_ChanOn(VoltControl::Chan_V3, false);
				VoltControl::set_Voltage(VoltControl::Chan_V1, 0);
				VoltControl::set_Voltage(VoltControl::Chan_V2, 0);
				VoltControl::set_Voltage(VoltControl::Chan_V3, 0);
				Sleep(100);
				if (backgroundWorker_Sweep->IsBusy) backgroundWorker_Sweep->CancelAsync();
				Actionlog->add_entry("Current Trip Voltage 2 (Channel " + VoltControl::Chan_V2->ToString() + ") exeeded");
			}
			if ((VoltControl::FlancPos_ChanStatus_V3.set_IsTripExeeded) && (VoltControl::ChanStatus_V3.IsOn))
			{
				VoltControl::set_ChanOn(VoltControl::Chan_V1, false);
				VoltControl::set_ChanOn(VoltControl::Chan_V2, false);
				VoltControl::set_ChanOn(VoltControl::Chan_V3, false);
				VoltControl::set_Voltage(VoltControl::Chan_V1, 0);
				VoltControl::set_Voltage(VoltControl::Chan_V2, 0);
				VoltControl::set_Voltage(VoltControl::Chan_V3, 0);
				Sleep(100);
				if (backgroundWorker_Sweep->IsBusy) backgroundWorker_Sweep->CancelAsync();
				Actionlog->add_entry("Current Trip Voltage 3 (Channel " + VoltControl::Chan_V3->ToString() + ") exeeded");
			}
			

			//************ T R I G G E R   I N P U T ************************************

			
		


			//************    C H A R T   D A T A  ********************************************
			testsignal->Inc_X();

			curr_time1->AddData(VoltControl::Act.I1);
			curr_time2->AddData(VoltControl::Act.I2);
			curr_time3->AddData(VoltControl::Act.I3);
			/*curr_time1->AddData(testsignal->getSawTooth(0.001, 1000));
			curr_time2->AddData(testsignal->getSawTooth(0.001, 1000));
			curr_time3->AddData(testsignal->getSawTooth(0.001, 1000));*/

			manual_Chart_It1->updateViewPort(true,false);
			manual_Chart_It2->updateViewPort(true,false);
			manual_Chart_It3->updateViewPort(true,false);
		
		 }


private: System::Void timer_Chart_update_Tick(System::Object^  sender, System::EventArgs^  e)
		 {
			
			 /*if(curr1->active) curr1->AddData(testsignal->GetX(),testsignal->getSawTooth(0.001,1000));
			 if(curr2->active) curr2->AddData(testsignal->GetX(),testsignal->getSawTooth(0.001,1000));
			 if(curr3->active) curr3->AddData(testsignal->GetX(),testsignal->getSawTooth(0.001,1000));*/

			 if(curr1->active) curr1->AddData(VoltControl::Act.V1,VoltControl::Act.I1);
			 if(curr2->active) curr2->AddData(VoltControl::Act.V2,VoltControl::Act.I2);
			 if(curr3->active) curr3->AddData(VoltControl::Act.V3,VoltControl::Act.I3);
						 
			 manual_Chart_IV1->updateViewPort(true,false);
			 manual_Chart_IV2->updateViewPort(true,false);
			 manual_Chart_IV3->updateViewPort(true,false);
		 }

private: System::Void manual_Chart_It1_ViewPortChanged(System::Object^  sender, ChartDirector::WinViewPortEventArgs^  e)
		 {
			 curr_time1->ShowChart(manual_Chart_It1);
			 manual_Chart_It1->updateDisplay(true);
		 }

private: System::Void manual_Chart_It2_ViewPortChanged(System::Object^  sender, ChartDirector::WinViewPortEventArgs^  e)
		 {
			 curr_time2->ShowChart(manual_Chart_It2);
			 manual_Chart_It2->updateDisplay(true);
		 }

private: System::Void manual_Chart_It3_ViewPortChanged(System::Object^  sender, ChartDirector::WinViewPortEventArgs^  e)
		 {
			 curr_time3->ShowChart(manual_Chart_It3);
			 manual_Chart_It3->updateDisplay(true);
		 }
private: System::Void manual_Chart_IV1_ViewPortChanged(System::Object^  sender, ChartDirector::WinViewPortEventArgs^  e)
		 {
			 curr1->ShowChart(manual_Chart_IV1);
			 manual_Chart_IV1->updateDisplay(true);
		 }
		 
private: System::Void manual_Chart_IV2_ViewPortChanged(System::Object^  sender, ChartDirector::WinViewPortEventArgs^  e)
		 {
			 curr2->ShowChart(manual_Chart_IV2);
			 manual_Chart_IV2->updateDisplay(true);
		 }

private: System::Void manual_Chart_IV3_ViewPortChanged(System::Object^  sender, ChartDirector::WinViewPortEventArgs^  e)
		 {
			 curr3->ShowChart(manual_Chart_IV3);
			 manual_Chart_IV3->updateDisplay(true);
		 }


		 
private: System::Void trackBar_ChartUpdateRate_ValueChanged(System::Object^  sender, System::EventArgs^  e)
		{
			Act_ChartUpdateRate->Text=trackBar_ChartUpdateRate->Value.ToString();
			timer_Chart_update->Interval=trackBar_ChartUpdateRate->Value;
		}

private: System::Void timer_form_update_Tick(System::Object^  sender, System::EventArgs^  e)
		 {
			 get_form_data();
			 check_form_data();
			 set_form_data();

			 //Watchdog
			 if (watch->run)
			 {
				 watch->Tick();
				 if (watch->time_exeeded && testthread->IsAlive)
				 {
					 VoltControl::Status_CAN = "Timeout. Restart required";
					 VoltControl::Status_CAN_Color = System::Drawing::Color::Red;
					 watch->run = false;
					 try{
						 testthread->Abort();
					 }
					 catch (Threading::ThreadAbortException^ e)
					 {
						 testthread->ResetAbort();
					 }
				 }
			 }
		 }

private: System::Void Timer_creep_update_Tick(System::Object^ sender, System::EventArgs^ e)
	{

		if (Global::CheckRangeFloat(VoltControl::Act.V1, ManualMode::CreepSetpointVoltage - 0.2, ManualMode::CreepSetpointVoltage + 0.2))
		{
			ManualMode::CreepActive = true;
		}

		if(ManualMode::CreepActive) ManualMode::CreepTime += timer_creep_update->Interval / 1000.0;

		if (enable_set_V1->Checked && !VoltControl::ChanStatus_V1.set_IsTripExeeded)
		{
			VoltControl::set_Voltage(VoltControl::Chan_V1, ManualMode::CreepModelVoltage(ManualMode::UserInputData.Setpoint_V1, ManualMode::CreepAmplitude,ManualMode::CreepLambda, ManualMode::CreepTime));
		}

	}

#pragma endregion

#pragma region Context Menues
//#############################################################
//
//		C O N T E X T   M E N U E S
//
//#############################################################
		 
//***************** C H A R T S ***********************

private: System::Void context_Chart_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e)
		 {
			//Get source controll name
			System::Windows::Forms::ContextMenuStrip^ cms = (System::Windows::Forms::ContextMenuStrip^) sender;
			String^ SourceControlName=cms->SourceControl->Name;

			//Data points available?
			if(SourceControlName=="manual_Chart_IV1") toolStrip_Chart_SavaData->Enabled=Convert::ToBoolean(curr1->GetDataSize());
			if(SourceControlName=="manual_Chart_IV2") toolStrip_Chart_SavaData->Enabled=Convert::ToBoolean(curr2->GetDataSize());
			if(SourceControlName=="manual_Chart_IV3") toolStrip_Chart_SavaData->Enabled=Convert::ToBoolean(curr3->GetDataSize());

			//Start/Stop enable
			if((SourceControlName=="manual_Chart_IV1")||
				(SourceControlName=="manual_Chart_IV2")||
				(SourceControlName=="manual_Chart_IV3"))
			{
				toolStrip_Chart_Start->Enabled=true;
				toolStrip_Chart_Stop->Enabled=true;
				toolStrip_Chart_Clear->Enabled=true;
				toolStrip_Chart_StartAll->Enabled=true;
				toolStrip_Chart_StopAll->Enabled=true;
			}
			else
			{
				toolStrip_Chart_Start->Enabled=false;
				toolStrip_Chart_Stop->Enabled=false;
				toolStrip_Chart_Clear->Enabled=false;
				toolStrip_Chart_StartAll->Enabled=false;
				toolStrip_Chart_StopAll->Enabled=false;
			}

		 }

//Item Save Data
private: System::Void toolStrip_Chart_SavaData_Click(System::Object^  sender, System::EventArgs^  e)
		{
			
			//Get source controll name
			System::Windows::Forms::ToolStripMenuItem^ tsItem = (System::Windows::Forms::ToolStripMenuItem^) sender;
			System::Windows::Forms::ContextMenuStrip^ cms = (System::Windows::Forms::ContextMenuStrip^) tsItem->Owner;
			String^ SourceControlName=cms->SourceControl->Name;
			
			String^ savepath;
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				savepath=saveFileDialog1->FileName;
				if (SourceControlName=="manual_Chart_IV1")
				{
					curr1->SaveDataToFile(savepath,true,_RoundDigits);
					Actionlog->add_entry("Current over Voltage Diagramm1 saved to: "+savepath);
				}
				if (SourceControlName=="manual_Chart_IV2")
				{
					curr2->SaveDataToFile(savepath, true, _RoundDigits);
					Actionlog->add_entry("Current over Voltage Diagramm2 saved to: "+savepath);
				}
				if (SourceControlName=="manual_Chart_IV3")
				{
					curr3->SaveDataToFile(savepath, true, _RoundDigits);
					Actionlog->add_entry("Current over Voltage Diagramm3 saved to: "+savepath);
				}
			}
			

		}

private: System::Void toolStrip_Chart_Start_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			//Get source controll name
			System::Windows::Forms::ToolStripMenuItem^ tsItem = (System::Windows::Forms::ToolStripMenuItem^) sender;
			System::Windows::Forms::ContextMenuStrip^ cms = (System::Windows::Forms::ContextMenuStrip^) tsItem->Owner;
			String^ SourceControlName=cms->SourceControl->Name;

			if(SourceControlName=="manual_Chart_IV1") curr1->active=true;
			if(SourceControlName=="manual_Chart_IV2") curr2->active=true;
			if(SourceControlName=="manual_Chart_IV3") curr3->active=true;
		 }
private: System::Void toolStrip_Chart_Stop_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Get source controll name
			System::Windows::Forms::ToolStripMenuItem^ tsItem = (System::Windows::Forms::ToolStripMenuItem^) sender;
			System::Windows::Forms::ContextMenuStrip^ cms = (System::Windows::Forms::ContextMenuStrip^) tsItem->Owner;
			String^ SourceControlName=cms->SourceControl->Name;

			if(SourceControlName=="manual_Chart_IV1") curr1->active=false;
			if(SourceControlName=="manual_Chart_IV2") curr2->active=false;
			if(SourceControlName=="manual_Chart_IV3") curr3->active=false;
		 }

private: System::Void toolStrip_Chart_StartAll_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			//Get source controll name
			System::Windows::Forms::ToolStripMenuItem^ tsItem = (System::Windows::Forms::ToolStripMenuItem^) sender;
			System::Windows::Forms::ContextMenuStrip^ cms = (System::Windows::Forms::ContextMenuStrip^) tsItem->Owner;
			String^ SourceControlName=cms->SourceControl->Name;

			 if((SourceControlName=="manual_Chart_IV1")||
				(SourceControlName=="manual_Chart_IV2")||
				(SourceControlName=="manual_Chart_IV3"))
			{
				curr1->active=true;
				curr2->active=true;
				curr3->active=true;
			}
		
		 }
private: System::Void toolStrip_Chart_StopAll_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Get source controll name
			System::Windows::Forms::ToolStripMenuItem^ tsItem = (System::Windows::Forms::ToolStripMenuItem^) sender;
			System::Windows::Forms::ContextMenuStrip^ cms = (System::Windows::Forms::ContextMenuStrip^) tsItem->Owner;
			String^ SourceControlName=cms->SourceControl->Name;

			 if((SourceControlName=="manual_Chart_IV1")||
				(SourceControlName=="manual_Chart_IV2")||
				(SourceControlName=="manual_Chart_IV3"))
			{
				curr1->active=false;
				curr2->active=false;
				curr3->active=false;
			}
		 }


private: System::Void toolStrip_Chart_Clear_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Get source controll name
			System::Windows::Forms::ToolStripMenuItem^ tsItem = (System::Windows::Forms::ToolStripMenuItem^) sender;
			System::Windows::Forms::ContextMenuStrip^ cms = (System::Windows::Forms::ContextMenuStrip^) tsItem->Owner;
			String^ SourceControlName=cms->SourceControl->Name;

			 if(SourceControlName=="manual_Chart_IV1")
			 { 
				 curr1->active=false;
				 curr1->InitChart(manual_Chart_IV1);
			 }
			  if(SourceControlName=="manual_Chart_IV2")
			 { 
				 curr2->active=false;
				 curr2->InitChart(manual_Chart_IV2);
			 }
			   if(SourceControlName=="manual_Chart_IV3")
			 { 
				 curr3->active=false;
				 curr3->InitChart(manual_Chart_IV3);
			 }

		 }

#pragma endregion


#pragma region Start Task
//#############################################################
//
//		F O R M   L O A D / C L O S E    T A S K
//
//#############################################################

private: 
	System::Void Form1_Load_1(System::Object^  sender, System::EventArgs^  e)
	{
		//Read INI file
		Global::Read_Init("init.ini");

		//Initialization
		Actionlog = gcnew Logfile(Global::act_log_name);

		curr_time1 = gcnew Chart_It(manual_Chart_It1->Width, manual_Chart_It1->Height, 300);
		curr_time2 = gcnew Chart_It(manual_Chart_It2->Width, manual_Chart_It1->Height, 300);
		curr_time3 = gcnew Chart_It(manual_Chart_It3->Width, manual_Chart_It1->Height, 300);
		curr_time1->InitChart(manual_Chart_It1);
		curr_time2->InitChart(manual_Chart_It2);
		curr_time3->InitChart(manual_Chart_It3);

		curr1 = gcnew Chart_IV(manual_Chart_IV1->Width, manual_Chart_IV1->Height);
		curr2 = gcnew Chart_IV(manual_Chart_IV2->Width, manual_Chart_IV1->Height);
		curr3 = gcnew Chart_IV(manual_Chart_IV3->Width, manual_Chart_IV1->Height);
		curr1->InitChart(manual_Chart_IV1);
		curr2->InitChart(manual_Chart_IV2);
		curr3->InitChart(manual_Chart_IV3);

		testsignal = gcnew TestSignal(timer_OPC_update->Interval);
				
		TriggerIO = gcnew PICardControl();

		init_form_data();
		
		
		//Enable Timer for OPC Data update
		timer_OPC_update->Interval=Global::OPC_update_rate;
		timer_OPC_update->Enabled=true;
		//Enable Timer for Chart Data update
		timer_Chart_update->Interval=trackBar_ChartUpdateRate->Value;
		timer_Chart_update->Enabled=false;
		timer_form_update->Enabled=true;

		testthread = gcnew Threading::Thread(gcnew Threading::ThreadStart(VoltControl::Connect_CAN));
		testthread->IsBackground = true;
		watch = gcnew WatchDog(5);


		//Test RS232
		freqCounter = gcnew HPFreqSerial();
		freqCounter->StartReading();
								
	}
#pragma endregion	

	

private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
		 {
			 if (VoltControl::CAN_connected && 
				 (!Global::CheckRangeFloat(VoltControl::Act.V1, -0.2, 0.2) ||
				 !Global::CheckRangeFloat(VoltControl::Act.V2, -0.2, 0.2) ||
				 !Global::CheckRangeFloat(VoltControl::Act.V3, -0.2, 0.2)))
			 {
				 System::Windows::Forms::DialogResult Result;
				 Result = MessageBox::Show("Ramp all voltages down to zero?", "Voltages applied", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 if (Result == System::Windows::Forms::DialogResult::Yes)
				 {
					 VoltControl::set_Voltage(VoltControl::Chan_V1, 0);
					 VoltControl::set_Voltage(VoltControl::Chan_V2, 0);
					 VoltControl::set_Voltage(VoltControl::Chan_V3, 0);
					 VoltControl::set_ChanOn(VoltControl::Chan_V1, false);
					 VoltControl::set_ChanOn(VoltControl::Chan_V2, false);
					 VoltControl::set_ChanOn(VoltControl::Chan_V3, false);
				 }
			 }

			 VoltControl::Quit_OPC();
			 delete Actionlog;
			 delete curr_time1, curr_time2, curr_time3, curr1, curr2, curr3;
		 }
		 

};
}
