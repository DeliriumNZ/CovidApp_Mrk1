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

	private: System::Windows::Forms::Button^ btnSearch;
	public: System::Windows::Forms::TextBox^ tbSearch2;
	public: System::Windows::Forms::Label^ lbEmailBuff;
	private: System::Windows::Forms::Button^ btnDetails;
	private: System::Windows::Forms::Button^ btnTestRecords;
	private: System::Windows::Forms::Button^ btnQRCode;
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
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->tbSearch2 = (gcnew System::Windows::Forms::TextBox());
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->btnDetails = (gcnew System::Windows::Forms::Button());
			this->btnTestRecords = (gcnew System::Windows::Forms::Button());
			this->btnQRCode = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(375, 239);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(66, 50);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			// 
			// tbSearch2
			// 
			this->tbSearch2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch2->Location = System::Drawing::Point(81, 239);
			this->tbSearch2->Multiline = true;
			this->tbSearch2->Name = L"tbSearch2";
			this->tbSearch2->Size = System::Drawing::Size(288, 50);
			this->tbSearch2->TabIndex = 2;
			// 
			// lbEmailBuff
			// 
			this->lbEmailBuff->AutoSize = true;
			this->lbEmailBuff->Location = System::Drawing::Point(12, 9);
			this->lbEmailBuff->Name = L"lbEmailBuff";
			this->lbEmailBuff->Size = System::Drawing::Size(54, 13);
			this->lbEmailBuff->TabIndex = 0;
			this->lbEmailBuff->Text = L"Email Buff";
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
			this->btnDetails->TabIndex = 0;
			this->btnDetails->Text = L"Details";
			this->btnDetails->UseVisualStyleBackColor = true;
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
			this->btnTestRecords->TabIndex = 0;
			this->btnTestRecords->Text = L"  Test Records";
			this->btnTestRecords->UseVisualStyleBackColor = false;
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
			this->btnQRCode->TabIndex = 0;
			this->btnQRCode->Text = L"QR Code";
			this->btnQRCode->UseVisualStyleBackColor = false;
			// 
			// AdminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->btnQRCode);
			this->Controls->Add(this->btnTestRecords);
			this->Controls->Add(this->btnDetails);
			this->Controls->Add(this->lbEmailBuff);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->tbSearch2);
			this->Name = L"AdminMenu";
			this->Text = L"AdminMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public://This recives the email text from AdminDash and stores it in a hidden label.
	void SetEmailText(System::String^ Text)
	{
		lbEmailBuff->Text = Text;
	}

	};
}
