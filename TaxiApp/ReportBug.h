#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>


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
	/// Summary for ReportBug
	/// </summary>
	public ref class ReportBug : public System::Windows::Forms::Form
	{
	public:
		ReportBug(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ReportBug(String^ Email)
		{
			InitializeComponent();
			lbEmailBuff->Text = Email;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReportBug()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::RichTextBox^ rtbProblem;


	private: System::Windows::Forms::RichTextBox^ rtbSummary;

	public: System::Windows::Forms::Label^ label1;
	private:
	public: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbEmailBuff;
	public:

	public:

	public:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReportBug::typeid));
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->rtbProblem = (gcnew System::Windows::Forms::RichTextBox());
			this->rtbSummary = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSend
			// 
			this->btnSend->BackColor = System::Drawing::Color::Gold;
			this->btnSend->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSend->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->btnSend->ForeColor = System::Drawing::SystemColors::Control;
			this->btnSend->Location = System::Drawing::Point(128, 622);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(268, 52);
			this->btnSend->TabIndex = 3;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = false;
			this->btnSend->Click += gcnew System::EventHandler(this, &ReportBug::btnSend_Click);
			// 
			// rtbProblem
			// 
			this->rtbProblem->Location = System::Drawing::Point(128, 338);
			this->rtbProblem->Name = L"rtbProblem";
			this->rtbProblem->Size = System::Drawing::Size(268, 268);
			this->rtbProblem->TabIndex = 2;
			this->rtbProblem->Text = L"";
			// 
			// rtbSummary
			// 
			this->rtbSummary->Location = System::Drawing::Point(128, 266);
			this->rtbSummary->Name = L"rtbSummary";
			this->rtbSummary->Size = System::Drawing::Size(268, 30);
			this->rtbSummary->TabIndex = 1;
			this->rtbSummary->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->label1->Location = System::Drawing::Point(124, 239);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Summary";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->label2->Location = System::Drawing::Point(124, 311);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Problem";
			// 
			// lbEmailBuff
			// 
			this->lbEmailBuff->AutoSize = true;
			this->lbEmailBuff->BackColor = System::Drawing::SystemColors::Control;
			this->lbEmailBuff->Location = System::Drawing::Point(12, 9);
			this->lbEmailBuff->Name = L"lbEmailBuff";
			this->lbEmailBuff->Size = System::Drawing::Size(54, 13);
			this->lbEmailBuff->TabIndex = 0;
			this->lbEmailBuff->Text = L"Email Buff";
			this->lbEmailBuff->Visible = false;
			// 
			// ReportBug
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->lbEmailBuff);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rtbSummary);
			this->Controls->Add(this->rtbProblem);
			this->Controls->Add(this->btnSend);
			this->Name = L"ReportBug";
			this->Text = L"ReportBug";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public:
	void SetEmailLabel(String^ LabelText)
	{
		lbEmailBuff->Text = LabelText;
	}
private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
	//Take rtbSummary +  rtbProblem and store that into a txt file named "rtbSummary_BugReport.txt" .

	string BugReportSum = msclr::interop::marshal_as<std::string>(rtbSummary->Text);
	string line;
	string fileName = BugReportSum + "_BugReport.txt";
	ofstream myFile(fileName);

	if (myFile.is_open())
	{
		std::string fileSum = msclr::interop::marshal_as<std::string>(rtbSummary->Text);
		std::string fileProb = msclr::interop::marshal_as<std::string>(rtbProblem->Text);
		std::string fileUser = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);

		myFile << fileSum;
		myFile << fileProb;
		myFile << fileUser;
		myFile.close();

		MessageBox::Show("Saved!");
	}
	else
	{
		MessageBox::Show("Failed to Open!");//Open or create?
	}
}
};
}
