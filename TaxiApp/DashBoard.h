#pragma once
#include "UserDetails.h"
#include "UserRecords.h"
#include "UserVaccine.h"
#include "UserQR.h"
#include "ReportBug.h"

#include <fstream>
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>

//#include "Login.h"

namespace TaxiApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for DashBoard
	/// </summary>
	public ref class DashBoard : public System::Windows::Forms::Form
	{
	public:
		DashBoard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DashBoard(String^Email)
		{
			InitializeComponent();
			lbEmailBuff->Text = Email;
		}
		/*
		DashBoard(String^ Username)
		{
			InitializeComponent();
			label1->Text = Username;
		}
		*/

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnRecordsTest;
	private: System::Windows::Forms::Button^ btnVaccine;
	private: System::Windows::Forms::Button^ btnQRCode;
	private: System::Windows::Forms::Button^ btnReportBug;
	public: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ lbEmailBuff;


	public:

	public:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashBoard::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnRecordsTest = (gcnew System::Windows::Forms::Button());
			this->btnVaccine = (gcnew System::Windows::Forms::Button());
			this->btnQRCode = (gcnew System::Windows::Forms::Button());
			this->btnReportBug = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(79, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(364, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Details";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DashBoard::button1_Click);
			// 
			// btnRecordsTest
			// 
			this->btnRecordsTest->BackColor = System::Drawing::Color::Gold;
			this->btnRecordsTest->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->btnRecordsTest->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnRecordsTest->Location = System::Drawing::Point(77, 347);
			this->btnRecordsTest->Name = L"btnRecordsTest";
			this->btnRecordsTest->Size = System::Drawing::Size(364, 65);
			this->btnRecordsTest->TabIndex = 1;
			this->btnRecordsTest->Text = L"Records Test";
			this->btnRecordsTest->UseVisualStyleBackColor = false;
			this->btnRecordsTest->Click += gcnew System::EventHandler(this, &DashBoard::btnRecordsTest_Click);
			// 
			// btnVaccine
			// 
			this->btnVaccine->BackColor = System::Drawing::Color::Gold;
			this->btnVaccine->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->btnVaccine->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnVaccine->Location = System::Drawing::Point(79, 442);
			this->btnVaccine->Name = L"btnVaccine";
			this->btnVaccine->Size = System::Drawing::Size(364, 65);
			this->btnVaccine->TabIndex = 2;
			this->btnVaccine->Text = L"Vaccine";
			this->btnVaccine->UseVisualStyleBackColor = false;
			this->btnVaccine->Click += gcnew System::EventHandler(this, &DashBoard::btnVaccine_Click);
			// 
			// btnQRCode
			// 
			this->btnQRCode->BackColor = System::Drawing::Color::Gold;
			this->btnQRCode->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->btnQRCode->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnQRCode->Location = System::Drawing::Point(79, 529);
			this->btnQRCode->Name = L"btnQRCode";
			this->btnQRCode->Size = System::Drawing::Size(364, 65);
			this->btnQRCode->TabIndex = 3;
			this->btnQRCode->Text = L"QR Code";
			this->btnQRCode->UseVisualStyleBackColor = false;
			this->btnQRCode->Click += gcnew System::EventHandler(this, &DashBoard::btnQRCode_Click);
			// 
			// btnReportBug
			// 
			this->btnReportBug->BackColor = System::Drawing::Color::Gold;
			this->btnReportBug->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->btnReportBug->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnReportBug->Location = System::Drawing::Point(79, 622);
			this->btnReportBug->Name = L"btnReportBug";
			this->btnReportBug->Size = System::Drawing::Size(364, 65);
			this->btnReportBug->TabIndex = 4;
			this->btnReportBug->Text = L"Report Bugs";
			this->btnReportBug->UseVisualStyleBackColor = false;
			this->btnReportBug->Click += gcnew System::EventHandler(this, &DashBoard::btnReportBug_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->label1->Location = System::Drawing::Point(96, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Name Here";
			// 
			// lbEmailBuff
			// 
			this->lbEmailBuff->AutoSize = true;
			this->lbEmailBuff->Location = System::Drawing::Point(12, 9);
			this->lbEmailBuff->Name = L"lbEmailBuff";
			this->lbEmailBuff->Size = System::Drawing::Size(54, 13);
			this->lbEmailBuff->TabIndex = 0;
			this->lbEmailBuff->Text = L"Email Buff";
			this->lbEmailBuff->Visible = false;
			// 
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->lbEmailBuff);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnReportBug);
			this->Controls->Add(this->btnQRCode);
			this->Controls->Add(this->btnVaccine);
			this->Controls->Add(this->btnRecordsTest);
			this->Controls->Add(this->button1);
			this->Name = L"DashBoard";
			this->Text = L"DashBoard";
			this->Shown += gcnew System::EventHandler(this, &DashBoard::DashBoard_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//User Details Button	
	private: System::String^ Username;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Username = lbEmailBuff->Text;
		UserDetails^ detailsForm = gcnew UserDetails();
		detailsForm->SetEmailLabel(this->LabelText);
		detailsForm->Show();
	}
private: System::Void btnRecordsTest_Click(System::Object^ sender, System::EventArgs^ e) {
	UserRecords^ recordsForm = gcnew UserRecords();
	recordsForm->Show();
}
private: System::Void btnVaccine_Click(System::Object^ sender, System::EventArgs^ e) {
	UserVaccine^ vaccineForm = gcnew UserVaccine();
	vaccineForm->Show();
}
private: System::Void btnQRCode_Click(System::Object^ sender, System::EventArgs^ e) {
	UserQR^ qrForm = gcnew UserQR();
	qrForm->Show();
}
private: System::Void btnReportBug_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportBug^ reportBugForm = gcnew ReportBug();
	reportBugForm->Show();
}


public:
	property String^ LabelText {
		String^ get() {
			return lbEmailBuff->Text;
		}
	}
public:
	property String^ Email {
		String^ get() {
			return lbEmailBuff->Text;
		}
		void set(String^ value) {
			lbEmailBuff->Text = value;
		}
	}
private: System::Void DashBoard_Shown(System::Object^ sender, System::EventArgs^ e) {

	std::string email = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	std::ifstream inputFile(email +"_User_Data.txt");
	std::string line;
	//Line 1 & 2 of file skipped
	std::getline(inputFile, line);
	std::getline(inputFile, line);
	//Reading line 3, location of user name
	std::getline(inputFile, line);	
	inputFile.close();

	//This makes the "User Name Here" label display user's name.
	String^ TEST = msclr::interop::marshal_as<System::String^>(line);
	label1->Text = TEST;
	Username = label1->Text;	//Cant remmeber what this does lol too scared to remove
}

};
}
