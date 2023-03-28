#pragma once

namespace TaxiApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ btnAdminDetails;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ tbSearch;
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
			this->btnAdminDetails = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnAdminDetails
			// 
			this->btnAdminDetails->BackColor = System::Drawing::Color::Transparent;
			this->btnAdminDetails->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnAdminDetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdminDetails->Location = System::Drawing::Point(81, 405);
			this->btnAdminDetails->Name = L"btnAdminDetails";
			this->btnAdminDetails->Size = System::Drawing::Size(359, 65);
			this->btnAdminDetails->TabIndex = 0;
			this->btnAdminDetails->UseVisualStyleBackColor = false;
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
			// tbSearch
			// 
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->Location = System::Drawing::Point(81, 239);
			this->tbSearch->Multiline = true;
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(288, 50);
			this->tbSearch->TabIndex = 2;
			// 
			// AdminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(519, 759);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->btnAdminDetails);
			this->Name = L"AdminMenu";
			this->Text = L"AdminMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
