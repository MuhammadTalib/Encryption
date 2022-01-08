#pragma once
#include <iostream>
using namespace std;
namespace Cryptography {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
		public:
			MyForm(void)
			{
				InitializeComponent();
			}
			int cipher_algo = 0; //Shift=1, Viginere=2, Playfair=3
			const char *plain_text="";
	private: System::Windows::Forms::TextBox^ key;
	private: System::Windows::Forms::Label^ keylabel;
	public:

		   const char* cipher_text = "";
		protected:
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}
		protected:

		protected:



		private: void refresh() {
			CT->Text = "";
			PlainText->Text = "";
			this->cipher_text = "";
		}

		private: System::Windows::Forms::Splitter^ splitter2;

		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::RadioButton^ playfair;

		private: System::Windows::Forms::RadioButton^ shift;
		private: System::Windows::Forms::RadioButton^ viginere;
		private: System::Windows::Forms::TextBox^ PT;

		private: System::Windows::Forms::Label^ textlabel;
		private: System::Windows::Forms::Button^ encryptbtn;

		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::TextBox^ CT;
		private: System::Windows::Forms::Button^ decryptbutton;
		private: System::Windows::Forms::TextBox^ PlainText;



		private: System::Windows::Forms::Label^ label3;
		private: System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->playfair = (gcnew System::Windows::Forms::RadioButton());
			this->shift = (gcnew System::Windows::Forms::RadioButton());
			this->viginere = (gcnew System::Windows::Forms::RadioButton());
			this->PT = (gcnew System::Windows::Forms::TextBox());
			this->textlabel = (gcnew System::Windows::Forms::Label());
			this->encryptbtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CT = (gcnew System::Windows::Forms::TextBox());
			this->decryptbutton = (gcnew System::Windows::Forms::Button());
			this->PlainText = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->key = (gcnew System::Windows::Forms::TextBox());
			this->keylabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitter2
			// 
			this->splitter2->Location = System::Drawing::Point(0, 0);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(3, 418);
			this->splitter2->TabIndex = 6;
			this->splitter2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 418);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(32, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 24);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Select Algorithm";
			// 
			// playfair
			// 
			this->playfair->AutoSize = true;
			this->playfair->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playfair->Location = System::Drawing::Point(36, 150);
			this->playfair->Name = L"playfair";
			this->playfair->Size = System::Drawing::Size(136, 22);
			this->playfair->TabIndex = 12;
			this->playfair->TabStop = true;
			this->playfair->Text = L"Playfair Cipher";
			this->playfair->UseVisualStyleBackColor = true;
			this->playfair->Click += gcnew System::EventHandler(this, &MyForm::playfaircipher);
			// 
			// shift
			// 
			this->shift->AutoSize = true;
			this->shift->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shift->Location = System::Drawing::Point(36, 59);
			this->shift->Name = L"shift";
			this->shift->Size = System::Drawing::Size(114, 22);
			this->shift->TabIndex = 13;
			this->shift->TabStop = true;
			this->shift->Text = L"Shift Cipher";
			this->shift->UseVisualStyleBackColor = true;
			this->shift->Click += gcnew System::EventHandler(this, &MyForm::shiftcipher);
			// 
			// viginere
			// 
			this->viginere->AutoSize = true;
			this->viginere->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viginere->Location = System::Drawing::Point(36, 105);
			this->viginere->Name = L"viginere";
			this->viginere->Size = System::Drawing::Size(140, 22);
			this->viginere->TabIndex = 14;
			this->viginere->TabStop = true;
			this->viginere->Text = L"Viginere Cipher";
			this->viginere->UseVisualStyleBackColor = true;
			this->viginere->Click += gcnew System::EventHandler(this, &MyForm::viginerecipher);
			// 
			// PT
			// 
			this->PT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PT->Location = System::Drawing::Point(269, 48);
			this->PT->Name = L"PT";
			this->PT->Size = System::Drawing::Size(168, 24);
			this->PT->TabIndex = 15;
			this->PT->TextChanged += gcnew System::EventHandler(this, &MyForm::text_changed);
			// 
			// textlabel
			// 
			this->textlabel->AutoSize = true;
			this->textlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textlabel->Location = System::Drawing::Point(266, 19);
			this->textlabel->Name = L"textlabel";
			this->textlabel->Size = System::Drawing::Size(71, 16);
			this->textlabel->TabIndex = 16;
			this->textlabel->Text = L"Enter Text:";
			// 
			// encryptbtn
			// 
			this->encryptbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->encryptbtn->Location = System::Drawing::Point(311, 94);
			this->encryptbtn->Name = L"encryptbtn";
			this->encryptbtn->Size = System::Drawing::Size(77, 33);
			this->encryptbtn->TabIndex = 17;
			this->encryptbtn->Text = L"Encrypt";
			this->encryptbtn->UseVisualStyleBackColor = true;
			this->encryptbtn->Click += gcnew System::EventHandler(this, &MyForm::encrypt);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(269, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Cipher Text:";
			// 
			// CT
			// 
			this->CT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CT->Location = System::Drawing::Point(272, 179);
			this->CT->Name = L"CT";
			this->CT->Size = System::Drawing::Size(165, 24);
			this->CT->TabIndex = 19;
			// 
			// decryptbutton
			// 
			this->decryptbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decryptbutton->Location = System::Drawing::Point(311, 226);
			this->decryptbutton->Name = L"decryptbutton";
			this->decryptbutton->Size = System::Drawing::Size(77, 33);
			this->decryptbutton->TabIndex = 20;
			this->decryptbutton->Text = L"Decrypt";
			this->decryptbutton->UseVisualStyleBackColor = true;
			this->decryptbutton->Click += gcnew System::EventHandler(this, &MyForm::decrypt);
			// 
			// PlainText
			// 
			this->PlainText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlainText->Location = System::Drawing::Point(272, 299);
			this->PlainText->Name = L"PlainText";
			this->PlainText->Size = System::Drawing::Size(165, 24);
			this->PlainText->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(269, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 16);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Plain Text:";
			// 
			// key
			// 
			this->key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->key->Location = System::Drawing::Point(469, 48);
			this->key->Name = L"key";
			this->key->Size = System::Drawing::Size(111, 24);
			this->key->TabIndex = 23;
			this->key->Visible = false;
			// 
			// keylabel
			// 
			this->keylabel->AutoSize = true;
			this->keylabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keylabel->Location = System::Drawing::Point(466, 19);
			this->keylabel->Name = L"keylabel";
			this->keylabel->Size = System::Drawing::Size(34, 16);
			this->keylabel->TabIndex = 24;
			this->keylabel->Text = L"Key:";
			this->keylabel->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(689, 418);
			this->Controls->Add(this->keylabel);
			this->Controls->Add(this->key);
			this->Controls->Add(this->PlainText);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->decryptbutton);
			this->Controls->Add(this->CT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->encryptbtn);
			this->Controls->Add(this->textlabel);
			this->Controls->Add(this->PT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->viginere);
			this->Controls->Add(this->shift);
			this->Controls->Add(this->playfair);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->splitter2);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"MyForm";
			this->Text = L"CryptAnalysis";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		private: System::Void encrypt(System::Object^ sender, System::EventArgs^ e) {
			if (this->cipher_algo == 1) {  //shift cipher 
				key->Text = "this->plain_text";
				
			}
			else if (this->cipher_algo == 2) {  //viginere cipher

			}
			else if (this->cipher_algo == 3) {  //playfair cipher

			}
			CT->Text = PT->Text;
		}
		private: System::Void decrypt(System::Object^ sender, System::EventArgs^ e) {
			PlainText->Text = e->ToString();
		}
		private: System::Void shiftcipher(System::Object^ sender, System::EventArgs^ e) {
			this->cipher_algo = 1;
			key->Visible = true;
			keylabel->Visible = true;
			this->refresh();
		}
		private: System::Void viginerecipher(System::Object^ sender, System::EventArgs^ e) {
			this->cipher_algo = 2;
			key->Visible = false;
			keylabel->Visible = false;
			this->refresh();
		}
		private: System::Void playfaircipher(System::Object^ sender, System::EventArgs^ e) {
			this->cipher_algo = 3;
			key->Visible = false;
			keylabel->Visible = false;
			this->refresh();
		}
		private: System::Void text_changed(System::Object^ sender, System::EventArgs^ e) {
			this->plain_text =( const char ) e->ToString();
		}
};
}
