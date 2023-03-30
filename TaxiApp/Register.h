#pragma once

#include <fstream>
#include <iostream>
#include <string>

namespace TaxiApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ txtBoxUserName;
	private: System::Windows::Forms::TextBox^ txtBoxEmail;
	private: System::Windows::Forms::TextBox^ txtBoxCellNum;






	private: System::Windows::Forms::TextBox^ txtBoxDOB;
	private: System::Windows::Forms::TextBox^ txtBoxAddress;
	private: System::Windows::Forms::TextBox^ txtBoxGender;

	private: System::Windows::Forms::TextBox^ txtBoxEthnicty;








	private: System::Windows::Forms::TextBox^ txtBoxPass;
	private: System::Windows::Forms::Button^ btnRegister;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxCellNum = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxDOB = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxGender = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxEthnicty = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"New User Registration";
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// txtBoxUserName
			// 
			this->txtBoxUserName->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxUserName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxUserName->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxUserName->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxUserName->Location = System::Drawing::Point(129, 149);
			this->txtBoxUserName->Name = L"txtBoxUserName";
			this->txtBoxUserName->Size = System::Drawing::Size(263, 28);
			this->txtBoxUserName->TabIndex = 1;
			this->txtBoxUserName->Text = L"Full Name";
			this->txtBoxUserName->TextChanged += gcnew System::EventHandler(this, &Register::txtBoxUserName_TextChanged);
			this->txtBoxUserName->Leave += gcnew System::EventHandler(this, &Register::txtBoxUserName_Leave);
			// 
			// txtBoxEmail
			// 
			this->txtBoxEmail->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxEmail->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxEmail->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxEmail->Location = System::Drawing::Point(127, 206);
			this->txtBoxEmail->Name = L"txtBoxEmail";
			this->txtBoxEmail->Size = System::Drawing::Size(263, 28);
			this->txtBoxEmail->TabIndex = 2;
			this->txtBoxEmail->Text = L"Email";
			this->txtBoxEmail->Enter += gcnew System::EventHandler(this, &Register::txtBoxEmail_Enter);
			this->txtBoxEmail->Leave += gcnew System::EventHandler(this, &Register::txtBoxEmail_Leave);
			// 
			// txtBoxCellNum
			// 
			this->txtBoxCellNum->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxCellNum->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxCellNum->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxCellNum->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxCellNum->Location = System::Drawing::Point(129, 589);
			this->txtBoxCellNum->Name = L"txtBoxCellNum";
			this->txtBoxCellNum->Size = System::Drawing::Size(263, 28);
			this->txtBoxCellNum->TabIndex = 8;
			this->txtBoxCellNum->Text = L"CellPhone Number";
			this->txtBoxCellNum->Enter += gcnew System::EventHandler(this, &Register::txtBoxCellNum_Enter);
			this->txtBoxCellNum->Leave += gcnew System::EventHandler(this, &Register::txtBoxCellNum_Leave);
			// 
			// txtBoxDOB
			// 
			this->txtBoxDOB->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxDOB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxDOB->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxDOB->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxDOB->Location = System::Drawing::Point(127, 325);
			this->txtBoxDOB->Name = L"txtBoxDOB";
			this->txtBoxDOB->Size = System::Drawing::Size(263, 28);
			this->txtBoxDOB->TabIndex = 4;
			this->txtBoxDOB->Text = L"D.o.B";
			this->txtBoxDOB->Enter += gcnew System::EventHandler(this, &Register::txtBoxDOB_Enter);
			this->txtBoxDOB->Leave += gcnew System::EventHandler(this, &Register::txtBoxDOB_Leave);
			// 
			// txtBoxAddress
			// 
			this->txtBoxAddress->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxAddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxAddress->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxAddress->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxAddress->Location = System::Drawing::Point(129, 395);
			this->txtBoxAddress->Name = L"txtBoxAddress";
			this->txtBoxAddress->Size = System::Drawing::Size(263, 28);
			this->txtBoxAddress->TabIndex = 5;
			this->txtBoxAddress->Text = L"Address";
			this->txtBoxAddress->Enter += gcnew System::EventHandler(this, &Register::txtBoxAddress_Enter);
			this->txtBoxAddress->Leave += gcnew System::EventHandler(this, &Register::txtBoxAddress_Leave);
			// 
			// txtBoxGender
			// 
			this->txtBoxGender->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxGender->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxGender->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxGender->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxGender->Location = System::Drawing::Point(127, 458);
			this->txtBoxGender->Name = L"txtBoxGender";
			this->txtBoxGender->Size = System::Drawing::Size(263, 28);
			this->txtBoxGender->TabIndex = 6;
			this->txtBoxGender->Text = L"Gender";
			this->txtBoxGender->Enter += gcnew System::EventHandler(this, &Register::textBoxGender_Enter);
			this->txtBoxGender->Leave += gcnew System::EventHandler(this, &Register::txtBoxGender_Leave);
			// 
			// txtBoxEthnicty
			// 
			this->txtBoxEthnicty->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxEthnicty->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxEthnicty->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxEthnicty->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxEthnicty->Location = System::Drawing::Point(128, 524);
			this->txtBoxEthnicty->Name = L"txtBoxEthnicty";
			this->txtBoxEthnicty->Size = System::Drawing::Size(263, 28);
			this->txtBoxEthnicty->TabIndex = 7;
			this->txtBoxEthnicty->Text = L"Ethnicty";
			this->txtBoxEthnicty->Enter += gcnew System::EventHandler(this, &Register::txtBoxEthnicty_Enter);
			this->txtBoxEthnicty->Leave += gcnew System::EventHandler(this, &Register::txtBoxEthnicty_Leave);
			// 
			// txtBoxPass
			// 
			this->txtBoxPass->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxPass->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxPass->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxPass->Location = System::Drawing::Point(127, 263);
			this->txtBoxPass->Name = L"txtBoxPass";
			this->txtBoxPass->Size = System::Drawing::Size(263, 28);
			this->txtBoxPass->TabIndex = 3;
			this->txtBoxPass->Text = L"Password";
			this->txtBoxPass->Enter += gcnew System::EventHandler(this, &Register::txtBoxPass_Enter);
			this->txtBoxPass->Leave += gcnew System::EventHandler(this, &Register::txtBoxPass_Leave);
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::Gold;
			this->btnRegister->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18));
			this->btnRegister->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btnRegister->Location = System::Drawing::Point(181, 664);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(143, 55);
			this->btnRegister->TabIndex = 9;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &Register::btnRegister_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->txtBoxPass);
			this->Controls->Add(this->txtBoxEthnicty);
			this->Controls->Add(this->txtBoxGender);
			this->Controls->Add(this->txtBoxAddress);
			this->Controls->Add(this->txtBoxDOB);
			this->Controls->Add(this->txtBoxCellNum);
			this->Controls->Add(this->txtBoxEmail);
			this->Controls->Add(this->txtBoxUserName);
			this->Controls->Add(this->label1);
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		//This does nothing at all but when I remove it, the code doesn't run... DO NOT REMOVE
	}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void txtBoxUserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxUserName->Text == "Full Name")
	{
		txtBoxUserName->Text = "";
		txtBoxUserName->ForeColor = ForeColor.Gray;
	}
}
private: System::Void txtBoxUserName_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxUserName->Text == "")
	{
		txtBoxUserName->Text = "Full Name ";
		txtBoxUserName->ForeColor = ForeColor.Gray;
	}
}

