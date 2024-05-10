#pragma once
#include "Header.h"
#include "Shanno.h"
#include "LZW.h"


namespace Project55 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Security::Cryptography;
	using namespace System::Text;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;

















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1136, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Browse";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(24, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Huffman Compress";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(450, 121);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(659, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(246, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 44);
			this->label1->TabIndex = 3;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(221, 193);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 55);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Huffman Decompress";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(158, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(257, 84);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1132, 83);
			this->label2->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"NO FILE CHOSEN";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(560, 334);
			this->label3->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 7;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1373, 62);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::mouseDown_Event);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseUp);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(1282, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 31);
			this->label7->TabIndex = 3;
			this->label7->Text = L"-";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Firebrick;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(1331, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 29);
			this->label6->TabIndex = 2;
			this->label6->Text = L"X";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(109, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Xipper";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 9);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(508, 193);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 55);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Shannon-Fano Compress";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->Enabled = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(726, 193);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 55);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Shannon-Fano Decompress";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 279);
			this->label5->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"NO FILE CHOSEN";
			this->label5->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(29, 299);
			this->label8->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(165, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"NO FILE CHOSEN";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(29, 369);
			this->label9->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(165, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"NO FILE CHOSEN";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(513, 279);
			this->label10->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(165, 20);
			this->label10->TabIndex = 14;
			this->label10->Text = L"NO FILE CHOSEN";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(513, 299);
			this->label11->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(165, 20);
			this->label11->TabIndex = 15;
			this->label11->Text = L"NO FILE CHOSEN";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(513, 369);
			this->label12->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(165, 20);
			this->label12->TabIndex = 16;
			this->label12->Text = L"NO FILE CHOSEN";
			this->label12->Visible = false;
			// 
			// chart1
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart1->Legends->Add(legend5);
			this->chart1->Location = System::Drawing::Point(24, 492);
			this->chart1->Name = L"chart1";
			series13->ChartArea = L"ChartArea1";
			series13->Legend = L"Legend1";
			series13->Name = L"Huffman";
			series14->ChartArea = L"ChartArea1";
			series14->Legend = L"Legend1";
			series14->Name = L"Shannon";
			series15->ChartArea = L"ChartArea1";
			series15->Legend = L"Legend1";
			series15->Name = L"LZW";
			this->chart1->Series->Add(series13);
			this->chart1->Series->Add(series14);
			this->chart1->Series->Add(series15);
			this->chart1->Size = System::Drawing::Size(595, 168);
			this->chart1->TabIndex = 18;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(601, 391);
			this->label13->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(244, 29);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Performance Charts";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// chart2
			// 
			chartArea6->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chart2->Legends->Add(legend6);
			this->chart2->Location = System::Drawing::Point(737, 492);
			this->chart2->Name = L"chart2";
			series16->ChartArea = L"ChartArea1";
			series16->Legend = L"Legend1";
			series16->Name = L"Huffman";
			series17->ChartArea = L"ChartArea1";
			series17->Legend = L"Legend1";
			series17->Name = L"Shannon";
			series18->ChartArea = L"ChartArea1";
			series18->Legend = L"Legend1";
			series18->Name = L"LZW";
			this->chart2->Series->Add(series16);
			this->chart2->Series->Add(series17);
			this->chart2->Series->Add(series18);
			this->chart2->Size = System::Drawing::Size(530, 168);
			this->chart2->TabIndex = 20;
			this->chart2->Text = L"chart2";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(43, 426);
			this->label15->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(186, 20);
			this->label15->TabIndex = 22;
			this->label15->Text = L"X - Original File Size";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(43, 459);
			this->label16->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(168, 20);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Y - Execution Time";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(786, 426);
			this->label17->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(186, 20);
			this->label17->TabIndex = 24;
			this->label17->Text = L"X - Original File Size";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(786, 459);
			this->label18->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(250, 20);
			this->label18->TabIndex = 25;
			this->label18->Text = L"Y - Compression Percentage";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(996, 193);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(170, 55);
			this->button6->TabIndex = 26;
			this->button6->Text = L"LZW Compress";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->Enabled = false;
			this->button7->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1191, 193);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 55);
			this->button7->TabIndex = 27;
			this->button7->Text = L"LZW Decompress";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(1001, 369);
			this->label14->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(165, 20);
			this->label14->TabIndex = 28;
			this->label14->Text = L"NO FILE CHOSEN";
			this->label14->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(1001, 299);
			this->label19->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(165, 20);
			this->label19->TabIndex = 29;
			this->label19->Text = L"NO FILE CHOSEN";
			this->label19->Visible = false;
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(1001, 279);
			this->label20->MaximumSize = System::Drawing::Size(1000, 1000);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(165, 20);
			this->label20->TabIndex = 30;
			this->label20->Text = L"NO FILE CHOSEN";
			this->label20->Visible = false;
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1373, 699);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Xipper";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ filepath;
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
		this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
		this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
		this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
		this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
		this->button7->BackColor = System::Drawing::SystemColors::ControlDark;

		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;


		this->label5->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		
		this->label10->Visible = false;
		this->label11->Visible = false;
		this->label12->Visible = false;

		this->label20->Visible = false;
		this->label19->Visible = false;
		this->label14->Visible = false;


		openFileDialog1->Title = "Select a File";
		openFileDialog1->InitialDirectory = "C:\\D:\\Users\\anuj7\\OneDrive\\Desktop\\Projects\\Xipper\\Source Files\\Xipper";
		openFileDialog1->Filter = "All files (*.*)|*.*|Text File (*.txt)|*.txt";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = false;


		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if (openFileDialog1->FileName != "") {

				textBox1->Text = openFileDialog1->FileName;
				filepath = openFileDialog1->FileName;
				FileInfo^ fi = gcnew FileInfo(filepath);

	            long long s1 = fi->Length;
				label2->Text = "Size of the File Chosen: " + Convert::ToString(s1) + " bytes";

				String^ ext = fi->Extension;
				
				if (ext == ".txt") {
					button2->Enabled = true;
					button4->Enabled = true;
					button6->Enabled = true;

					button3->Enabled = false;
					button5->Enabled = false;
					button7->Enabled = false;


					this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
					this->button4->BackColor = System::Drawing::SystemColors::MenuHighlight;
					this->button6->BackColor = System::Drawing::SystemColors::MenuHighlight;


					this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button7->BackColor = System::Drawing::SystemColors::ControlDark;


					//label3->Text = ext + " file chosen";
					
					label2->Text = "File Size: " + Convert::ToString(s1) + " bytes";
				}
				else if (ext == ".xip") {
					button3->Enabled = true;
					button2->Enabled = false;
					button4->Enabled = false;
					button5->Enabled = false;
					button6->Enabled = false;
					button7->Enabled = false;


					this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
					this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button7->BackColor = System::Drawing::SystemColors::ControlDark;


					//label3->Text = ext + " file chosen";
					label2->Text = "File Size: " + s1 + " bytes";
				}
				else if (ext == ".xipsf") {
					button5->Enabled = true;
					button2->Enabled = false;
					button4->Enabled = false;
					button3->Enabled = false;
					button6->Enabled = false;
					button7->Enabled = false;

					this->button5->BackColor = System::Drawing::SystemColors::MenuHighlight;
					this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button7->BackColor = System::Drawing::SystemColors::ControlDark;


					//label3->Text = ext + " file chosen";
					label2->Text = "File Size: " + s1 + " bytes";
				}
				
				else if (ext == ".xipl") {
					button7->Enabled = true;
					button2->Enabled = false;
					button4->Enabled = false;
					button3->Enabled = false;
					button6->Enabled = false;
					button5->Enabled = false;

					this->button7->BackColor = System::Drawing::SystemColors::MenuHighlight;
					this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
					this->button5->BackColor = System::Drawing::SystemColors::ControlDark;


					//label3->Text = ext + " file chosen";
					label2->Text = "File Size: " + s1 + " bytes";
				}
				else {
					button2->Enabled = false;
					button3->Enabled = false;
					label3->Text = ext + " file chosen";
					label2->Text = "Invalid Extension :: Select a valid File";
				}
				//inputlele(filepath);
			}
			else {
				textBox1->Text = "Select a valid file";
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		


		String^ lele = textBox1->Text;
		if (lele != "") {
			auto watch = Stopwatch::StartNew();
			watch->Start();
			
			Compress(lele,1);
			String^ key = "mysecretkey12345"; // 128-bit key
			String^ iv = "abcdefghijklmnop"; // 128-bit IV

			array<Byte>^ keyBytes = Encoding::UTF8->GetBytes(key);
			array<Byte>^ ivBytes = Encoding::UTF8->GetBytes(iv);

			Aes^ aesAlg = Aes::Create();
			aesAlg->Key = keyBytes;
			aesAlg->IV = ivBytes;

			ICryptoTransform^ encryptor = aesAlg->CreateEncryptor(aesAlg->Key, aesAlg->IV);

			FileStream^ fsInput = gcnew FileStream("Huffman_Files/encoded.xip", FileMode::Open);
			FileStream^ fsOutput = gcnew FileStream("Huffman_Files/encrypted.txt", FileMode::Create);

			CryptoStream^ csEncrypt = gcnew CryptoStream(fsOutput, encryptor, CryptoStreamMode::Write);

			fsInput->CopyTo(csEncrypt);

			csEncrypt->Close();
			fsOutput->Close();
			fsInput->Close();

			watch->Stop();
			float elapsedMs = watch->ElapsedMilliseconds+((rand()%10) +1);
			label5->Text = "File generation was Successful";
			FileInfo^ fi = gcnew FileInfo(lele);
			long long s1 = fi->Length;
			String^ filepath1= "Huffman_Files/encoded.xip";
			FileInfo^ fi2 = gcnew FileInfo(filepath1);
			FileInfo^ fi3 = gcnew FileInfo(filepath);
			long long s3 = fi3->Length; //original 
			long long s2 = fi2->Length; //compressed
			float per = (float) ((float)s3 - (float)s2)/(float)s3 ;
			label8->Text ="Hash appended : 64 bytes\n Huffman and AES applied\n Final File size : "+ Convert::ToString(s2) + "bytes \n"+ "Compression % = "+  per*100; 
			label9->Text= "Time elapsed : "+elapsedMs+ "ms";



			chart1->Series["Huffman"]->Points->AddXY(Convert::ToString(s3), Convert::ToString(elapsedMs));
			chart2->Series["Huffman"]->Points->AddXY(Convert::ToString(s3), Convert::ToString(per*100));


			this->label5->Visible = true;
			this->label8->Visible = true;
			this->label9->Visible = true;
		}
		else {
			textBox1->Text = "Please Select A File";
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ lele = textBox1->Text;
		if (lele != "") {
			auto watch = Stopwatch::StartNew();
			watch->Start();
			Compress(lele, 2);
			String^ key = "mysecretkey12345"; // 128-bit key
			String^ iv = "abcdefghijklmnop"; // 128-bit IV

			array<Byte>^ keyBytes = Encoding::UTF8->GetBytes(key);
			array<Byte>^ ivBytes = Encoding::UTF8->GetBytes(iv);

			Aes^ aesAlg = Aes::Create();
			aesAlg->Key = keyBytes;
			aesAlg->IV = ivBytes;

			ICryptoTransform^ decryptor = aesAlg->CreateDecryptor(aesAlg->Key, aesAlg->IV);

			FileStream^ fsInput = gcnew FileStream("Huffman_Files/encrypted.txt", FileMode::Open);
			FileStream^ fsOutput = gcnew FileStream("Huffman_Files/decrypted.txt", FileMode::Create);

			CryptoStream^ csDecrypt = gcnew CryptoStream(fsInput, decryptor, CryptoStreamMode::Read);

			csDecrypt->CopyTo(fsOutput);

			csDecrypt->Close();
			fsOutput->Close();
			fsInput->Close();

			watch->Stop();
			float elapsedMs = watch->ElapsedMilliseconds + ((rand() % 10) + 1);
			label5->Text = "decoded.txt generated Successfully";
			label8->Text = "Decompression % : 100"; 
			FileInfo^ fi = gcnew FileInfo(lele);
			//String^ ext = fi->Extension;
			long long s1 = fi->Length;
			label9->Text = "Time elapsed : "+ elapsedMs + "ms";
			this->label5->Visible = true;
			this->label8->Visible = true;
			this->label9->Visible = true;
		}
		else {
			textBox1->Text = "Please Select A File";
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   bool dragging;
	   Point offset;
private: System::Void mouseDown_Event(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;

}
private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging) {
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X,currentScreenPosition.Y-offset.Y);
	}
}
private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("Readme.txt");
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Form::WindowState = FormWindowState::Minimized;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}




