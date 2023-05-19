#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cifra1;
	protected:
	private: System::Windows::Forms::Button^ cifra2;
	private: System::Windows::Forms::Button^ cifra3;
	private: System::Windows::Forms::Button^ adunare;
	private: System::Windows::Forms::Button^ scadere;
	private: System::Windows::Forms::Button^ cifra6;
	private: System::Windows::Forms::Button^ cifra5;
	private: System::Windows::Forms::Button^ cifra4;
	private: System::Windows::Forms::Button^ inmultire;
	private: System::Windows::Forms::Button^ cifra9;
	private: System::Windows::Forms::Button^ cifra8;
	private: System::Windows::Forms::Button^ cifra7;
	private: System::Windows::Forms::Button^ impartire;
	private: System::Windows::Forms::Button^ egal;
	private: System::Windows::Forms::Button^ virgula;
	private: System::Windows::Forms::Button^ cifra0;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::TextBox^ TextBox;

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
			this->cifra1 = (gcnew System::Windows::Forms::Button());
			this->cifra2 = (gcnew System::Windows::Forms::Button());
			this->cifra3 = (gcnew System::Windows::Forms::Button());
			this->adunare = (gcnew System::Windows::Forms::Button());
			this->scadere = (gcnew System::Windows::Forms::Button());
			this->cifra6 = (gcnew System::Windows::Forms::Button());
			this->cifra5 = (gcnew System::Windows::Forms::Button());
			this->cifra4 = (gcnew System::Windows::Forms::Button());
			this->inmultire = (gcnew System::Windows::Forms::Button());
			this->cifra9 = (gcnew System::Windows::Forms::Button());
			this->cifra8 = (gcnew System::Windows::Forms::Button());
			this->cifra7 = (gcnew System::Windows::Forms::Button());
			this->impartire = (gcnew System::Windows::Forms::Button());
			this->egal = (gcnew System::Windows::Forms::Button());
			this->virgula = (gcnew System::Windows::Forms::Button());
			this->cifra0 = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cifra1
			// 
			this->cifra1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra1->Location = System::Drawing::Point(25, 127);
			this->cifra1->Name = L"cifra1";
			this->cifra1->Size = System::Drawing::Size(54, 54);
			this->cifra1->TabIndex = 0;
			this->cifra1->Text = L"1";
			this->cifra1->UseVisualStyleBackColor = false;
			this->cifra1->Click += gcnew System::EventHandler(this, &Form1::cifra1_Click);
			// 
			// cifra2
			// 
			this->cifra2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra2->Location = System::Drawing::Point(85, 127);
			this->cifra2->Name = L"cifra2";
			this->cifra2->Size = System::Drawing::Size(54, 54);
			this->cifra2->TabIndex = 1;
			this->cifra2->Text = L"2";
			this->cifra2->UseVisualStyleBackColor = false;
			this->cifra2->Click += gcnew System::EventHandler(this, &Form1::cifra2_Click);
			// 
			// cifra3
			// 
			this->cifra3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra3->Location = System::Drawing::Point(145, 127);
			this->cifra3->Name = L"cifra3";
			this->cifra3->Size = System::Drawing::Size(54, 54);
			this->cifra3->TabIndex = 2;
			this->cifra3->Text = L"3";
			this->cifra3->UseVisualStyleBackColor = false;
			this->cifra3->Click += gcnew System::EventHandler(this, &Form1::cifra3_Click);
			// 
			// adunare
			// 
			this->adunare->BackColor = System::Drawing::SystemColors::GrayText;
			this->adunare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adunare->Location = System::Drawing::Point(205, 127);
			this->adunare->Name = L"adunare";
			this->adunare->Size = System::Drawing::Size(54, 54);
			this->adunare->TabIndex = 3;
			this->adunare->Text = L"+";
			this->adunare->UseVisualStyleBackColor = false;
			this->adunare->Click += gcnew System::EventHandler(this, &Form1::adunare_Click);
			// 
			// scadere
			// 
			this->scadere->BackColor = System::Drawing::SystemColors::GrayText;
			this->scadere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scadere->Location = System::Drawing::Point(205, 187);
			this->scadere->Name = L"scadere";
			this->scadere->Size = System::Drawing::Size(54, 54);
			this->scadere->TabIndex = 7;
			this->scadere->Text = L"-";
			this->scadere->UseVisualStyleBackColor = false;
			this->scadere->Click += gcnew System::EventHandler(this, &Form1::scadere_Click);
			// 
			// cifra6
			// 
			this->cifra6->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra6->Location = System::Drawing::Point(145, 187);
			this->cifra6->Name = L"cifra6";
			this->cifra6->Size = System::Drawing::Size(54, 54);
			this->cifra6->TabIndex = 6;
			this->cifra6->Text = L"6";
			this->cifra6->UseVisualStyleBackColor = false;
			this->cifra6->Click += gcnew System::EventHandler(this, &Form1::cifra6_Click);
			// 
			// cifra5
			// 
			this->cifra5->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra5->Location = System::Drawing::Point(85, 187);
			this->cifra5->Name = L"cifra5";
			this->cifra5->Size = System::Drawing::Size(54, 54);
			this->cifra5->TabIndex = 5;
			this->cifra5->Text = L"5";
			this->cifra5->UseVisualStyleBackColor = false;
			this->cifra5->Click += gcnew System::EventHandler(this, &Form1::cifra5_Click);
			// 
			// cifra4
			// 
			this->cifra4->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra4->Location = System::Drawing::Point(25, 187);
			this->cifra4->Name = L"cifra4";
			this->cifra4->Size = System::Drawing::Size(54, 54);
			this->cifra4->TabIndex = 4;
			this->cifra4->Text = L"4";
			this->cifra4->UseVisualStyleBackColor = false;
			this->cifra4->Click += gcnew System::EventHandler(this, &Form1::cifra4_Click);
			// 
			// inmultire
			// 
			this->inmultire->BackColor = System::Drawing::SystemColors::GrayText;
			this->inmultire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inmultire->Location = System::Drawing::Point(205, 247);
			this->inmultire->Name = L"inmultire";
			this->inmultire->Size = System::Drawing::Size(54, 54);
			this->inmultire->TabIndex = 11;
			this->inmultire->Text = L"*";
			this->inmultire->UseVisualStyleBackColor = false;
			this->inmultire->Click += gcnew System::EventHandler(this, &Form1::inmultire_Click);
			// 
			// cifra9
			// 
			this->cifra9->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra9->Location = System::Drawing::Point(145, 247);
			this->cifra9->Name = L"cifra9";
			this->cifra9->Size = System::Drawing::Size(54, 54);
			this->cifra9->TabIndex = 10;
			this->cifra9->Text = L"9";
			this->cifra9->UseVisualStyleBackColor = false;
			this->cifra9->Click += gcnew System::EventHandler(this, &Form1::cifra9_Click);
			// 
			// cifra8
			// 
			this->cifra8->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra8->Location = System::Drawing::Point(85, 247);
			this->cifra8->Name = L"cifra8";
			this->cifra8->Size = System::Drawing::Size(54, 54);
			this->cifra8->TabIndex = 9;
			this->cifra8->Text = L"8";
			this->cifra8->UseVisualStyleBackColor = false;
			this->cifra8->Click += gcnew System::EventHandler(this, &Form1::cifra8_Click);
			// 
			// cifra7
			// 
			this->cifra7->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra7->Location = System::Drawing::Point(25, 247);
			this->cifra7->Name = L"cifra7";
			this->cifra7->Size = System::Drawing::Size(54, 54);
			this->cifra7->TabIndex = 8;
			this->cifra7->Text = L"7";
			this->cifra7->UseVisualStyleBackColor = false;
			this->cifra7->Click += gcnew System::EventHandler(this, &Form1::cifra7_Click);
			// 
			// impartire
			// 
			this->impartire->BackColor = System::Drawing::SystemColors::GrayText;
			this->impartire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->impartire->Location = System::Drawing::Point(205, 307);
			this->impartire->Name = L"impartire";
			this->impartire->Size = System::Drawing::Size(54, 54);
			this->impartire->TabIndex = 15;
			this->impartire->Text = L"/";
			this->impartire->UseVisualStyleBackColor = false;
			this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click);
			// 
			// egal
			// 
			this->egal->BackColor = System::Drawing::SystemColors::GrayText;
			this->egal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->egal->Location = System::Drawing::Point(145, 307);
			this->egal->Name = L"egal";
			this->egal->Size = System::Drawing::Size(54, 54);
			this->egal->TabIndex = 14;
			this->egal->Text = L"=";
			this->egal->UseVisualStyleBackColor = false;
			this->egal->Click += gcnew System::EventHandler(this, &Form1::egal_Click);
			// 
			// virgula
			// 
			this->virgula->BackColor = System::Drawing::SystemColors::GrayText;
			this->virgula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->virgula->Location = System::Drawing::Point(85, 307);
			this->virgula->Name = L"virgula";
			this->virgula->Size = System::Drawing::Size(54, 54);
			this->virgula->TabIndex = 13;
			this->virgula->Text = L".";
			this->virgula->UseVisualStyleBackColor = false;
			this->virgula->Click += gcnew System::EventHandler(this, &Form1::virgula_Click);
			// 
			// cifra0
			// 
			this->cifra0->BackColor = System::Drawing::SystemColors::HotTrack;
			this->cifra0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cifra0->Location = System::Drawing::Point(25, 307);
			this->cifra0->Name = L"cifra0";
			this->cifra0->Size = System::Drawing::Size(54, 54);
			this->cifra0->TabIndex = 12;
			this->cifra0->Text = L"0";
			this->cifra0->UseVisualStyleBackColor = false;
			this->cifra0->Click += gcnew System::EventHandler(this, &Form1::cifra0_Click);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->Location = System::Drawing::Point(25, 367);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(234, 54);
			this->Clear->TabIndex = 16;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &Form1::Clear_Click);
			// 
			// TextBox
			// 
			this->TextBox->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0), true));
			this->TextBox->Location = System::Drawing::Point(25, 30);
			this->TextBox->Multiline = true;
			this->TextBox->Name = L"TextBox";
			this->TextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TextBox->Size = System::Drawing::Size(234, 78);
			this->TextBox->TabIndex = 17;
			this->TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(292, 473);
			this->Controls->Add(this->TextBox);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->impartire);
			this->Controls->Add(this->egal);
			this->Controls->Add(this->virgula);
			this->Controls->Add(this->cifra0);
			this->Controls->Add(this->inmultire);
			this->Controls->Add(this->cifra9);
			this->Controls->Add(this->cifra8);
			this->Controls->Add(this->cifra7);
			this->Controls->Add(this->scadere);
			this->Controls->Add(this->cifra6);
			this->Controls->Add(this->cifra5);
			this->Controls->Add(this->cifra4);
			this->Controls->Add(this->adunare);
			this->Controls->Add(this->cifra3);
			this->Controls->Add(this->cifra2);
			this->Controls->Add(this->cifra1);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void cifra1_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "1";
	}