private: System::Void txtBoxEmail_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxEmail->Text == "Email")
	{
		txtBoxEmail->Text = "";
		txtBoxEmail->ForeColor = ForeColor.Black;
	}
}
private: System::Void txtBoxEmail_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxEmail->Text == "")
	{
		txtBoxEmail->Text = "Email ";
		txtBoxEmail->ForeColor = ForeColor.Gray;
	}
}

private: System::Void txtBoxPass_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxPass->Text == "Password")
	{
		txtBoxPass->Text = "";
		txtBoxPass->ForeColor = ForeColor.Black;
	}	
}
private: System::Void txtBoxPass_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxPass->Text == "")
	{
		txtBoxPass->Text = "Password ";
		txtBoxPass->ForeColor = ForeColor.Gray;
	}
}

private: System::Void txtBoxDOB_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxDOB->Text == "D.o.B")
	{
		txtBoxDOB->Text = "";
		txtBoxDOB->ForeColor = ForeColor.Black;
	}
}
private: System::Void txtBoxDOB_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxDOB->Text == "")
	{
		txtBoxDOB->Text = "D.o.B ";
		txtBoxDOB->ForeColor = ForeColor.Gray;
	}
}

private: System::Void txtBoxAddress_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxAddress->Text == "Address")
	{
		txtBoxAddress->Text = "";
		txtBoxAddress->ForeColor = ForeColor.Black;
	}
}
private: System::Void txtBoxAddress_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxAddress->Text == "")
	{
		txtBoxAddress->Text = "Address ";
		txtBoxAddress->ForeColor = ForeColor.Gray;
	}
}

