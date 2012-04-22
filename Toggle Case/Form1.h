//	Copyright (C) 2008, 2012 Vaptistis Anogeianakis <el05208@mail.ntua.gr>
/*
 *	This file is part of Toggle Case.
 *
 *	Toggle Case is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	Toggle Case is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with Toggle Case.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once


namespace ToggleCase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::Label^  originalLabel;
	private: System::Windows::Forms::Label^  convertedLabel;
	private: System::Windows::Forms::TextBox^  originalText;
	private: System::Windows::Forms::TextBox^  convertedText;
	private: System::Windows::Forms::RadioButton^  toggleButton;

	private: System::Windows::Forms::RadioButton^  upperButton;
	private: System::Windows::Forms::RadioButton^  lowerButton;
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
			this->originalLabel = (gcnew System::Windows::Forms::Label());
			this->convertedLabel = (gcnew System::Windows::Forms::Label());
			this->originalText = (gcnew System::Windows::Forms::TextBox());
			this->convertedText = (gcnew System::Windows::Forms::TextBox());
			this->toggleButton = (gcnew System::Windows::Forms::RadioButton());
			this->upperButton = (gcnew System::Windows::Forms::RadioButton());
			this->lowerButton = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// originalLabel
			// 
			this->originalLabel->AutoSize = true;
			this->originalLabel->Location = System::Drawing::Point(12, 3);
			this->originalLabel->Name = L"originalLabel";
			this->originalLabel->Size = System::Drawing::Size(63, 13);
			this->originalLabel->TabIndex = 0;
			this->originalLabel->Text = L"original text:";
			this->originalLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// convertedLabel
			// 
			this->convertedLabel->AutoSize = true;
			this->convertedLabel->Location = System::Drawing::Point(12, 42);
			this->convertedLabel->Name = L"convertedLabel";
			this->convertedLabel->Size = System::Drawing::Size(78, 13);
			this->convertedLabel->TabIndex = 1;
			this->convertedLabel->Text = L"converted text:";
			// 
			// originalText
			// 
			this->originalText->Location = System::Drawing::Point(12, 19);
			this->originalText->Name = L"originalText";
			this->originalText->Size = System::Drawing::Size(180, 20);
			this->originalText->TabIndex = 2;
			this->originalText->TextChanged += gcnew System::EventHandler(this, &Form1::originalText_TextChanged);
			// 
			// convertedText
			// 
			this->convertedText->Location = System::Drawing::Point(12, 58);
			this->convertedText->Name = L"convertedText";
			this->convertedText->ReadOnly = true;
			this->convertedText->Size = System::Drawing::Size(180, 20);
			this->convertedText->TabIndex = 3;
			// 
			// toggleButton
			// 
			this->toggleButton->AutoSize = true;
			this->toggleButton->Checked = true;
			this->toggleButton->Location = System::Drawing::Point(225, 19);
			this->toggleButton->Name = L"toggleButton";
			this->toggleButton->Size = System::Drawing::Size(80, 17);
			this->toggleButton->TabIndex = 4;
			this->toggleButton->TabStop = true;
			this->toggleButton->Text = L"toggle case";
			this->toggleButton->UseVisualStyleBackColor = true;
			this->toggleButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::switchButton_CheckedChanged);
			// 
			// upperButton
			// 
			this->upperButton->AutoSize = true;
			this->upperButton->Location = System::Drawing::Point(225, 42);
			this->upperButton->Name = L"upperButton";
			this->upperButton->Size = System::Drawing::Size(81, 17);
			this->upperButton->TabIndex = 5;
			this->upperButton->TabStop = true;
			this->upperButton->Text = L"make upper";
			this->upperButton->UseVisualStyleBackColor = true;
			this->upperButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::upperButton_CheckedChanged);
			// 
			// lowerButton
			// 
			this->lowerButton->AutoSize = true;
			this->lowerButton->Location = System::Drawing::Point(225, 65);
			this->lowerButton->Name = L"lowerButton";
			this->lowerButton->Size = System::Drawing::Size(79, 17);
			this->lowerButton->TabIndex = 6;
			this->lowerButton->TabStop = true;
			this->lowerButton->Text = L"make lower";
			this->lowerButton->UseVisualStyleBackColor = true;
			this->lowerButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::lowerButton_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 84);
			this->Controls->Add(this->lowerButton);
			this->Controls->Add(this->upperButton);
			this->Controls->Add(this->toggleButton);
			this->Controls->Add(this->convertedText);
			this->Controls->Add(this->originalText);
			this->Controls->Add(this->convertedLabel);
			this->Controls->Add(this->originalLabel);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(60000000, 122);
			this->MinimumSize = System::Drawing::Size(215, 122);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Toggle Case";
			this->SizeChanged += gcnew System::EventHandler(this, &Form1::Form1_SizeChanged);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void changeText(void)
		{
			if(upperButton->Checked)
				convertedText->Text = originalText->Text->ToUpper();
			else if(lowerButton->Checked)
				convertedText->Text = originalText->Text->ToLower();
			else if(toggleButton->Checked)
			{
				System::CharEnumerator ^p;

				convertedText->Text = "";
				p = originalText->Text->GetEnumerator();
				while(p->MoveNext())
					convertedText->Text += toggleCase(p->Current);				
			}
		}

	private: System::Void originalText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 changeText();
			 }
private: System::Void Form1_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
			 originalText->Width = Form1::Width - 140;
			 convertedText->Width = Form1::Width - 140;
			 toggleButton->Left = Form1::Width - 95;
			 upperButton->Left = Form1::Width - 95;
			 lowerButton->Left = Form1::Width - 95;
		 }

private: System::Void switchButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 changeText();
		 }
private: System::Void upperButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 changeText();
		 }
private: System::Void lowerButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 changeText();
		 }

private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(e->KeyChar == '\033')
				 exit(0);
		 }

};
}

