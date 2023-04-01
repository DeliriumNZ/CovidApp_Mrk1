#pragma once
#include "AdminEditUserDets.h"
#include "AdminUserDoc.h"
#include "AdminQR.h"

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
	/// Summary for AdminMenu
	/// </summary>
	public ref class AdminMenu : public System::Windows::Forms::Form
	{
	public:
		AdminMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminMenu(String^ lbEmailBuffText)
		{
			InitializeComponent();
			lbEmailBuff->Text = lbEmailBuffText;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminMenu()
		{
			if (components)
			{
				delete components;
			}
		}



	public: System::Windows::Forms::Label^ lbEmailBuff;
	private: System::Windows::Forms::Button^ btnDetails;
	private: System::Windows::Forms::Button^ btnTestRecords;
	private: System::Windows::Forms::Button^ btnQRCode;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbUser;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMenu::typeid));
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->btnDetails = (gcnew System::Windows::Forms::Button());
			this->btnTestRecords = (gcnew System::Windows::Forms::Button());
			this->btnQRCode = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUser = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			// btnDetails
			// 
			this->btnDetails->BackColor = System::Drawing::Color::Transparent;
			this->btnDetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDetails->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->btnDetails->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDetails->Location = System::Drawing::Point(77, 405);
			this->btnDetails->Name = L"btnDetails";
			this->btnDetails->Size = System::Drawing::Size(368, 64);
			this->btnDetails->TabIndex = 1;
			this->btnDetails->Text = L"Details";
			this->btnDetails->UseVisualStyleBackColor = true;
			this->btnDetails->Click += gcnew System::EventHandler(this, &AdminMenu::btnDetails_Click);
			// 
			// btnTestRecords
			// 
			this->btnTestRecords->BackColor = System::Drawing::Color::Transparent;
			this->btnTestRecords->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTestRecords->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->btnTestRecords->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnTestRecords->Location = System::Drawing::Point(75, 502);
			this->btnTestRecords->Name = L"btnTestRecords";
			this->btnTestRecords->Size = System::Drawing::Size(366, 64);
			this->btnTestRecords->TabIndex = 2;
			this->btnTestRecords->Text = L"  Test Records";
			this->btnTestRecords->UseVisualStyleBackColor = false;
			this->btnTestRecords->Click += gcnew System::EventHandler(this, &AdminMenu::btnTestRecords_Click);
			// 
			// btnQRCode
			// 
			this->btnQRCode->BackColor = System::Drawing::Color::Transparent;
			this->btnQRCode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnQRCode->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->btnQRCode->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnQRCode->Location = System::Drawing::Point(76, 594);
			this->btnQRCode->Name = L"btnQRCode";
			this->btnQRCode->Size = System::Drawing::Size(369, 64);
			this->btnQRCode->TabIndex = 3;
			this->btnQRCode->Text = L"QR Code";
			this->btnQRCode->UseVisualStyleBackColor = false;
			this->btnQRCode->Click += gcnew System::EventHandler(this, &AdminMenu::btnQRCode_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->label1->Location = System::Drawing::Point(110, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 24);
			this->label1->TabIndex = 16;
			this->label1->Text = L"User:";
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
			this->lbUser->TabIndex = 15;
			this->lbUser->Text = L"User Name Here";
			// 
			// AdminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbUser);
			this->Controls->Add(this->btnQRCode);
			this->Controls->Add(this->btnTestRecords);
			this->Controls->Add(this->btnDetails);
			this->Controls->Add(this->lbEmailBuff);
			this->Name = L"AdminMenu";
			this->Text = L"AdminMenu";
			this->Load += gcnew System::EventHandler(this, &AdminMenu::AdminMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public://This recives the email text from AdminDash and stores it in a hidden label.
	void SetEmailText(System::String^ Text)
	{
		lbEmailBuff->Text = Text;
	}


	//Sending email over to other admin forms to assist in opening user details file.
public:
	property String^ lbEmailBuffTextv2
	{
		String^ get()
		{
			return lbEmailBuff->Text;
		}
	}

	private: System::Void AdminMenu_Load(System::Object^ sender, System::EventArgs^ e) {

		string UserInfoLoad = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		string line;
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
	}

//Goes to Details Edit Page
	private: System::Void btnDetails_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminEditUserDets^ adminEditForm = gcnew AdminEditUserDets();
		adminEditForm->SetEmailText(lbEmailBuff->Text);
		adminEditForm->ShowDialog();
	}

private: System::Void btnTestRecords_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminUserDoc^ adminUserDocForm = gcnew AdminUserDoc();
	adminUserDocForm->SetEmailText(lbEmailBuff->Text);
	adminUserDocForm->ShowDialog();
}
private: System::Void btnQRCode_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminQR^ adminQRForm = gcnew AdminQR();
	//adminQRForm->SetEmailText(lbEmailBuff->Text); Uncomment once page has been made
	adminQRForm->ShowDialog();
}
};
}
