#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <ctime>
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
	private: System::Windows::Forms::Button^ btnEditTests;
	private: System::Windows::Forms::Button^ btnEditVaccines;
	private: System::Windows::Forms::Button^ btnCompleted;
	private: System::Windows::Forms::Button^ btnPartial;
	private: System::Windows::Forms::Button^ btnUnvaccinat;

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
			this->btnEditTests = (gcnew System::Windows::Forms::Button());
			this->btnEditVaccines = (gcnew System::Windows::Forms::Button());
			this->btnCompleted = (gcnew System::Windows::Forms::Button());
			this->btnPartial = (gcnew System::Windows::Forms::Button());
			this->btnUnvaccinat = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// rtbSaveTests
			// 
			this->rtbSaveTests->Location = System::Drawing::Point(96, 284);
			this->rtbSaveTests->Name = L"rtbSaveTests";
			this->rtbSaveTests->Size = System::Drawing::Size(337, 153);
			this->rtbSaveTests->TabIndex = 3;
			this->rtbSaveTests->Text = L"";
			// 
			// btnSaveTests
			// 
			this->btnSaveTests->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveTests->Location = System::Drawing::Point(293, 234);
			this->btnSaveTests->Name = L"btnSaveTests";
			this->btnSaveTests->Size = System::Drawing::Size(106, 23);
			this->btnSaveTests->TabIndex = 2;
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
			this->lbEmailBuff->TabIndex = 0;
			this->lbEmailBuff->Text = L"Email Buff";
			this->lbEmailBuff->Visible = false;
			// 
			// btnSaveVaccines
			// 
			this->btnSaveVaccines->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveVaccines->Location = System::Drawing::Point(293, 450);
			this->btnSaveVaccines->Name = L"btnSaveVaccines";
			this->btnSaveVaccines->Size = System::Drawing::Size(127, 23);
			this->btnSaveVaccines->TabIndex = 5;
			this->btnSaveVaccines->Text = L"Save Vaccines";
			this->btnSaveVaccines->UseVisualStyleBackColor = true;
			this->btnSaveVaccines->Click += gcnew System::EventHandler(this, &AdminUserDoc::btnSaveVaccines_Click);
			// 
			// rtbSaveVaccines
			// 
			this->rtbSaveVaccines->Location = System::Drawing::Point(96, 494);
			this->rtbSaveVaccines->Name = L"rtbSaveVaccines";
			this->rtbSaveVaccines->Size = System::Drawing::Size(337, 153);
			this->rtbSaveVaccines->TabIndex = 6;
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
			this->lbUser->TabIndex = 0;
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
			this->lbUserNotUsed->TabIndex = 0;
			this->lbUserNotUsed->Text = L"User:";
			// 
			// btnEditTests
			// 
			this->btnEditTests->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditTests->Location = System::Drawing::Point(121, 234);
			this->btnEditTests->Name = L"btnEditTests";
			this->btnEditTests->Size = System::Drawing::Size(114, 23);
			this->btnEditTests->TabIndex = 1;
			this->btnEditTests->Text = L"Edit Tests";
			this->btnEditTests->UseVisualStyleBackColor = true;
			this->btnEditTests->Click += gcnew System::EventHandler(this, &AdminUserDoc::btnEditTests_Click);
			// 
			// btnEditVaccines
			// 
			this->btnEditVaccines->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditVaccines->Location = System::Drawing::Point(114, 450);
			this->btnEditVaccines->Name = L"btnEditVaccines";
			this->btnEditVaccines->Size = System::Drawing::Size(121, 23);
			this->btnEditVaccines->TabIndex = 4;
			this->btnEditVaccines->Text = L"Edit Vaccines";
			this->btnEditVaccines->UseVisualStyleBackColor = true;
			this->btnEditVaccines->Click += gcnew System::EventHandler(this, &AdminUserDoc::btnEditVaccines_Click);
			// 
			// btnCompleted
			// 
			this->btnCompleted->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCompleted->Location = System::Drawing::Point(96, 671);
			this->btnCompleted->Name = L"btnCompleted";
			this->btnCompleted->Size = System::Drawing::Size(97, 23);
			this->btnCompleted->TabIndex = 7;
			this->btnCompleted->Text = L"Completed";
			this->btnCompleted->UseVisualStyleBackColor = true;
			this->btnCompleted->Click += gcnew System::EventHandler(this, &AdminUserDoc::btnCompleted_Click);
			// 
			// btnPartial
			// 
			this->btnPartial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPartial->Location = System::Drawing::Point(224, 671);
			this->btnPartial->Name = L"btnPartial";
			this->btnPartial->Size = System::Drawing::Size(75, 23);
			this->btnPartial->TabIndex = 8;
			this->btnPartial->Text = L"Partial";
			this->btnPartial->UseVisualStyleBackColor = true;
			this->btnPartial->Click += gcnew System::EventHandler(this, &AdminUserDoc::btnPartial_Click);
			// 
			// btnUnvaccinat
			// 
			this->btnUnvaccinat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUnvaccinat->Location = System::Drawing::Point(321, 671);
			this->btnUnvaccinat->Name = L"btnUnvaccinat";
			this->btnUnvaccinat->Size = System::Drawing::Size(112, 23);
			this->btnUnvaccinat->TabIndex = 9;
			this->btnUnvaccinat->Text = L"Unvaccinated";
			this->btnUnvaccinat->UseVisualStyleBackColor = true;
			this->btnUnvaccinat->Click += gcnew System::EventHandler(this, &AdminUserDoc::btnUnvaccinat_Click);
			// 
			// AdminUserDoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->btnUnvaccinat);
			this->Controls->Add(this->btnPartial);
			this->Controls->Add(this->btnCompleted);
			this->Controls->Add(this->btnEditVaccines);
			this->Controls->Add(this->btnEditTests);
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

