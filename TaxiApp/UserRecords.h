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
	/// Summary for UserRecords
	/// </summary>
	public ref class UserRecords : public System::Windows::Forms::Form
	{
	public:
		UserRecords(void)
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
		~UserRecords()
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
	public:
	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserRecords::typeid));
			this->rtbUserRecords = (gcnew System::Windows::Forms::RichTextBox());
			this->lbUserNameTop = (gcnew System::Windows::Forms::Label());
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// rtbUserRecords
			// 
			this->rtbUserRecords->Location = System::Drawing::Point(90, 257);
			this->rtbUserRecords->Name = L"rtbUserRecords";
			this->rtbUserRecords->Size = System::Drawing::Size(343, 406);
			this->rtbUserRecords->TabIndex = 0;
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
			this->lbUserNameTop->TabIndex = 1;
			this->lbUserNameTop->Text = L"User Name Here";
			// 
			// lbEmailBuff
			// 
			this->lbEmailBuff->AutoSize = true;
			this->lbEmailBuff->Location = System::Drawing::Point(12, 9);
			this->lbEmailBuff->Name = L"lbEmailBuff";
			this->lbEmailBuff->Size = System::Drawing::Size(54, 13);
			this->lbEmailBuff->TabIndex = 2;
			this->lbEmailBuff->Text = L"Email Buff";
			// 
			// UserRecords
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->lbEmailBuff);
			this->Controls->Add(this->lbUserNameTop);
			this->Controls->Add(this->rtbUserRecords);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Name = L"UserRecords";
			this->Text = L"UserRecords";
			this->Load += gcnew System::EventHandler(this, &UserRecords::UserRecords_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void SetEmailLabel(String^ LabelText)
		{
			lbEmailBuff->Text = LabelText;
		}
	private: System::Void UserRecords_Load(System::Object^ sender, System::EventArgs^ e) {
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
