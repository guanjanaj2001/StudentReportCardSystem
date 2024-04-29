#pragma once

namespace StudentReportCardSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Submit;
	protected:
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ update;

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
			this->Submit = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->update = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// Submit
			// 
			this->Submit->Location = System::Drawing::Point(576, 380);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(75, 23);
			this->Submit->TabIndex = 24;
			this->Submit->Text = L"Submit";
			this->Submit->UseVisualStyleBackColor = true;
			// 
			// Clear
			// 
			this->Clear->Location = System::Drawing::Point(332, 380);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(75, 23);
			this->Clear->TabIndex = 23;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(426, 319);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(244, 20);
			this->textBox3->TabIndex = 22;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(332, 288);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(63, 51);
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(432, 297);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 19);
			this->label2->TabIndex = 20;
			this->label2->Text = L"PASSWORD";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(426, 262);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(244, 20);
			this->textBox4->TabIndex = 19;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(332, 231);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(63, 51);
			this->pictureBox4->TabIndex = 18;
			this->pictureBox4->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(432, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 19);
			this->label6->TabIndex = 17;
			this->label6->Text = L"USERNAME";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(426, 205);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 20);
			this->textBox2->TabIndex = 15;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(332, 174);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(63, 51);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(432, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 19);
			this->label4->TabIndex = 13;
			this->label4->Text = L"NAME";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 20);
			this->textBox1->TabIndex = 12;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(33, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(63, 51);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(133, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 19);
			this->label3->TabIndex = 10;
			this->label3->Text = L"STUDENT ID";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->update);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->Submit);
			this->panel1->Controls->Add(this->Clear);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(92, 55);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(700, 450);
			this->panel1->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Location = System::Drawing::Point(299, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(401, 125);
			this->panel4->TabIndex = 25;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(277, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 25;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(300, 450);
			this->panel2->TabIndex = 0;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(27, 265);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(244, 20);
			this->textBox8->TabIndex = 36;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(27, 408);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(244, 20);
			this->textBox5->TabIndex = 34;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(300, 225);
			this->panel3->TabIndex = 0;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(65, 30);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(170, 170);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(26, 243);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 19);
			this->label8->TabIndex = 35;
			this->label8->Text = L"STUDENT ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 386);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 19);
			this->label1->TabIndex = 32;
			this->label1->Text = L"PASSWORD";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(26, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 19);
			this->label7->TabIndex = 26;
			this->label7->Text = L"NAME";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(27, 357);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(244, 20);
			this->textBox6->TabIndex = 31;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Admin::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(27, 310);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(244, 20);
			this->textBox7->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 19);
			this->label5->TabIndex = 29;
			this->label5->Text = L"USERNAME";
			// 
			// update
			// 
			this->update->Location = System::Drawing::Point(454, 380);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(75, 23);
			this->update->TabIndex = 26;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = true;
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel1);
			this->Name = L"Admin";
			this->Text = L"Admin";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