//Button for saving and editing Test Records
private: System::Void btnSaveTests_Click(System::Object^ sender, System::EventArgs^ e) {
	string UserTestSave = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	string LineData2;
	string FileNameTests = UserTestSave + "_User_Test_Records.txt";
	ofstream UserTests(FileNameTests);

	if (UserTests.is_open())
	{
		std::string rtbSaveTestsContents = msclr::interop::marshal_as<std::string>(rtbSaveTests->Text);
		UserTests << rtbSaveTestsContents;
		UserTests.close();
		MessageBox::Show("Saved!");


		//Getting System Time and Date
		time_t now = time(0);
		struct tm timeinfo;
		localtime_s(&timeinfo, &now);
		char buffer[80];
		strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeinfo);
		string DATE = buffer;

		//Open File / Save message into file / Close File
		ofstream TestResults("Test_Results_Log.txt");
		string msgOne = ("Test Results for ");		
		string msgTwo = (" have been saved @ ");
		TestResults << msgOne + UserTestSave + msgTwo + DATE;
		TestResults.close();

	}
	else
	{
		MessageBox::Show("Failed to Open!");
	}
}
private: System::Void btnEditTests_Click(System::Object^ sender, System::EventArgs^ e) {
	string UserInfoLoad = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	string line;
	string fileName = UserInfoLoad + "_User_Test_Records.txt"; //example Nathan@email.com_User_Test_Records
	ifstream myFile(fileName);

	if (myFile.is_open())
	{
		std::string fileContents((std::istreambuf_iterator<char>(myFile)), std::istreambuf_iterator<char>());
		System::String^ textBoxContents = gcnew System::String(fileContents.c_str());
		rtbSaveTests->Text = textBoxContents;
		myFile.close();
	}
	else
	{
		MessageBox::Show("Failed to Open!");
	}
}



