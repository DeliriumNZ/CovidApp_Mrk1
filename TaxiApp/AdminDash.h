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
	private: System::Windows::Forms::TextBox^ tbSearch;
	protected:
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ lbTest;

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
			this->lbTest = (gcnew System::Windows::Forms::Label());
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
			// lbTest
			// 
			this->lbTest->AutoSize = true;
			this->lbTest->Location = System::Drawing::Point(189, 426);
			this->lbTest->Name = L"lbTest";
			this->lbTest->Size = System::Drawing::Size(117, 13);
			this->lbTest->TabIndex = 2;
			this->lbTest->Text = L"PLACEHOLDER TEXT";
			// 
			// AdminDash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->lbTest);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->tbSearch);
			this->Name = L"AdminDash";
			this->Text = L"AdminDash";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*
		bool checkLogin(string tbSearchText)
		{
			string line;
			string fileName = tbSearchText + "_User_Data.txt";
			ifstream myFile(fileName);

			if (myFile.is_open())
			{
				while (getline(myFile, line))
				{
					if (line == tbSearchText)
					{
						getline(myFile, line);
					}
				}
				myFile.close();
			}
			return false; // Login failed
		}
		*/


	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		string SearchBar = msclr::interop::marshal_as<std::string>(tbSearch->Text);
		string line;
		string fileName = SearchBar + "_User_Data.txt";
		ifstream myFile(fileName);

		if (myFile.is_open())
		{
			MessageBox::Show("User found!");
		}
		else
		{
			MessageBox::Show("User not found!");
		}

	}
	};
}
