#pragma once

#include"ControladorRegistroDeFalha.h"
#include <msclr\marshal_cppstd.h>

namespace Mantenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for telaRegistroDeFalha1
	/// </summary>
	public ref class telaRegistroDeFalha1 : public System::Windows::Forms::Form
	{
	public:
		telaRegistroDeFalha1(void)
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
		~telaRegistroDeFalha1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelMantenikola;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  botãoContinuar;

	private: System::Windows::Forms::Button^  botãoCancelar;

	private: System::Windows::Forms::DataGridView^  tabelaMotores;
	private: System::Windows::Forms::GroupBox^  telaRegistroDeFalha2;
	private: System::Windows::Forms::Button^  botãoDescartarMotor;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  botãoCadastrar;
	private: System::Windows::Forms::ComboBox^  cbModoDeFalha;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textProvidencia;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textModelo;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  erroModoDeFalha;
	private: System::Windows::Forms::Label^  erroProvidencia;
	private: System::Windows::Forms::Label^  label9;

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
			this->labelMantenikola = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->botãoContinuar = (gcnew System::Windows::Forms::Button());
			this->botãoCancelar = (gcnew System::Windows::Forms::Button());
			this->tabelaMotores = (gcnew System::Windows::Forms::DataGridView());
			this->telaRegistroDeFalha2 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->erroProvidencia = (gcnew System::Windows::Forms::Label());
			this->erroModoDeFalha = (gcnew System::Windows::Forms::Label());
			this->botãoDescartarMotor = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->botãoCadastrar = (gcnew System::Windows::Forms::Button());
			this->cbModoDeFalha = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textProvidencia = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textModelo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaMotores))->BeginInit();
			this->telaRegistroDeFalha2->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelMantenikola
			// 
			this->labelMantenikola->AutoSize = true;
			this->labelMantenikola->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->labelMantenikola->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelMantenikola->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelMantenikola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMantenikola->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelMantenikola->Location = System::Drawing::Point(0, 0);
			this->labelMantenikola->Name = L"labelMantenikola";
			this->labelMantenikola->Size = System::Drawing::Size(108, 22);
			this->labelMantenikola->TabIndex = 13;
			this->labelMantenikola->Text = L"Mantenikola";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(275, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Registro de falha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Selecione o motor";
			// 
			// botãoContinuar
			// 
			this->botãoContinuar->Location = System::Drawing::Point(31, 309);
			this->botãoContinuar->Name = L"botãoContinuar";
			this->botãoContinuar->Size = System::Drawing::Size(110, 38);
			this->botãoContinuar->TabIndex = 16;
			this->botãoContinuar->Text = L"Continuar";
			this->botãoContinuar->UseVisualStyleBackColor = true;
			this->botãoContinuar->Click += gcnew System::EventHandler(this, &telaRegistroDeFalha1::botãoContinuar_Click);
			// 
			// botãoCancelar
			// 
			this->botãoCancelar->Location = System::Drawing::Point(483, 309);
			this->botãoCancelar->Name = L"botãoCancelar";
			this->botãoCancelar->Size = System::Drawing::Size(110, 38);
			this->botãoCancelar->TabIndex = 17;
			this->botãoCancelar->Text = L"Cancelar";
			this->botãoCancelar->UseVisualStyleBackColor = true;
			this->botãoCancelar->Click += gcnew System::EventHandler(this, &telaRegistroDeFalha1::botãoCancelar_Click);
			// 
			// tabelaMotores
			// 
			this->tabelaMotores->AllowUserToAddRows = false;
			this->tabelaMotores->AllowUserToDeleteRows = false;
			this->tabelaMotores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaMotores->Location = System::Drawing::Point(110, 51);
			this->tabelaMotores->MultiSelect = false;
			this->tabelaMotores->Name = L"tabelaMotores";
			this->tabelaMotores->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tabelaMotores->Size = System::Drawing::Size(445, 234);
			this->tabelaMotores->TabIndex = 18;
			// 
			// telaRegistroDeFalha2
			// 
			this->telaRegistroDeFalha2->Controls->Add(this->label9);
			this->telaRegistroDeFalha2->Controls->Add(this->erroProvidencia);
			this->telaRegistroDeFalha2->Controls->Add(this->erroModoDeFalha);
			this->telaRegistroDeFalha2->Controls->Add(this->botãoDescartarMotor);
			this->telaRegistroDeFalha2->Controls->Add(this->button1);
			this->telaRegistroDeFalha2->Controls->Add(this->botãoCadastrar);
			this->telaRegistroDeFalha2->Controls->Add(this->cbModoDeFalha);
			this->telaRegistroDeFalha2->Controls->Add(this->textBox4);
			this->telaRegistroDeFalha2->Controls->Add(this->textProvidencia);
			this->telaRegistroDeFalha2->Controls->Add(this->textBox2);
			this->telaRegistroDeFalha2->Controls->Add(this->textModelo);
			this->telaRegistroDeFalha2->Controls->Add(this->label6);
			this->telaRegistroDeFalha2->Controls->Add(this->label5);
			this->telaRegistroDeFalha2->Controls->Add(this->label4);
			this->telaRegistroDeFalha2->Controls->Add(this->label3);
			this->telaRegistroDeFalha2->Controls->Add(this->label7);
			this->telaRegistroDeFalha2->Controls->Add(this->label8);
			this->telaRegistroDeFalha2->Location = System::Drawing::Point(0, 0);
			this->telaRegistroDeFalha2->Name = L"telaRegistroDeFalha2";
			this->telaRegistroDeFalha2->Size = System::Drawing::Size(625, 390);
			this->telaRegistroDeFalha2->TabIndex = 19;
			this->telaRegistroDeFalha2->TabStop = false;
			this->telaRegistroDeFalha2->Text = L"Registro de falha";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 22);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Mantenikola";
			// 
			// erroProvidencia
			// 
			this->erroProvidencia->AutoSize = true;
			this->erroProvidencia->ForeColor = System::Drawing::Color::Red;
			this->erroProvidencia->Location = System::Drawing::Point(120, 269);
			this->erroProvidencia->Name = L"erroProvidencia";
			this->erroProvidencia->Size = System::Drawing::Size(0, 13);
			this->erroProvidencia->TabIndex = 29;
			// 
			// erroModoDeFalha
			// 
			this->erroModoDeFalha->AutoSize = true;
			this->erroModoDeFalha->ForeColor = System::Drawing::Color::Red;
			this->erroModoDeFalha->Location = System::Drawing::Point(253, 215);
			this->erroModoDeFalha->Name = L"erroModoDeFalha";
			this->erroModoDeFalha->Size = System::Drawing::Size(0, 13);
			this->erroModoDeFalha->TabIndex = 28;
			// 
			// botãoDescartarMotor
			// 
			this->botãoDescartarMotor->Location = System::Drawing::Point(477, 265);
			this->botãoDescartarMotor->Name = L"botãoDescartarMotor";
			this->botãoDescartarMotor->Size = System::Drawing::Size(100, 39);
			this->botãoDescartarMotor->TabIndex = 27;
			this->botãoDescartarMotor->Text = L"Descartar motor";
			this->botãoDescartarMotor->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(383, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 39);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &telaRegistroDeFalha1::button1_Click);
			// 
			// botãoCadastrar
			// 
			this->botãoCadastrar->Location = System::Drawing::Point(120, 341);
			this->botãoCadastrar->Name = L"botãoCadastrar";
			this->botãoCadastrar->Size = System::Drawing::Size(100, 39);
			this->botãoCadastrar->TabIndex = 25;
			this->botãoCadastrar->Text = L"Cadastrar";
			this->botãoCadastrar->UseVisualStyleBackColor = true;
			this->botãoCadastrar->Click += gcnew System::EventHandler(this, &telaRegistroDeFalha1::botãoCadastrar_Click);
			// 
			// cbModoDeFalha
			// 
			this->cbModoDeFalha->FormattingEnabled = true;
			this->cbModoDeFalha->Location = System::Drawing::Point(253, 187);
			this->cbModoDeFalha->Name = L"cbModoDeFalha";
			this->cbModoDeFalha->Size = System::Drawing::Size(138, 21);
			this->cbModoDeFalha->TabIndex = 24;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(409, 187);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 23;
			// 
			// textProvidencia
			// 
			this->textProvidencia->Location = System::Drawing::Point(253, 249);
			this->textProvidencia->Multiline = true;
			this->textProvidencia->Name = L"textProvidencia";
			this->textProvidencia->Size = System::Drawing::Size(203, 67);
			this->textProvidencia->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 20);
			this->textBox2->TabIndex = 21;
			// 
			// textModelo
			// 
			this->textModelo->Location = System::Drawing::Point(253, 72);
			this->textModelo->Name = L"textModelo";
			this->textModelo->Size = System::Drawing::Size(138, 20);
			this->textModelo->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(427, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Outro:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(119, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Providência tomada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(266, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Registro de falha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(123, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Modo de falha";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(144, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Mecânico";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(155, 75);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Motor";
			// 
			// telaRegistroDeFalha1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 388);
			this->Controls->Add(this->telaRegistroDeFalha2);
			this->Controls->Add(this->tabelaMotores);
			this->Controls->Add(this->botãoCancelar);
			this->Controls->Add(this->botãoContinuar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelMantenikola);
			this->Name = L"telaRegistroDeFalha1";
			this->Text = L"Registro de falha";
			this->Load += gcnew System::EventHandler(this, &telaRegistroDeFalha1::telaRegistroDeFalha1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaMotores))->EndInit();
			this->telaRegistroDeFalha2->ResumeLayout(false);
			this->telaRegistroDeFalha2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void telaRegistroDeFalha1_Load(System::Object^  sender, System::EventArgs^  e) {
		telaRegistroDeFalha2->Hide();
		AllocConsole();
		freopen("CONOUT$", "w", stdout);
		
		ControladorRegistroDeFalha::materializarModosDeFalha();
		for (int i = 0; i < ControladorRegistroDeFalha::getModosDeFalha().size(); i++) {
			try {
				cbModoDeFalha->Items->Add(msclr::interop::marshal_as<System::String^>(ControladorRegistroDeFalha::getModosDeFalha()[i]->getNome()));
			}
			catch (...) {
				break;
			}
		}

		DataTable^ tabelaFalha = ControladorRegistroDeFalha::getTabelaDeFalhas();
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = tabelaFalha;
		tabelaMotores->DataSource = bSource;
	}
	
	private: System::Void botãoCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void botãoContinuar_Click(System::Object^  sender, System::EventArgs^  e) {
		telaRegistroDeFalha2->Show();
		textModelo->Text = tabelaMotores->SelectedRows[0]->Cells[0]->Value->ToString() + " " + tabelaMotores->SelectedRows[0]->Cells[1]->Value->ToString();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		telaRegistroDeFalha2->Hide();
	}
	private: System::Void botãoCadastrar_Click(System::Object^  sender, System::EventArgs^  e) {
		erroModoDeFalha->Text = "";
		erroProvidencia->Text = "";

		if (String::IsNullOrEmpty(cbModoDeFalha->Text) || String::IsNullOrWhiteSpace(cbModoDeFalha-> Text)) {
			erroModoDeFalha->Text = "Selecione um modo de falha!";
		}
		else if (String::IsNullOrEmpty(textProvidencia->Text) || String::IsNullOrWhiteSpace(textProvidencia->Text)) {
			erroProvidencia->Text = "Descreva a providência tomada!";
		}
		else {

		}

	}
};
}