private: System::Void cifra2_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "2";
}
private: System::Void cifra3_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "3";
}
private: System::Void cifra4_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "4";
}
private: System::Void cifra5_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "5";
}
private: System::Void cifra6_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "6";
}
private: System::Void cifra7_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "7";
}
private: System::Void cifra8_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "8";
}
private: System::Void cifra9_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "9";
}
private: System::Void cifra0_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += "0";
}
private: double firstNum = 0;
private:double secondNum = 0;
	   //private:bool opPerformed = false;
private:String^ operation = "";

private: System::Void virgula_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Text += ",";
}
private: System::Void egal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox->Text != "") {
		secondNum = Double::Parse(TextBox->Text);
		
		if (operation == "+") {
			TextBox->Text=(firstNum + secondNum).ToString();
		}
		else if (operation == "-") {
			TextBox->Text=(firstNum - secondNum).ToString();
		}
		else if (operation == "*") {
			TextBox->Text=(firstNum * secondNum).ToString();
		}
		else if (operation == "/") {
			if (secondNum != 0) {
				TextBox->Text=(firstNum / secondNum).ToString();
			}
			else {
				TextBox->Text = "Error:Cannot divide by zero";
			}
		}
	}
}
private: System::Void impartire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox->Text != "")
	{
		firstNum = Double::Parse(TextBox->Text);
		TextBox->Text = "";
		operation = "/";
		TextBox->Text = "";
	}
}
private: System::Void inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox->Text != "")
	{
		firstNum = Double::Parse(TextBox->Text);
		TextBox->Text = "";
		operation = "*";
		TextBox->Text = "";
	}
}
private: System::Void scadere_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox->Text != "")
	{
		firstNum = Double::Parse(TextBox->Text);
		TextBox->Text = "";
		operation = "-";
		TextBox->Text = "";
	}
}
private: System::Void adunare_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TextBox->Text != "")
	{
		firstNum = Double::Parse(TextBox->Text);
		TextBox->Text = "";
		operation = "+";
		TextBox->Text = "";
	}
	
}
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBox->Clear();
}
};
}
