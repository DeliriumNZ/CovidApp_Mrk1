#pragma once
#include "AdminMenu.h"

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
	/// Summary for AdminDash
	/// </summary>
	public ref class AdminDash : public System::Windows::Forms::Form
	{
	public:
		AdminDash(void)
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
		~AdminDash()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ tbSearch;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDash::typeid));
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbSearch
			// 
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->Location = System::Drawing::Point(81, 239);
			this->tbSearch->Multiline = true;
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(288, 50);
			this->tbSearch->TabIndex = 0;
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(375, 239);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(66, 50);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &AdminDash::btnSearch_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->label1->Location = System::Drawing::Point(77, 366);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(353, 24);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Enter the users full Email  address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->label2->Location = System::Drawing::Point(77, 390);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(329, 24);
			this->label2->TabIndex = 18;
			this->label2->Text = L"and then push search to display";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F));
			this->label3->Location = System::Drawing::Point(77, 414);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 24);
			this->label3->TabIndex = 19;
			this->label3->Text = L"more options.";
			// 
			// AdminDash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->tbSearch);
			this->Name = L"AdminDash";
			this->Text = L"AdminDash";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//Sending email over to AdminMenu form to assist in opening user details file. pt1
public:
	property String^ lbEmailBuffText
	{
		String^ get()
		{
			return tbSearch->Text;
		}
	}


	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		string SearchBar = msclr::interop::marshal_as<std::string>(tbSearch->Text);
		string line;
		string fileName = SearchBar + "_User_Data.txt";
		ifstream myFile(fileName);

		if (myFile.is_open())
		{
			AdminMenu^ adminMenuForm = gcnew AdminMenu();
			adminMenuForm->SetEmailText(tbSearch->Text); //Sending email over to AdminMenu pt2
			adminMenuForm->ShowDialog(); //NOTE CHANGE ALL ->SHOW TO ->SHOWDIALOG!!!
		}
		else
		{
			MessageBox::Show("User not found!");
		}
	}
	};
}