private: System::Void textBoxGender_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxGender->Text == "Gender")
	{
		txtBoxGender->Text = "";
		txtBoxGender->ForeColor = ForeColor.Black;
	}
}
private: System::Void txtBoxGender_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxGender->Text == "")
	{
		txtBoxGender->Text = "Gender ";
		txtBoxGender->ForeColor = ForeColor.Gray;
	}
}

private: System::Void txtBoxEthnicty_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxEthnicty->Text == "Ethnicty")
	{
		txtBoxEthnicty->Text = "";
		txtBoxEthnicty->ForeColor = ForeColor.Black;
	}
}
private: System::Void txtBoxEthnicty_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxEthnicty->Text == "")
	{
		txtBoxEthnicty->Text = "Ethnicty ";
		txtBoxEthnicty->ForeColor = ForeColor.Gray;
	}
}

private: System::Void txtBoxCellNum_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxCellNum->Text == "CellPhone Number")
	{
		txtBoxCellNum->Text = "";
		txtBoxCellNum->ForeColor = ForeColor.Black;
	}
}
private: System::Void txtBoxCellNum_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxCellNum->Text == "")
	{
		txtBoxCellNum->Text = "CellPhone Number ";
		txtBoxCellNum->ForeColor = ForeColor.Gray;
	}
}

private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ email = txtBoxEmail->Text;
	String^ password = txtBoxPass->Text;
	String^ fullname = txtBoxUserName->Text;
	String^ dob = txtBoxDOB->Text;
	String^ address = txtBoxAddress->Text;
	String^ gender = txtBoxGender->Text;
	String^ ethnicty = txtBoxEthnicty->Text;
	String^ cellnumber = txtBoxCellNum->Text;

	String^ filename = email + "_User_Data.txt";

	StreamWriter^ writer = gcnew StreamWriter(filename);
	//NOTE
	//The order of text saved to the text file IS NOT the same order as it is shown on the register page. DO NOT CHANGE
	writer->WriteLine(email);
	writer->WriteLine(password); 
	writer->WriteLine(fullname);	
	writer->WriteLine(dob);
	writer->WriteLine(address);
	writer->WriteLine(gender);
	writer->WriteLine(ethnicty);
	writer->WriteLine(cellnumber);

	writer->Close();

	txtBoxEmail->Text = "Email ";
	txtBoxPass->Text = "Password ";
	txtBoxUserName->Text = "Full Name ";
	txtBoxDOB->Text = "D.o.B ";
	txtBoxAddress->Text = "Address ";
	txtBoxGender->Text = "Gender ";
	txtBoxEthnicty->Text = "Ethnicty ";
	txtBoxCellNum->Text = "CellPhone Number ";

}
};
}
