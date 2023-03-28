#pragma once

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
	private: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::Label^ lbEmailBuff;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lbEmailBuff = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(108, 316);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 345);
			this->textBox1->TabIndex = 0;
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
			// AdminEditUserDets
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->lbEmailBuff);
			this->Controls->Add(this->textBox1);
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

	private: System::Void AdminEditUserDets_Load(System::Object^ sender, System::EventArgs^ e) {
		string UserInfoLoad = msclr::interop::marshal_as<std::string>(lbEmailBuff->Text);
		string line;
		string fileName = UserInfoLoad + "_User_Data.txt";
		ifstream myFile(fileName);

		if (myFile.is_open())
		{

		}
	}
	};
}
