#pragma once
#include "Register.h"
#include "DashBoard.h"
#include "AdminDash.h"
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
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::TextBox^ txtBoxUserPass;
	protected:

	private: System::Windows::Forms::TextBox^ txtBoxUserName;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbSignUp;
	private: System::Windows::Forms::Label^ lbBuffer;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtBoxUserPass = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbSignUp = (gcnew System::Windows::Forms::Label());
			this->lbBuffer = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::Gold;
			this->btnLogin->FlatAppearance->BorderSize = 0;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::SystemColors::Control;
			this->btnLogin->Location = System::Drawing::Point(127, 522);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(263, 74);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// txtBoxUserPass
			// 
			this->txtBoxUserPass->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxUserPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxUserPass->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxUserPass->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxUserPass->Location = System::Drawing::Point(127, 399);
			this->txtBoxUserPass->Name = L"txtBoxUserPass";
			this->txtBoxUserPass->PasswordChar = '*';
			this->txtBoxUserPass->Size = System::Drawing::Size(263, 28);
			this->txtBoxUserPass->TabIndex = 3;
			this->txtBoxUserPass->Text = L"Password";
			this->txtBoxUserPass->Enter += gcnew System::EventHandler(this, &Login::txtBoxUserPass_TextChanged);
			// 
			// txtBoxUserName
			// 
			this->txtBoxUserName->BackColor = System::Drawing::Color::Gainsboro;
			this->txtBoxUserName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBoxUserName->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBoxUserName->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtBoxUserName->Location = System::Drawing::Point(127, 302);
			this->txtBoxUserName->Name = L"txtBoxUserName";
			this->txtBoxUserName->Size = System::Drawing::Size(263, 32);
			this->txtBoxUserName->TabIndex = 2;
			this->txtBoxUserName->Text = L"Email@exm.com";
			this->txtBoxUserName->Enter += gcnew System::EventHandler(this, &Login::txtBoxUserName_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(214, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 32);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Unite";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(199, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 32);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Against";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gold;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(187, 211);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 32);
			this->label3->TabIndex = 11;
			this->label3->Text = L"COVID-19";
			// 
			// lbSignUp
			// 
			this->lbSignUp->AutoSize = true;
			this->lbSignUp->BackColor = System::Drawing::Color::Transparent;
			this->lbSignUp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbSignUp->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSignUp->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbSignUp->Location = System::Drawing::Point(213, 608);
			this->lbSignUp->Name = L"lbSignUp";
			this->lbSignUp->Size = System::Drawing::Size(85, 15);
			this->lbSignUp->TabIndex = 5;
			this->lbSignUp->Text = L"Sign up now";
			this->lbSignUp->Click += gcnew System::EventHandler(this, &Login::lbSignUp_Click);
			// 
			// lbBuffer
			// 
			this->lbBuffer->AutoSize = true;
			this->lbBuffer->Location = System::Drawing::Point(12, 9);
			this->lbBuffer->Name = L"lbBuffer";
			this->lbBuffer->Size = System::Drawing::Size(264, 13);
			this->lbBuffer->TabIndex = 1;
			this->lbBuffer->Text = L"This Label is a buffer and will hide when app is running";
			this->lbBuffer->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(127, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(127, 383);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Password";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lbBuffer);
			this->Controls->Add(this->lbSignUp);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtBoxUserName);
			this->Controls->Add(this->txtBoxUserPass);
			this->Controls->Add(this->btnLogin);
			this->DoubleBuffered = true;
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//Is loging correct
bool checkLogin(string email, string password)
		{
			string line;
			string fileName = email + "_User_Data.txt";
			ifstream myFile(fileName);

			if (myFile.is_open())
			{
				while (getline(myFile, line))
				{
					if (line == email)
					{
						getline(myFile, line);
						if (line == password)
						{
							myFile.close();
							return true; // Login successful
						}
					}
				}
				myFile.close();
			}
			return false; // Login failed
		}


private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	string email = msclr::interop::marshal_as<std::string>(txtBoxUserName->Text);
	string password = msclr::interop::marshal_as<std::string>(txtBoxUserPass->Text);
	
	if (email == "Admin" && password == "AdminPass")
	{
		AdminDash^ adminDashForm = gcnew AdminDash();
		adminDashForm->ShowDialog();
	}
	else if (checkLogin(email, password))
	{
		//Reading the file to gain users username
		string fileName = email + "_User_Data.txt";		
		ifstream infile(fileName);
		string line;
		getline(infile, line);
		getline(infile, line);
		//^^ Line 1 & 2 of file skipped
		getline(infile, line);
		//^^ Reading line 3, location of user name
		infile.close();


		DashBoard^ dashboardForm = gcnew DashBoard(txtBoxUserName->Text);
		dashboardForm->ShowDialog();
	}

	else
	{
		MessageBox::Show("Invalid email or password");
	}
	
}
public:
	property String^ Email {
		String^ get() {
			return txtBoxUserName->Text;
		}
		void set(String^ value) {
			txtBoxUserName->Text = value;
		}
	}
private: System::Void lbSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Register^ regForm = gcnew Register();
	//Open Register window
	regForm->ShowDialog();

}
private: System::Void txtBoxUserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxUserName->Text == "Email@exm.com")
	{
		txtBoxUserName->Text = "";
		txtBoxUserName->ForeColor = ForeColor.Black;
	}
	
}
private: System::Void txtBoxUserPass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtBoxUserPass->Text == "Password")
	{
		txtBoxUserPass->Text = "";
		txtBoxUserPass->ForeColor = ForeColor.Black;
	}
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