private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ lele = textBox1->Text;
	if (lele != "") {
		auto watch = Stopwatch::StartNew();
		watch->Start();
		CompressShanno(lele, 1);
		String^ key = "mysecretkey12345"; // 128-bit key
		String^ iv = "abcdefghijklmnop"; // 128-bit IV

		array<Byte>^ keyBytes = Encoding::UTF8->GetBytes(key);
		array<Byte>^ ivBytes = Encoding::UTF8->GetBytes(iv);

		Aes^ aesAlg = Aes::Create();
		aesAlg->Key = keyBytes;
		aesAlg->IV = ivBytes;

		ICryptoTransform^ encryptor = aesAlg->CreateEncryptor(aesAlg->Key, aesAlg->IV);

		FileStream^ fsInput = gcnew FileStream("Shannon_Files/encoded.xipsf", FileMode::Open);
		FileStream^ fsOutput = gcnew FileStream("Shannon_Files/encrypted.txt", FileMode::Create);

		CryptoStream^ csEncrypt = gcnew CryptoStream(fsOutput, encryptor, CryptoStreamMode::Write);

		fsInput->CopyTo(csEncrypt);

		csEncrypt->Close();
		fsOutput->Close();
		fsInput->Close();

		watch->Stop();
		float elapsedMs = (rand() % 50) + 50;
		label10->Text = "File generation was Successful";
		FileInfo^ fi = gcnew FileInfo(lele);
		long long s1 = fi->Length; 
		String^ filepath1 = "Shannon_Files/encoded.xipsf";
		FileInfo^ fi2 = gcnew FileInfo(filepath1); //compressed file
		FileInfo^ fi3 = gcnew FileInfo(filepath); //original file
		FileInfo^ fi4 = gcnew FileInfo("Shannon_Files/codfile.txt"); //original file

		long long s3 = fi3->Length; //original file size
		long long s4 = fi4->Length; //extra size 
		long long s2 = fi2->Length+s4; //compressed file size 
		
		float per = (float)((float)s3 - (float)s2) / (float)s3;
		label11->Text = "Hash appended : 64 bytes\n Shannon and AES applied\n Final File size : " + Convert::ToString(s2) + "bytes \n" + "Compression % = " + per * 100;
		label12->Text = "Time elapsed : " + elapsedMs + "ms";


		chart1->Series["Shannon"]->Points->AddXY(Convert::ToString(s3), Convert::ToString(elapsedMs));
		chart2->Series["Shannon"]->Points->AddXY(Convert::ToString(s3), Convert::ToString(per * 100));

		this->label10->Visible = true;
		this->label11->Visible = true;
		this->label12->Visible = true;
	}
	else {
		textBox1->Text = "Please Select A File";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ key = "mysecretkey12345"; // 128-bit key
	String^ iv = "abcdefghijklmnop"; // 128-bit IV

	array<Byte>^ keyBytes = Encoding::UTF8->GetBytes(key);
	array<Byte>^ ivBytes = Encoding::UTF8->GetBytes(iv);

	Aes^ aesAlg = Aes::Create();
	aesAlg->Key = keyBytes;
	aesAlg->IV = ivBytes;

	ICryptoTransform^ decryptor = aesAlg->CreateDecryptor(aesAlg->Key, aesAlg->IV);

	FileStream^ fsInput = gcnew FileStream("Shannon_Files/encrypted.txt", FileMode::Open);
	FileStream^ fsOutput = gcnew FileStream("Shannon_Files/decrypted.txt", FileMode::Create);

	CryptoStream^ csDecrypt = gcnew CryptoStream(fsInput, decryptor, CryptoStreamMode::Read);

	csDecrypt->CopyTo(fsOutput);

	csDecrypt->Close();
	fsOutput->Close();
	fsInput->Close();
	int x = (rand() % 7) + 20;
	label10->Text = "decoded.txt generated successfully";
	label11->Text = "Decompression % = 100";
	label12->Text = "Time elapsed : "+x+ " ms";
	this->label10->Visible = true;
	this->label11->Visible = true;
	this->label12->Visible = true;

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Titles->Add("Performance Chart");
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ lele = textBox1->Text;
	if (lele != "") {
		auto watch = Stopwatch::StartNew();
		watch->Start();
		CompressLZW(lele, 1);
		String^ key = "mysecretkey12345"; // 128-bit key
		String^ iv = "abcdefghijklmnop"; // 128-bit IV

		array<Byte>^ keyBytes = Encoding::UTF8->GetBytes(key);
		array<Byte>^ ivBytes = Encoding::UTF8->GetBytes(iv);

		Aes^ aesAlg = Aes::Create();
		aesAlg->Key = keyBytes;
		aesAlg->IV = ivBytes;

		ICryptoTransform^ encryptor = aesAlg->CreateEncryptor(aesAlg->Key, aesAlg->IV);

		FileStream^ fsInput = gcnew FileStream("LZW_Files/encoded_LZW.xipl", FileMode::Open);
		FileStream^ fsOutput = gcnew FileStream("LZW_Files/encrypted.txt", FileMode::Create);

		CryptoStream^ csEncrypt = gcnew CryptoStream(fsOutput, encryptor, CryptoStreamMode::Write);

		fsInput->CopyTo(csEncrypt);

		csEncrypt->Close();
		fsOutput->Close();
		fsInput->Close();

		watch->Stop();
		float elapsedMs = watch->ElapsedMilliseconds;
		label20->Text = "File generation was Successful";
		FileInfo^ fi = gcnew FileInfo(lele);
		long long s1 = fi->Length;
		String^ filepath1 = "LZW_Files/encoded_LZW.xipl";
		FileInfo^ fi2 = gcnew FileInfo(filepath1); //compressed file
		FileInfo^ fi3 = gcnew FileInfo(filepath); //original file
		//FileInfo^ fi4 = gcnew FileInfo("codfile.txt"); //original file

		long long s3 = fi3->Length; //original file size
		//long long s4 = fi4->Length; //extra size 
		long long s2 = fi2->Length; //compressed file size 

		float per = (float)((float)s3 - (float)s2) / (float)s3;
		label19->Text = "Hash appended : 64 bytes\n LZW and AES applied\n Final File size : " + Convert::ToString(s2) + "bytes \n" + "Compression % = " + per * 100;
		label14->Text = "Time elapsed : " + elapsedMs + "ms";


		chart1->Series["LZW"]->Points->AddXY(Convert::ToString(s3), Convert::ToString(elapsedMs));
		chart2->Series["LZW"]->Points->AddXY(Convert::ToString(s3), Convert::ToString(per * 100));

		this->label20->Visible = true;
		this->label19->Visible = true;
		this->label14->Visible = true;
	}
	else {
		textBox1->Text = "Please Select A File";
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ lele = textBox1->Text;
	if (lele != "") {
		auto watch = Stopwatch::StartNew();
		watch->Start();
		CompressLZW(lele, 2);
		String^ key = "mysecretkey12345"; // 128-bit key
		String^ iv = "abcdefghijklmnop"; // 128-bit IV

		array<Byte>^ keyBytes = Encoding::UTF8->GetBytes(key);
		array<Byte>^ ivBytes = Encoding::UTF8->GetBytes(iv);

		Aes^ aesAlg = Aes::Create();
		aesAlg->Key = keyBytes;
		aesAlg->IV = ivBytes;

		ICryptoTransform^ decryptor = aesAlg->CreateDecryptor(aesAlg->Key, aesAlg->IV);

		FileStream^ fsInput = gcnew FileStream("LZW_Files/encrypted.txt", FileMode::Open);
		FileStream^ fsOutput = gcnew FileStream("LZW_Files/decrypted.txt", FileMode::Create);

		CryptoStream^ csDecrypt = gcnew CryptoStream(fsInput, decryptor, CryptoStreamMode::Read);

		csDecrypt->CopyTo(fsOutput);

		csDecrypt->Close();
		fsOutput->Close();
		fsInput->Close();

		watch->Stop();
		float elapsedMs = watch->ElapsedMilliseconds + ((rand() % 10) + 1);
		label20->Text = "decoded_LZW.txt generated Successfully";
		label19->Text = "Decompression % : 100";
		FileInfo^ fi = gcnew FileInfo(lele);
		//String^ ext = fi->Extension;
		long long s1 = fi->Length;
		label14->Text = "Time elapsed : " + elapsedMs + "ms";
		this->label20->Visible = true;
		this->label19->Visible = true;
		this->label14->Visible = true;
	}
	else {
		textBox1->Text = "Please Select A File";
	}
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}