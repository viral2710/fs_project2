#pragma once
#include"header.h"
#include"update.h"
#include<string.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	using namespace System::IO;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	btree b;
	student s,s2;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int flags=1;
	private: System::Windows::Forms::SaveFileDialog^ savefd;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListView^ display;

	private: System::Windows::Forms::ColumnHeader^ displayusn;
	private: System::Windows::Forms::ColumnHeader^ displayname;
	private: System::Windows::Forms::ColumnHeader^ displaymarks;
	private: System::Windows::Forms::ColumnHeader^ dispalyattendance;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ sdisplay;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;





	public:

	public:
		String^ filename = "";
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
	private: System::Windows::Forms::TextBox^ usn;
	private: System::Windows::Forms::Button^ insert;
	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ updateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addTreeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contentDisplayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ heToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ marks;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ attendance;

	private: System::Windows::Forms::TextBox^ susn;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::OpenFileDialog^ openFD;

	private: System::Windows::Forms::Button^ button1;






	private:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->usn = (gcnew System::Windows::Forms::TextBox());
			this->insert = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addTreeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contentDisplayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->heToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->marks = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->attendance = (gcnew System::Windows::Forms::TextBox());
			this->susn = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->openFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->savefd = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->display = (gcnew System::Windows::Forms::ListView());
			this->displayusn = (gcnew System::Windows::Forms::ColumnHeader());
			this->displayname = (gcnew System::Windows::Forms::ColumnHeader());
			this->displaymarks = (gcnew System::Windows::Forms::ColumnHeader());
			this->dispalyattendance = (gcnew System::Windows::Forms::ColumnHeader());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->sdisplay = (gcnew System::Windows::Forms::ListBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// usn
			// 
			this->usn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usn->Location = System::Drawing::Point(146, 63);
			this->usn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->usn->Name = L"usn";
			this->usn->Size = System::Drawing::Size(205, 26);
			this->usn->TabIndex = 0;
			// 
			// insert
			// 
			this->insert->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insert->Location = System::Drawing::Point(39, 319);
			this->insert->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(288, 39);
			this->insert->TabIndex = 1;
			this->insert->Text = L"Insert";
			this->insert->UseVisualStyleBackColor = true;
			this->insert->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->viewToolStripMenuItem, this->heToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(1382, 25);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 19);
			this->fileToolStripMenuItem->Text = L"file";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->newToolStripMenuItem->Text = L"new";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->openToolStripMenuItem->Text = L"open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->saveToolStripMenuItem->Text = L"save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->saveAsToolStripMenuItem->Text = L"save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->exitToolStripMenuItem->Text = L"exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->updateToolStripMenuItem,
					this->deleteToolStripMenuItem, this->addTreeToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 19);
			this->editToolStripMenuItem->Text = L"edit";
			// 
			// updateToolStripMenuItem
			// 
			this->updateToolStripMenuItem->Name = L"updateToolStripMenuItem";
			this->updateToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->updateToolStripMenuItem->Text = L"update ";
			this->updateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::updateToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->deleteToolStripMenuItem->Text = L"delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem_Click);
			// 
			// addTreeToolStripMenuItem
			// 
			this->addTreeToolStripMenuItem->Name = L"addTreeToolStripMenuItem";
			this->addTreeToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->addTreeToolStripMenuItem->Text = L"add tree";
			this->addTreeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addTreeToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->contentDisplayToolStripMenuItem });
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(43, 19);
			this->viewToolStripMenuItem->Text = L"view";
			// 
			// contentDisplayToolStripMenuItem
			// 
			this->contentDisplayToolStripMenuItem->Name = L"contentDisplayToolStripMenuItem";
			this->contentDisplayToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->contentDisplayToolStripMenuItem->Text = L"content display";
			this->contentDisplayToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::contentDisplayToolStripMenuItem_Click);
			// 
			// heToolStripMenuItem
			// 
			this->heToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->heToolStripMenuItem->Name = L"heToolStripMenuItem";
			this->heToolStripMenuItem->Size = System::Drawing::Size(42, 19);
			this->heToolStripMenuItem->Text = L"help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(105, 22);
			this->aboutToolStripMenuItem->Text = L"about";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 67);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"USN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 114);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Name";
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(147, 110);
			this->name->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(204, 26);
			this->name->TabIndex = 6;
			// 
			// marks
			// 
			this->marks->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->marks->Location = System::Drawing::Point(148, 156);
			this->marks->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->marks->Name = L"marks";
			this->marks->Size = System::Drawing::Size(204, 26);
			this->marks->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 161);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 19);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Marks";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(33, 208);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 19);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Attendance";
			// 
			// attendance
			// 
			this->attendance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->attendance->Location = System::Drawing::Point(147, 203);
			this->attendance->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->attendance->Name = L"attendance";
			this->attendance->Size = System::Drawing::Size(205, 26);
			this->attendance->TabIndex = 11;
			// 
			// susn
			// 
			this->susn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->susn->Location = System::Drawing::Point(122, 395);
			this->susn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->susn->Name = L"susn";
			this->susn->Size = System::Drawing::Size(204, 26);
			this->susn->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(36, 362);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(177, 19);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Enter the USN to be search";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(36, 399);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 19);
			this->label6->TabIndex = 14;
			this->label6->Text = L"USN";
			// 
			// openFD
			// 
			this->openFD->FileName = L"openFileDialog";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(39, 441);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(292, 39);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::search);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 270);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 19);
			this->label8->TabIndex = 18;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::White;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->ForeColor = System::Drawing::Color::Red;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"*for update and delete write the value ", L"above and select the option in edit menu" });
			this->listBox1->Location = System::Drawing::Point(32, 257);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(298, 38);
			this->listBox1->TabIndex = 19;
			// 
			// display
			// 
			this->display->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->displayusn, this->displayname,
					this->displaymarks, this->dispalyattendance
			});
			this->display->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display->HideSelection = false;
			this->display->Location = System::Drawing::Point(363, 39);
			this->display->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(998, 317);
			this->display->TabIndex = 20;
			this->display->UseCompatibleStateImageBehavior = false;
			this->display->View = System::Windows::Forms::View::Details;
			// 
			// displayusn
			// 
			this->displayusn->Text = L"USN";
			this->displayusn->Width = 200;
			// 
			// displayname
			// 
			this->displayname->Text = L"Name";
			this->displayname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->displayname->Width = 400;
			// 
			// displaymarks
			// 
			this->displaymarks->Text = L"Marks";
			this->displaymarks->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->displaymarks->Width = 200;
			// 
			// dispalyattendance
			// 
			this->dispalyattendance->Text = L"Attendance";
			this->dispalyattendance->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->dispalyattendance->Width = 200;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(38, 542);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 14);
			this->label7->TabIndex = 23;
			// 
			// sdisplay
			// 
			this->sdisplay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sdisplay->FormattingEnabled = true;
			this->sdisplay->ItemHeight = 19;
			this->sdisplay->Location = System::Drawing::Point(366, 390);
			this->sdisplay->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->sdisplay->Name = L"sdisplay";
			this->sdisplay->Size = System::Drawing::Size(994, 137);
			this->sdisplay->TabIndex = 24;
			this->sdisplay->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::sdisplay_SelectedIndexChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1382, 588);
			this->Controls->Add(this->sdisplay);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->display);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->susn);
			this->Controls->Add(this->attendance);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->marks);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->insert);
			this->Controls->Add(this->usn);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximumSize = System::Drawing::Size(1398, 627);
			this->MinimumSize = System::Drawing::Size(1398, 627);
			this->Name = L"MyForm";
			this->Text = L"Student db";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (usn->Text==""|| name->Text == "" || marks->Text == "" || attendance->Text == "")
		{
			MessageBox::Show("Enter Value Please.", "Error");
		}
		else
		{
			msclr::interop::marshal_context con;
			s.usn= con.marshal_as< std::string >(usn->Text);
			s.name= con.marshal_as<std::string>(name->Text);
			s.marks= con.marshal_as<std::string>(marks->Text);
			s.attendance= con.marshal_as<std::string>(attendance->Text);
			b.insert(s);
			if (b.ds != 0) {
				label7->Text = gcnew String(b.st[0].c_str());
				usn->Text = ""; name->Text = ""; marks->Text = ""; attendance->Text = "";
				return;
			}
			flags = 0;
			usn->Text = ""; name->Text = ""; marks->Text =""; attendance->Text = "";
		}
	}
	private: System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Close();
}


	
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFD->Filter = "rft files (*.rft)|*.rft";
	openFD->FileName = "";
	openFD->ShowDialog();
	if (openFD->FileName == "")
		return;
	filename = openFD->FileName;
	this->Text = filename;
	msclr::interop::marshal_context con;
	string s= con.marshal_as<std::string>(filename);
	cout << s << endl;
	b = btree();
	if (b.head == NULL) {
		cout << "new";
	}
	for (int i = 0; i < 1000; i++) {
		b.st[i] = "";
	}
	b.ds = 0;
	StreamReader^ r = File::OpenText(filename);
	int x = 0;
	String^ line;
	while ((line = r->ReadLine()) != nullptr) {
		b.st[x++] = con.marshal_as<std::string>(line);
	}
	cout << x << endl;
	b.ds = x;
	b.read();
	r->Close();
}
private: System::Void contentDisplayToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b.head == NULL)
	{
		MessageBox::Show("NO Value Inserted", "Error");
		return;
	}
	display->Items->Clear();
	for (int i = 0; i < 1000; i++) {
		b.st[i] = "";
	}
	b.ds = 0;
	b.display();

	for (int i = 0; i < b.ds; i++) {
		String^ s = gcnew String((b.sd[i].usn).c_str());
		ListViewItem^ dis=gcnew ListViewItem(s);
		dis->SubItems->Add(gcnew String((b.sd[i].name).c_str()));
		dis->SubItems->Add(gcnew String((b.sd[i].marks).c_str()));
		dis->SubItems->Add(gcnew String((b.sd[i].attendance).c_str()));
		display->Items->Add(dis);
		
	}
	label7->Text = "";
}

