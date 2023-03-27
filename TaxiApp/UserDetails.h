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
	/// Summary for UserDetails
	/// </summary>
	public ref class UserDetails : public System::Windows::Forms::Form
	{
	public:
		UserDetails(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UserDetails(String^ Email)
		{
			InitializeComponent();
			lbEmailBuff->Text = Email;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbUserNameTop;
	protected:

	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::Label^ lbPhone;
	private: System::Windows::Forms::Label^ lbHealthID;
	private: System::Windows::Forms::Label^ lbGender;
	private: System::Windows::Forms::Label^ lbEthnicty;
	private: System::Windows::Forms::Label^ lbEmailBuff;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserDetails::typeid));
			this->lbUserNameTop = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->lbPhone = (gcnew System::Windows::Forms::Label());
			this->lbHealthID = (gcnew System::Windows::Forms::Label());
			this->lbGender = (gcnew System::Windows::Forms::Label());
			this->lbEthnicty = (gcnew System::Windows::Forms::Label());
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbUserNameTop
			// 
			this->lbUserNameTop->AutoSize = true;
			this->lbUserNameTop->BackColor = System::Drawing::Color::Transparent;
			this->lbUserNameTop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbUserNameTop->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->lbUserNameTop->Location = System::Drawing::Point(96, 139);
			this->lbUserNameTop->Name = L"lbUserNameTop";
			this->lbUserNameTop->Size = System::Drawing::Size(176, 24);
			this->lbUserNameTop->TabIndex = 12;
			this->lbUserNameTop->Text = L"User Name Here";
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::Gold;
			this->btnRegister->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18));
			this->btnRegister->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnRegister->Location = System::Drawing::Point(342, 176);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(99, 38);
			this->btnRegister->TabIndex = 13;
			this->btnRegister->Text = L"Logout";
			this->btnRegister->UseVisualStyleBackColor = false;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->BackColor = System::Drawing::Color::Transparent;
			this->lbName->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->ForeColor = System::Drawing::Color::White;
			this->lbName->Location = System::Drawing::Point(215, 266);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(91, 32);
			this->lbName->TabIndex = 20;
			this->lbName->Text = L"Name";
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->BackColor = System::Drawing::Color::Transparent;
			this->lbAddress->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbAddress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbAddress->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAddress->ForeColor = System::Drawing::Color::White;
			this->lbAddress->Location = System::Drawing::Point(206, 338);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(125, 32);
			this->lbAddress->TabIndex = 21;
			this->lbAddress->Text = L"Address";
			// 
			// lbPhone
			// 
			this->lbPhone->AutoSize = true;
			this->lbPhone->BackColor = System::Drawing::Color::Transparent;
			this->lbPhone->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbPhone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbPhone->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPhone->ForeColor = System::Drawing::Color::White;
			this->lbPhone->Location = System::Drawing::Point(219, 411);
			this->lbPhone->Name = L"lbPhone";
			this->lbPhone->Size = System::Drawing::Size(96, 32);
			this->lbPhone->TabIndex = 22;
			this->lbPhone->Text = L"Phone";
			// 
			// lbHealthID
			// 
			this->lbHealthID->AutoSize = true;
			this->lbHealthID->BackColor = System::Drawing::Color::Transparent;
			this->lbHealthID->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbHealthID->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbHealthID->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHealthID->ForeColor = System::Drawing::Color::White;
			this->lbHealthID->Location = System::Drawing::Point(203, 480);
			this->lbHealthID->Name = L"lbHealthID";
			this->lbHealthID->Size = System::Drawing::Size(128, 32);
			this->lbHealthID->TabIndex = 23;
			this->lbHealthID->Text = L"HealthID";
			// 
			// lbGender
			// 
			this->lbGender->AutoSize = true;
			this->lbGender->BackColor = System::Drawing::Color::Transparent;
			this->lbGender->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbGender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbGender->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbGender->ForeColor = System::Drawing::Color::White;
			this->lbGender->Location = System::Drawing::Point(213, 550);
			this->lbGender->Name = L"lbGender";
			this->lbGender->Size = System::Drawing::Size(112, 32);
			this->lbGender->TabIndex = 24;
			this->lbGender->Text = L"Gender";
			// 
			// lbEthnicty
			// 
			this->lbEthnicty->AutoSize = true;
			this->lbEthnicty->BackColor = System::Drawing::Color::Transparent;
			this->lbEthnicty->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbEthnicty->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbEthnicty->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEthnicty->ForeColor = System::Drawing::Color::White;
			this->lbEthnicty->Location = System::Drawing::Point(205, 621);
			this->lbEthnicty->Name = L"lbEthnicty";
			this->lbEthnicty->Size = System::Drawing::Size(122, 32);
			this->lbEthnicty->TabIndex = 25;
			this->lbEthnicty->Text = L"Ethnicty";
			// 
			// lbEmailBuff
			// 
			this->lbEmailBuff->AutoSize = true;
			this->lbEmailBuff->Location = System::Drawing::Point(12, 9);
			this->lbEmailBuff->Name = L"lbEmailBuff";
			this->lbEmailBuff->Size = System::Drawing::Size(54, 13);
			this->lbEmailBuff->TabIndex = 26;
			this->lbEmailBuff->Text = L"Email Buff";
			// 
			// UserDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->lbEmailBuff);
			this->Controls->Add(this->lbEthnicty);
			this->Controls->Add(this->lbGender);
			this->Controls->Add(this->lbHealthID);
			this->Controls->Add(this->lbPhone);
			this->Controls->Add(this->lbAddress);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->lbUserNameTop);
			this->Name = L"UserDetails";
			this->Text = L"UserDetails";
			this->Shown += gcnew System::EventHandler(this, &UserDetails::UserDetails_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	void SetEmailLabel(String^ LabelText)
	{
		lbEmailBuff->Text = LabelText;
	}


private: System::Void UserDetails_Shown(System::Object^ sender, System::EventArgs^ e) {

	std::string email = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	std::ifstream inputFile(email + "_User_Data.txt");
	std::string line;
	//Line 1 & 2 of file skipped
	std::getline(inputFile, line);
	std::getline(inputFile, line);
	//Reading line 3, location of user name
	std::getline(inputFile, line);
	inputFile.close();

	//This makes the "User Name Here" label display user's name.
	String^ NAME = msclr::interop::marshal_as<System::String^>(line);
	lbUserNameTop->Text = NAME;

	//**Start** Code for edited 1st info block - NAME
	lbName->Text = NAME;
	//**End** Code for edited 1st info block - NAME
	
	//**Start** Code for edited 1st info block - ADDRESS
	std::string address = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	std::ifstream inputFileAddress(email + "_User_Data.txt");
	std::string line2;
	//Skip Line 1-4
	std::getline(inputFileAddress, line2);
	std::getline(inputFileAddress, line2);
	std::getline(inputFileAddress, line2);
	std::getline(inputFileAddress, line2);
	//Reading line 5, location of user address
	std::getline(inputFileAddress, line2);
	inputFileAddress.close();
	//Display information
	String^ ADDRESS = msclr::interop::marshal_as<System::String^>(line2);
	lbAddress->Text = ADDRESS;

	//**End** Code for edited 1st info block - ADDRESS
	 
	//**Start** Code for edited 1st info block - PHONE
	std::string phone = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	std:ifstream inputFilePhone(email + "_User_Data.txt");
	string line3;
	//Skipe Line 1-7
	std::getline(inputFilePhone, line3);
	std::getline(inputFilePhone, line3);
	std::getline(inputFilePhone, line3);
	std::getline(inputFilePhone, line3);
	std::getline(inputFilePhone, line3);
	std::getline(inputFilePhone, line3);
	std::getline(inputFilePhone, line3);
	//Reading Line 8, location of user phoneNum
	std::getline(inputFilePhone, line3);
	inputFilePhone.close();
	//Display information
	String^ PHONE = msclr::interop::marshal_as<System::String^>(line3);
	lbPhone->Text = PHONE;
	//**End** Code for edited 1st info block - PHONE

	//**Start** Code for edited 1st info block - GENDER
	std::string gender = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	ifstream inputFileGender(email + "_User_Data.txt");
	string line4;
	//Skip line 1-5
	std::getline(inputFileGender, line4);
	std::getline(inputFileGender, line4);
	std::getline(inputFileGender, line4);
	std::getline(inputFileGender, line4);
	std::getline(inputFileGender, line4);
	//Reading Line 5, location of user gender
	std::getline(inputFileGender, line4);
	inputFileGender.close();
	//Display information
	String^ GENDER = msclr::interop::marshal_as<System::String^>(line4);
	lbGender->Text = GENDER;
	//**End** Code for edited 1st info block - GENDER
	
	//**Start** Code for edited 1st info block - ETHNICTY
	
	//**End** Code for edited 1st info block - ETHNICTY

}
};
}