//Button for saving and editing Vaccine Records
private: System::Void btnSaveVaccines_Click(System::Object^ sender, System::EventArgs^ e) {
	string UserVaccineSave = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	string FileNameVacs = UserVaccineSave + "_User_Vaccine_Records.txt";
	ofstream UserVaccines(FileNameVacs);

	if (UserVaccines.is_open()) //is Nathan@email.com_User_Vaccine_Records.txt open?
	{
		std::string rtbSaveTestsContents = msclr::interop::marshal_as<std::string>(rtbSaveVaccines->Text);
		UserVaccines << rtbSaveTestsContents;
		UserVaccines.close();
		MessageBox::Show("Saved!");

		//Getting System Time and Date
		time_t now = time(0);
		struct tm timeinfo;
		localtime_s(&timeinfo, &now);
		char buffer[80];
		strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeinfo);
		string DATE = buffer;

		//Open File / Save message into file / Close File
		ofstream VaccineCert("Vaccine_Cert_Log.txt");
		string msgOne = ("Vaccine Certificates for ");
		string msgTwo = (" have been saved @ ");
		VaccineCert << msgOne + UserVaccineSave + msgTwo + DATE << endl << endl;
		VaccineCert.close();
	}
	else
	{
		MessageBox::Show("Failed to Open!");
	}
}
private: System::Void btnEditVaccines_Click(System::Object^ sender, System::EventArgs^ e) {
	string UserInfoLoad = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
	string line;
	string fileName = UserInfoLoad + "_User_Vaccine_Records.txt";
	ifstream myFile(fileName);

	if (myFile.is_open())
	{
		std::string fileContents((std::istreambuf_iterator<char>(myFile)), std::istreambuf_iterator<char>());
		System::String^ textBoxContents = gcnew System::String(fileContents.c_str());
		rtbSaveVaccines->Text = textBoxContents;
		myFile.close();
	}
	else
	{
		MessageBox::Show("Failed to Open!");
	}
}


private: System::Void btnCompleted_Click(System::Object^ sender, System::EventArgs^ e) {
	//Open File / Add a line 1st line? / Change Text / Close
	//Read 1st line and Edit First Line Only!
	if (rtbSaveVaccines->Text == "")
	{
		//If text if blank, do not update. This stops any loss of data
		MessageBox::Show("Cannot currently update! User information cannot be blank, click edit first.");
	}
	else
	{
		string UpdateVacStatus = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		string FileNameVacs = UpdateVacStatus + "_User_Vaccine_Records.txt";
		ifstream VacStatus(FileNameVacs);
		string line;
		std::getline(VacStatus, line);

		line = "Vaccine Status: Completed!";
		VacStatus.close();
		ofstream outFile(FileNameVacs);

		string rtbTextV = msclr::interop::marshal_as<std::string>(rtbSaveVaccines->Text);
		outFile << line << endl << endl;
		outFile << rtbTextV;
		outFile.close();

		MessageBox::Show("Edit has been made");
	}

}

private: System::Void btnPartial_Click(System::Object^ sender, System::EventArgs^ e) {
	if (rtbSaveVaccines->Text == "")
	{
		//If text if blank, do not update. This stops any loss of data
		MessageBox::Show("Cannot currently update! User information cannot be blank, click edit first.");
	}
	else
	{
		string UpdateVacStatus = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		string FileNameVacs = UpdateVacStatus + "_User_Vaccine_Records.txt";
		ifstream VacStatus(FileNameVacs);
		string line;
		std::getline(VacStatus, line);

		line = "Vaccine Status: Partial!";
		VacStatus.close();
		ofstream outFile(FileNameVacs);

		string rtbTextV = msclr::interop::marshal_as<std::string>(rtbSaveVaccines->Text);
		outFile << line << endl << endl;
		outFile << rtbTextV;
		outFile.close();

		MessageBox::Show("Edit has been made");
	}
}

private: System::Void btnUnvaccinat_Click(System::Object^ sender, System::EventArgs^ e) {
	//Make text blank, then update with Unvax line...

		string UpdateVacStatus = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		string rtbTextV = msclr::interop::marshal_as<std::string>(rtbSaveVaccines->Text);

		string FileNameVacs = UpdateVacStatus + "_User_Vaccine_Records.txt";
		ifstream VacStatus(FileNameVacs);
		string line;
		std::getline(VacStatus, line);

		line = "Vaccine Status: Unvaccinated!";
		VacStatus.close();
		ofstream outFile(FileNameVacs);

		rtbTextV = "";
		outFile << rtbTextV;
		outFile << line << endl << endl;		
		outFile.close();

		MessageBox::Show("Edit has been made");
}
};
}