private: System::Void search(System::Object^ sender, System::EventArgs^ e) {
	sdisplay->Items->Clear();
	label7->Text = "";
	for (int i = 0; i < 1000; i++) {
		b.st[i] = "";
	}
	b.ds = 0;
	if (susn->Text == "")
	{
		MessageBox::Show("Enter Value Please.", "Error");
	}
	else
	{
		msclr::interop::marshal_context con;
		s.usn = con.marshal_as<std::string>(susn->Text);
		cout << s.usn << endl;
		s.name = "";
		s.marks = "";
		s.attendance = "";
		b.search(s);
		if(b.flag==0) {
				label7->Text = gcnew String(b.st[0].c_str());
				return;
		}
		for (int i = 0; i < b.ds; i++) {
			String^ s = "The result for search is :-";
			sdisplay->Items->Add(s);
			s="\t\tUSN:-"+gcnew String((b.sd[i].usn).c_str());
			sdisplay->Items->Add(s);
			s = "\t\tName:-" + gcnew String((b.sd[i].name).c_str());
			sdisplay->Items->Add(s);
			s = "\t\tMarks:-" + gcnew String((b.sd[i].marks).c_str());
			sdisplay->Items->Add(s);
			s = "\t\tAttendance:-" + gcnew String((b.sd[i].attendance).c_str());
			sdisplay->Items->Add(s);

		}
		b.ds = 0;
		susn->Text = "";
	}
}
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		b = btree();
		s = student();
		filename = "";
		flags = 0;
	}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (flags != 1) {
		if (filename == "") {
			savefd->FileName = "*.rft";
			savefd->ShowDialog();
			if (savefd->FileName == "")
				return;
			filename = savefd->FileName;
			this->Text = filename;
			StreamWriter^ outp = File::CreateText(filename);
			b.write();
			for (int i = 0; i < b.ds; i++) {
				String^ stud = gcnew String(b.st[i].c_str());
				cout << b.st[i];
				outp->WriteLine(stud);
			}
			flags = 1;
			outp->Close();
		}
		else {
			StreamWriter^ out = File::CreateText(filename);
			b.write();
			for (int i = 0; i < b.ds; i++) {
				String^ stud = gcnew String(b.st[i].c_str());
				cout << b.st[i];
				out->WriteLine(stud);
			}
			out->Close();
			flags = 1;
		}
	}
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	savefd->FileName = "*.rft";
	savefd->ShowDialog();
	if (savefd->FileName == "")
		return;
	filename = savefd->FileName;
	this->Text = filename;
	StreamWriter^ out = File::CreateText(filename);
	b.write();
	for (int i = 0; i < b.ds; i++) {
		String^ stud = gcnew String(b.st[i].c_str());
		out->WriteLine(stud);
	}
	out->Close();
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (flags != 1) {
		System::Windows::Forms::DialogResult r;
		r = MessageBox::Show("Do you really want to close the program without saving?", "project2", MessageBoxButtons::YesNoCancel);
		if (r == System::Windows::Forms::DialogResult::Yes) {
			
		}
		else if (r == System::Windows::Forms::DialogResult::No) {
			if (filename == "") {
				savefd->FileName = "*.rft";
				savefd->ShowDialog();
				if (savefd->FileName == "")
					return;
				filename = savefd->FileName;
				this->Text = filename;
				StreamWriter^ outp = File::CreateText(filename);
				b.write();
				for (int i = 0; i < b.ds; i++) {
					String^ stud = gcnew String(b.st[i].c_str());
					cout << b.st[i];
					outp->WriteLine(stud);
				}
				outp->Close();
				flags = 1;
			}
			else {
				StreamWriter^ out = File::CreateText(filename);
				b.write();
				for (int i = 0; i < b.ds; i++) {
					String^ stud = gcnew String(b.st[i].c_str());
					cout << b.st[i];
					out->WriteLine(stud);
				}
				out->Close();
				flags = 1;
			}
		}
		else {
			e->Cancel = true;
		}
	}

}
private: System::Void addTreeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFD->Filter = "rft files (*.rft)|*.rft";
	openFD->FileName = "";
	openFD->ShowDialog();
	if (openFD->FileName == "")
		return;
	String^ filename1 = openFD->FileName;
	msclr::interop::marshal_context con;
	string s = con.marshal_as<std::string>(filename1);
	cout << s << endl;
	for (int i = 0; i < 1000; i++) {
		b.st[i] = "";
	}
	StreamReader^ r = File::OpenText(filename1);
	int x = 0;
	String^ line;
	while ((line = r->ReadLine()) != nullptr) {
		b.st[x++] = con.marshal_as<std::string>(line);
	}
	b.ds = x;
	b.read();
	r->Close();
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult r;
	r = MessageBox::Show("Made by viral @copyrigth", "project2", MessageBoxButtons::OK);
	
}
private: System::Void updateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usn->Text == "" || name->Text == "" || marks->Text == "" || attendance->Text == "")
	{
		MessageBox::Show("Enter Value Please.", "Error");
	}
	else
	{
		msclr::interop::marshal_context con;
		s.usn = con.marshal_as< std::string >(usn->Text);
		s.name = con.marshal_as<std::string>(name->Text);
		s.marks = con.marshal_as<std::string>(marks->Text);
		s.attendance = con.marshal_as<std::string>(attendance->Text);
		usn->Text = ""; name->Text = ""; marks->Text = ""; attendance->Text = "";
		Project2::MyForm1 f;
		f.ShowDialog();
		StreamReader^ r = File::OpenText("project.txt");
		s2.usn = con.marshal_as< std::string >(r->ReadLine());
		b = b.update(s2, s);
		if (b.ds != 0) {
			label7->Text = gcnew String(b.st[0].c_str());
			return;
		}
		r->Close();
		flags = 0;
	}
}
private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usn->Text == "" || name->Text == "" || marks->Text == "" || attendance->Text == "")
	{
		MessageBox::Show("Enter Value Please.", "Error");
	}
	else
	{
		msclr::interop::marshal_context con;
		s.usn = con.marshal_as< std::string >(usn->Text);
		s.name = con.marshal_as<std::string>(name->Text);
		s.marks = con.marshal_as<std::string>(marks->Text);
		s.attendance = con.marshal_as<std::string>(attendance->Text);
		b=(b.del(s));
		cout << b.ds << endl << b.st[0] << endl;
		if (b.ds != 0) {
			label7->Text = gcnew String(b.st[0].c_str());
			return;
		}
		flags = 0;
		usn->Text = ""; name->Text = ""; marks->Text = ""; attendance->Text = "";
	}
}


private: System::Void sdisplay_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
