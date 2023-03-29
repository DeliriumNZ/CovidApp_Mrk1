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
	/// Summary for AdminEditUserDets
	/// </summary>
	public ref class AdminEditUserDets : public System::Windows::Forms::Form
	{
	public:
		AdminEditUserDets(void)
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
		~AdminEditUserDets()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	public: System::Windows::Forms::Label^ lbEmailBuff;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Label^ lbUser;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminEditUserDets::typeid));
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->lbUser = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// lbEmailBuff
			// 
			this->lbEmailBuff->AutoSize = true;
			this->lbEmailBuff->Location = System::Drawing::Point(12, 9);
			this->lbEmailBuff->Name = L"lbEmailBuff";
			this->lbEmailBuff->Size = System::Drawing::Size(54, 13);
			this->lbEmailBuff->TabIndex = 1;
			this->lbEmailBuff->Text = L"Email Buff";
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(223, 254);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(75, 23);
			this->btnEdit->TabIndex = 2;
			this->btnEdit->Text = L"Save Edits";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &AdminEditUserDets::btnEdit_Click);
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
			this->lbUser->TabIndex = 13;
			this->lbUser->Text = L"User Name Here";
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
			this->label1->TabIndex = 14;
			this->label1->Text = L"User:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->richTextBox1->Location = System::Drawing::Point(86, 297);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(348, 340);
			this->richTextBox1->TabIndex = 15;
			this->richTextBox1->Text = L"";
			// 
			// AdminEditUserDets
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbUser);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->lbEmailBuff);
			this->Name = L"AdminEditUserDets";
			this->Text = L"AdminEditUserDets";
			this->Load += gcnew System::EventHandler(this, &AdminEditUserDets::AdminEditUserDets_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public://This recives the email text from AdminDash and stores it in a hidden label.
		void SetEmailText(System::String^ Text)
		{
			lbEmailBuff->Text = Text;
		}
	//As soon as the form loads, the whole txt file is shown in the textbox.
	private: System::Void AdminEditUserDets_Load(System::Object^ sender, System::EventArgs^ e) {
		string UserInfoLoad = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		string line;
		string fileName = UserInfoLoad + "_User_Data.txt";
		ifstream myFile(fileName);

		if (myFile.is_open())
		{
			std::string fileContents((std::istreambuf_iterator<char>(myFile)), std::istreambuf_iterator<char>());
			System::String^ textBoxContents = gcnew System::String(fileContents.c_str());
			//tbDisplayData->Text = textBoxContents;
			richTextBox1->Text = textBoxContents;
			myFile.close();
		}

		
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

	//Button saves the text back into the text file.
	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		string UserInfoSave = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		string line2;
		string fileName2 = UserInfoSave + "_User_Data.txt";
		ofstream myFile2(fileName2);

		if (myFile2.is_open())
		{
			std::string fileContents = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
			myFile2 << fileContents;
			myFile2.close();
			MessageBox::Show("Saved!");
		}
		else
		{
			MessageBox::Show("Failed to Open!");
		}
	}
};
}
