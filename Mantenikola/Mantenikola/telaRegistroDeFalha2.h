#pragma once

namespace Mantenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for telaRegistroDeFalha2
	/// </summary>
	public ref class telaRegistroDeFalha2 : public System::Windows::Forms::Form
	{
	public:
		telaRegistroDeFalha2(void)
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
		~telaRegistroDeFalha2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  bot�oCadastrar;

	private: System::Windows::Forms::Button^  bot�oCancelar;

	private: System::Windows::Forms::Button^  bot�oDescartarMotor;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bot�oCadastrar = (gcnew System::Windows::Forms::Button());
			this->bot�oCancelar = (gcnew System::Windows::Forms::Button());
			this->bot�oDescartarMotor = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(152, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Motor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(141, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mec�nico";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(130, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Modo de falha";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(263, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Registro de falha";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(116, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Provid�ncia tomada";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(424, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Outro:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(250, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(250, 144);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(250, 268);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(203, 67);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(406, 206);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(250, 206);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// bot�oCadastrar
			// 
			this->bot�oCadastrar->Location = System::Drawing::Point(117, 360);
			this->bot�oCadastrar->Name = L"bot�oCadastrar";
			this->bot�oCadastrar->Size = System::Drawing::Size(100, 39);
			this->bot�oCadastrar->TabIndex = 11;
			this->bot�oCadastrar->Text = L"Cadastrar";
			this->bot�oCadastrar->UseVisualStyleBackColor = true;
			// 
			// bot�oCancelar
			// 
			this->bot�oCancelar->Location = System::Drawing::Point(380, 360);
			this->bot�oCancelar->Name = L"bot�oCancelar";
			this->bot�oCancelar->Size = System::Drawing::Size(100, 39);
			this->bot�oCancelar->TabIndex = 12;
			this->bot�oCancelar->Text = L"Cancelar";
			this->bot�oCancelar->UseVisualStyleBackColor = true;
			// 
			// bot�oDescartarMotor
			// 
			this->bot�oDescartarMotor->Location = System::Drawing::Point(474, 284);
			this->bot�oDescartarMotor->Name = L"bot�oDescartarMotor";
			this->bot�oDescartarMotor->Size = System::Drawing::Size(100, 39);
			this->bot�oDescartarMotor->TabIndex = 13;
			this->bot�oDescartarMotor->Text = L"Descartar motor";
			this->bot�oDescartarMotor->UseVisualStyleBackColor = true;
			// 
			// telaRegistroDeFalha2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 439);
			this->Controls->Add(this->bot�oDescartarMotor);
			this->Controls->Add(this->bot�oCancelar);
			this->Controls->Add(this->bot�oCadastrar);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"telaRegistroDeFalha2";
			this->Text = L"telaRegistroDeFalha2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
