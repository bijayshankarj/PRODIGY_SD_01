#pragma once
#include<Windows.h>
#include<shellapi.h>
#pragma comment(lib, "Shell32")

namespace TemperatureConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TempConversion
	/// </summary>
	public ref class TempConversion : public System::Windows::Forms::Form
	{
	public:
		TempConversion(void)
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
		~TempConversion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ inputins;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ show;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ mylink;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ convertto;

	private: System::Windows::Forms::Button^ convert;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TempConversion::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputins = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->show = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->mylink = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->convertto = (gcnew System::Windows::Forms::ComboBox());
			this->convert = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(459, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Temperature Conversion";
			// 
			// inputins
			// 
			this->inputins->Location = System::Drawing::Point(88, 76);
			this->inputins->Name = L"inputins";
			this->inputins->Size = System::Drawing::Size(164, 20);
			this->inputins->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label2->Location = System::Drawing::Point(17, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Degree°:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label3->Location = System::Drawing::Point(17, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Result:";
			// 
			// show
			// 
			this->show->AutoSize = true;
			this->show->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->show->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->show->Location = System::Drawing::Point(85, 116);
			this->show->Name = L"show";
			this->show->Size = System::Drawing::Size(0, 17);
			this->show->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label4->Location = System::Drawing::Point(188, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"NIT Durgapur";
			// 
			// mylink
			// 
			this->mylink->AutoSize = true;
			this->mylink->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mylink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->mylink->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->mylink->LinkColor = System::Drawing::Color::Navy;
			this->mylink->Location = System::Drawing::Point(67, 237);
			this->mylink->Name = L"mylink";
			this->mylink->Size = System::Drawing::Size(115, 13);
			this->mylink->TabIndex = 10;
			this->mylink->TabStop = true;
			this->mylink->Text = L"Bijay Shankar Jaiswara";
			this->mylink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &TempConversion::mylink_LinkClicked);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->label5->Location = System::Drawing::Point(263, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"bijay.shankar4321@gmail.com";
			// 
			// convertto
			// 
			this->convertto->FormattingEnabled = true;
			this->convertto->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Fahrenheit To Celcius", L"Celcius To Fahrenheit",
					L"Kelvin To Celcius", L"Celcius To Kelvin", L"Fahrenheit To Kelvin", L"Kelvin To Fahrenheit"
			});
			this->convertto->Location = System::Drawing::Point(321, 74);
			this->convertto->Name = L"convertto";
			this->convertto->Size = System::Drawing::Size(121, 21);
			this->convertto->TabIndex = 12;
			this->convertto->Text = L"Select";
			// 
			// convert
			// 
			this->convert->BackColor = System::Drawing::SystemColors::ControlLight;
			this->convert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convert->Location = System::Drawing::Point(152, 173);
			this->convert->Name = L"convert";
			this->convert->Size = System::Drawing::Size(164, 31);
			this->convert->TabIndex = 13;
			this->convert->Text = L"Convert";
			this->convert->UseVisualStyleBackColor = false;
			this->convert->Click += gcnew System::EventHandler(this, &TempConversion::convert_Click);
			// 
			// TempConversion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(478, 257);
			this->Controls->Add(this->convert);
			this->Controls->Add(this->convertto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->mylink);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->show);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->inputins);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TempConversion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TempConversion";
			this->Load += gcnew System::EventHandler(this, &TempConversion::TempConversion_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TempConversion_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void ftoc_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void ctok_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void ctof_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void mylink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	//system("start https://www.google.com");
	ShellExecuteA(NULL, NULL, "https://www.linkedin.com/in/bijay-shankar-jaiswara/", NULL, NULL, SW_SHOWNORMAL);
}
private: System::Void convert_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->inputins->Text->Trim() == "") {
		MessageBox::Show("Please Enter a valid input", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if(this->convertto->Text->Trim() != "Select") {
		if (this->convertto->Text == "Kelvin To Celcius") {
			double result = System::Convert::ToDouble(inputins->Text) + 273.15;
			show->Text = System::Convert::ToString(result) + "°C";
		}
		else if(this->convertto->Text == "Celcius To Kelvin"){
			double result = System::Convert::ToDouble(inputins->Text) - 273.15;
			float result1 = (int)(result * 100 + .5);
			float ans = (float)result1 / 100;
			show->Text = System::Convert::ToString(ans) + " K";

		}
		else if (this->convertto->Text == "Fahrenheit To Celcius") {
			double result = (System::Convert::ToDouble(inputins->Text) - 32) * 5 / 9;
			//result = (result * 100) + .5;
			float result1 = (int)(result * 100 + .5);
			float ans = (float)result1 / 100;

			show->Text = System::Convert::ToString(ans) + "°C";

		}
		else if (this->convertto->Text == "Celcius To Fahrenheit") {
			double result = System::Convert::ToDouble(inputins->Text) * 1.80 + 32;
			//result = (result * 100) + .5;
			float result1 = (int)(result * 100 + .5);
			float ans = (float)result1 / 100;

			show->Text = System::Convert::ToString(ans) + "°F";

		}
		else if (this->convertto->Text == "Fahrenheit To Kelvin") {
			double result = (System::Convert::ToDouble(inputins->Text) - 32) * 5 / 9;
			//result = (result * 100) + .5;
			float result1 = (int)(result * 100 + .5);
			float ans = (float)result1 / 100 -273.15;

			show->Text = System::Convert::ToString(ans) + " K";

		}
		else if (this->convertto->Text == "Kelvin To Fahrenheit") {
			double result = (System::Convert::ToDouble(inputins->Text)-273.15) * 1.80 + 32;
			//result = (result * 100) + .5;
			float result1 = (int)(result * 100 + .5);
			float ans = (float)result1 / 100;

			show->Text = System::Convert::ToString(ans) + "°F";

		}
		
	}
	else {
		MessageBox::Show("Please Select an option", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
