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
	/// Summary for UserVaccine
	/// </summary>
	public ref class UserVaccine : public System::Windows::Forms::Form
	{
	public:
		UserVaccine(void)
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
		~UserVaccine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ rtbUserRecords;
	protected:

	public: System::Windows::Forms::Label^ lbUserNameTop;
	private:

	private: System::Windows::Forms::Label^ lbEmailBuff;
	public: System::Windows::Forms::Label^ label1;
	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserVaccine::typeid));
			this->rtbUserRecords = (gcnew System::Windows::Forms::RichTextBox());
			this->lbUserNameTop = (gcnew System::Windows::Forms::Label());
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// rtbUserRecords
			// 
			this->rtbUserRecords->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->rtbUserRecords->Location = System::Drawing::Point(90, 283);
			this->rtbUserRecords->Name = L"rtbUserRecords";
			this->rtbUserRecords->ReadOnly = true;
			this->rtbUserRecords->Size = System::Drawing::Size(343, 380);
			this->rtbUserRecords->TabIndex = 1;
			this->rtbUserRecords->Text = L"";
			// 
			// lbUserNameTop
			// 
			this->lbUserNameTop->AutoSize = true;
			this->lbUserNameTop->BackColor = System::Drawing::Color::Transparent;
			this->lbUserNameTop->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->lbUserNameTop->Location = System::Drawing::Point(96, 139);
			this->lbUserNameTop->Name = L"lbUserNameTop";
			this->lbUserNameTop->Size = System::Drawing::Size(176, 24);
			this->lbUserNameTop->TabIndex = 2;
			this->lbUserNameTop->Text = L"User Name Here";
			// 
			// lbEmailBuff
			// 
			this->lbEmailBuff->AutoSize = true;
			this->lbEmailBuff->Location = System::Drawing::Point(12, 9);
			this->lbEmailBuff->Name = L"lbEmailBuff";
			this->lbEmailBuff->Size = System::Drawing::Size(54, 13);
			this->lbEmailBuff->TabIndex = 3;
			this->lbEmailBuff->Text = L"Email Buff";
			this->lbEmailBuff->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->label1->Location = System::Drawing::Point(86, 256);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Covid19 Vaccine History";
			// 
			// UserVaccine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbEmailBuff);
			this->Controls->Add(this->lbUserNameTop);
			this->Controls->Add(this->rtbUserRecords);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Name = L"UserVaccine";
			this->Text = L"UserVaccine";
			this->Load += gcnew System::EventHandler(this, &UserVaccine::UserVaccine_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void SetEmailLabel(String^ LabelText)
		{
			lbEmailBuff->Text = LabelText;
		}
	private: System::Void UserVaccine_Load(System::Object^ sender, System::EventArgs^ e) {
		string email = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		ifstream inputFile(email + "_User_Data.txt");
		string line;
		//Line 1 & 2 of file skipped
		std::getline(inputFile, line);
		std::getline(inputFile, line);
		//Reading line 3, location of user name
		std::getline(inputFile, line);
		inputFile.close();

		//This makes the "User Name Here" label display user's name.
		String^ NAME = msclr::interop::marshal_as<System::String^>(line);
		lbUserNameTop->Text = NAME;

		//Opening the user file and displaying text into rich text box.
		string UserInfoLoad = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		string fileName = UserInfoLoad + "_User_Vaccine_Records.txt";
		ifstream myFile(fileName);

		if (myFile.is_open())
		{
			std::string fileContents((std::istreambuf_iterator<char>(myFile)), std::istreambuf_iterator<char>());
			System::String^ textBoxContents = gcnew System::String(fileContents.c_str());
			rtbUserRecords->Text = textBoxContents;
			myFile.close();
		}
	}
};
}
