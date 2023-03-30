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
	/// Summary for AdminUserDoc
	/// </summary>
	public ref class AdminUserDoc : public System::Windows::Forms::Form
	{
	public:
		AdminUserDoc(void)
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
		~AdminUserDoc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ rtbSaveTests;
	protected:

	private: System::Windows::Forms::Button^ btnSaveTests;

	public: System::Windows::Forms::Label^ lbEmailBuff;
	private: System::Windows::Forms::Button^ btnSaveVaccines;
	private: System::Windows::Forms::RichTextBox^ rtbSaveVaccines;
	public:

	public:

	private: System::Windows::Forms::Label^ lbUser;
	private: System::Windows::Forms::Label^ lbUserNotUsed;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminUserDoc::typeid));
			this->rtbSaveTests = (gcnew System::Windows::Forms::RichTextBox());
			this->btnSaveTests = (gcnew System::Windows::Forms::Button());
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->btnSaveVaccines = (gcnew System::Windows::Forms::Button());
			this->rtbSaveVaccines = (gcnew System::Windows::Forms::RichTextBox());
			this->lbUser = (gcnew System::Windows::Forms::Label());
			this->lbUserNotUsed = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// rtbSaveTests
			// 
			this->rtbSaveTests->Location = System::Drawing::Point(96, 304);
			this->rtbSaveTests->Name = L"rtbSaveTests";
			this->rtbSaveTests->Size = System::Drawing::Size(337, 153);
			this->rtbSaveTests->TabIndex = 0;
			this->rtbSaveTests->Text = L"";
			// 
			// btnSaveTests
			// 
			this->btnSaveTests->Location = System::Drawing::Point(223, 254);
			this->btnSaveTests->Name = L"btnSaveTests";
			this->btnSaveTests->Size = System::Drawing::Size(75, 23);
			this->btnSaveTests->TabIndex = 1;
			this->btnSaveTests->Text = L"Save Tests";
			this->btnSaveTests->UseVisualStyleBackColor = true;
			this->btnSaveTests->Click += gcnew System::EventHandler(this, &AdminUserDoc::btnSaveTests_Click);
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
			// btnSaveVaccines
			// 
			this->btnSaveVaccines->Location = System::Drawing::Point(210, 481);
			this->btnSaveVaccines->Name = L"btnSaveVaccines";
			this->btnSaveVaccines->Size = System::Drawing::Size(102, 23);
			this->btnSaveVaccines->TabIndex = 3;
			this->btnSaveVaccines->Text = L"Save Vaccines";
			this->btnSaveVaccines->UseVisualStyleBackColor = true;
			// 
			// rtbSaveVaccines
			// 
			this->rtbSaveVaccines->Location = System::Drawing::Point(96, 528);
			this->rtbSaveVaccines->Name = L"rtbSaveVaccines";
			this->rtbSaveVaccines->Size = System::Drawing::Size(337, 153);
			this->rtbSaveVaccines->TabIndex = 4;
			this->rtbSaveVaccines->Text = L"";
			// 
			// lbUser
			// 
			this->lbUser->AutoSize = true;
			this->lbUser->BackColor = System::Drawing::Color::Transparent;
			this->lbUser->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbUser->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->lbUser->Location = System::Drawing::Point(110, 160);
			this->lbUser->Name = L"lbUser";
			this->lbUser->Size = System::Drawing::Size(176, 24);
			this->lbUser->TabIndex = 16;
			this->lbUser->Text = L"User Name Here";
			// 
			// lbUserNotUsed
			// 
			this->lbUserNotUsed->AutoSize = true;
			this->lbUserNotUsed->BackColor = System::Drawing::Color::Transparent;
			this->lbUserNotUsed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbUserNotUsed->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->lbUserNotUsed->Location = System::Drawing::Point(110, 121);
			this->lbUserNotUsed->Name = L"lbUserNotUsed";
			this->lbUserNotUsed->Size = System::Drawing::Size(65, 24);
			this->lbUserNotUsed->TabIndex = 17;
			this->lbUserNotUsed->Text = L"User:";
			// 
			// AdminUserDoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->lbUserNotUsed);
			this->Controls->Add(this->lbUser);
			this->Controls->Add(this->rtbSaveVaccines);
			this->Controls->Add(this->btnSaveVaccines);
			this->Controls->Add(this->lbEmailBuff);
			this->Controls->Add(this->btnSaveTests);
			this->Controls->Add(this->rtbSaveTests);
			this->Name = L"AdminUserDoc";
			this->Text = L"AdminUserDoc";
			this->Load += gcnew System::EventHandler(this, &AdminUserDoc::AdminUserDoc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public://This recives the email text from AdminDash and stores it in a hidden label.
		void SetEmailText(System::String^ Text)
		{
			lbEmailBuff->Text = Text;
		}

	private: System::Void AdminUserDoc_Load(System::Object^ sender, System::EventArgs^ e) {
		string UserInfoLoad = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		string line;
		string fileName = UserInfoLoad + "_User_Data.txt";
		ifstream myFile(fileName);

		std::ifstream inputFile(UserInfoLoad + "_User_Data.txt");
		//Line 1 & 2 of file skipped
		std::getline(inputFile, line);
		std::getline(inputFile, line);
		//Reading line 3, location of user name
		std::getline(inputFile, line);
		inputFile.close();
		//This makes the "User Name Here" label display user's name.
		String^ NAME = msclr::interop::marshal_as<System::String^>(line);
		lbUser->Text = NAME;

		//As soon as the form loads, the whole txt file is shown in the textbox


	}
private: System::Void btnSaveTests_Click(System::Object^ sender, System::EventArgs^ e) {
	string UserTestSave = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	string LineData;
	string FileNameTests = UserTestSave + "_User_Test_Records.txt";
	ofstream UserTests(FileNameTests);

	if (UserTests.is_open())
	{
		std::string rtbSaveTestsContents = msclr::interop::marshal_as<std::string>(rtbSaveTests->Text);
		UserTests << rtbSaveTestsContents;
		UserTests.close();
		MessageBox::Show("Saved!");
	}
	else
	{
		MessageBox::Show("Failed to Open!");
	}
}
};
}
