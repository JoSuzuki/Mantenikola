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
	private: System::Windows::Forms::Label^  labelResultadoCadastro;
	private: System::Windows::Forms::Label^  erroMecanico;
	private: System::Windows::Forms::GroupBox^  popupFalha;
	private: System::Windows::Forms::Button^  botãoFalha;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  popupSucesso;
	private: System::Windows::Forms::Button^  botãoSucesso;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;

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
			this->popupFalha = (gcnew System::Windows::Forms::GroupBox());
			this->botãoFalha = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->popupSucesso = (gcnew System::Windows::Forms::GroupBox());
			this->botãoSucesso = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->erroMecanico = (gcnew System::Windows::Forms::Label());
			this->labelResultadoCadastro = (gcnew System::Windows::Forms::Label());
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
			this->popupFalha->SuspendLayout();
			this->popupSucesso->SuspendLayout();
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(275, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 29);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Registro de falha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Selecione o motor";
			// 
			// botãoContinuar
			// 
			this->botãoContinuar->Location = System::Drawing::Point(110, 497);
			this->botãoContinuar->Name = L"botãoContinuar";
			this->botãoContinuar->Size = System::Drawing::Size(110, 38);
			this->botãoContinuar->TabIndex = 16;
			this->botãoContinuar->Text = L"Continuar";
			this->botãoContinuar->UseVisualStyleBackColor = true;
			this->botãoContinuar->Click += gcnew System::EventHandler(this, &telaRegistroDeFalha1::botãoContinuar_Click);
			// 
			// botãoCancelar
			// 
			this->botãoCancelar->Location = System::Drawing::Point(559, 497);
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
			this->tabelaMotores->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tabelaMotores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaMotores->Location = System::Drawing::Point(110, 51);
			this->tabelaMotores->MultiSelect = false;
			this->tabelaMotores->Name = L"tabelaMotores";
			this->tabelaMotores->ReadOnly = true;
			this->tabelaMotores->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tabelaMotores->Size = System::Drawing::Size(580, 417);
			this->tabelaMotores->TabIndex = 18;
			// 
			// telaRegistroDeFalha2
			// 
			this->telaRegistroDeFalha2->Controls->Add(this->popupSucesso);
			this->telaRegistroDeFalha2->Controls->Add(this->erroMecanico);
			this->telaRegistroDeFalha2->Controls->Add(this->labelResultadoCadastro);
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
			this->telaRegistroDeFalha2->Size = System::Drawing::Size(788, 566);
			this->telaRegistroDeFalha2->TabIndex = 19;
			this->telaRegistroDeFalha2->TabStop = false;
			this->telaRegistroDeFalha2->Text = L"Registro de falha";
			// 
			// popupFalha
			// 
			this->popupFalha->Controls->Add(this->botãoFalha);
			this->popupFalha->Controls->Add(this->label13);
			this->popupFalha->Controls->Add(this->label11);
			this->popupFalha->Location = System::Drawing::Point(0, 1);
			this->popupFalha->Name = L"popupFalha";
			this->popupFalha->Size = System::Drawing::Size(362, 153);
			this->popupFalha->TabIndex = 34;
			this->popupFalha->TabStop = false;
			this->popupFalha->Text = L"groupBox2";
			// 
			// botãoFalha
			// 
			this->botãoFalha->Location = System::Drawing::Point(131, 103);
			this->botãoFalha->Name = L"botãoFalha";
			this->botãoFalha->Size = System::Drawing::Size(75, 23);
			this->botãoFalha->TabIndex = 33;
			this->botãoFalha->Text = L"OK =(";
			this->botãoFalha->UseVisualStyleBackColor = true;
			this->botãoFalha->Click += gcnew System::EventHandler(this, &telaRegistroDeFalha1::botãoFalha_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(110, 57);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 13);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Erro no cadastro da falha!";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label11->Location = System::Drawing::Point(0, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 22);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Mantenikola";
			// 
			// popupSucesso
			// 
			this->popupSucesso->Controls->Add(this->popupFalha);
			this->popupSucesso->Controls->Add(this->botãoSucesso);
			this->popupSucesso->Controls->Add(this->label12);
			this->popupSucesso->Controls->Add(this->label10);
			this->popupSucesso->Location = System::Drawing::Point(200, 181);
			this->popupSucesso->Name = L"popupSucesso";
			this->popupSucesso->Size = System::Drawing::Size(362, 159);
			this->popupSucesso->TabIndex = 33;
			this->popupSucesso->TabStop = false;
			this->popupSucesso->Text = L"Sucesso";
			// 
			// botãoSucesso
			// 
			this->botãoSucesso->Location = System::Drawing::Point(128, 116);
			this->botãoSucesso->Name = L"botãoSucesso";
			this->botãoSucesso->Size = System::Drawing::Size(75, 23);
			this->botãoSucesso->TabIndex = 33;
			this->botãoSucesso->Text = L"OK =)";
			this->botãoSucesso->UseVisualStyleBackColor = true;
			this->botãoSucesso->Click += gcnew System::EventHandler(this, &telaRegistroDeFalha1::botãoSucesso_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(97, 52);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(157, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Falha cadastrada com sucesso!";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(0, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 22);
			this->label10->TabIndex = 31;
			this->label10->Text = L"Mantenikola";
			// 
			// erroMecanico
			// 
			this->erroMecanico->AutoSize = true;
			this->erroMecanico->ForeColor = System::Drawing::Color::Red;
			this->erroMecanico->Location = System::Drawing::Point(451, 72);
			this->erroMecanico->Name = L"erroMecanico";
			this->erroMecanico->Size = System::Drawing::Size(0, 13);
			this->erroMecanico->TabIndex = 32;
			// 
			// labelResultadoCadastro
			// 
			this->labelResultadoCadastro->AutoSize = true;
			this->labelResultadoCadastro->ForeColor = System::Drawing::Color::Blue;
			this->labelResultadoCadastro->Location = System::Drawing::Point(304, 282);
			this->labelResultadoCadastro->Name = L"labelResultadoCadastro";
			this->labelResultadoCadastro->Size = System::Drawing::Size(0, 13);
			this->labelResultadoCadastro->TabIndex = 31;
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
			this->erroProvidencia->Location = System::Drawing::Point(228, 471);
			this->erroProvidencia->Name = L"erroProvidencia";
			this->erroProvidencia->Size = System::Drawing::Size(0, 13);
			this->erroProvidencia->TabIndex = 29;
			// 
			// erroModoDeFalha
			// 
			this->erroModoDeFalha->AutoSize = true;
			this->erroModoDeFalha->ForeColor = System::Drawing::Color::Red;
			this->erroModoDeFalha->Location = System::Drawing::Point(451, 165);
			this->erroModoDeFalha->Name = L"erroModoDeFalha";
			this->erroModoDeFalha->Size = System::Drawing::Size(0, 13);
			this->erroModoDeFalha->TabIndex = 28;
			// 
			// botãoDescartarMotor
			// 
			this->botãoDescartarMotor->ForeColor = System::Drawing::Color::Red;
			this->botãoDescartarMotor->Location = System::Drawing::Point(562, 364);
			this->botãoDescartarMotor->Name = L"botãoDescartarMotor";
			this->botãoDescartarMotor->Size = System::Drawing::Size(121, 60);
			this->botãoDescartarMotor->TabIndex = 27;
			this->botãoDescartarMotor->Text = L"Descartar motor";
			this->botãoDescartarMotor->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 497);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 39);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &telaRegistroDeFalha1::button1_Click);
			// 
			// botãoCadastrar
			// 
			this->botãoCadastrar->Location = System::Drawing::Point(528, 497);
			this->botãoCadastrar->Name = L"botãoCadastrar";
			this->botãoCadastrar->Size = System::Drawing::Size(100, 39);
			this->botãoCadastrar->TabIndex = 25;
			this->botãoCadastrar->Text = L"Cadastrar";
			this->botãoCadastrar->UseVisualStyleBackColor = true;
			this->botãoCadastrar->Click += gcnew System::EventHandler(this, &telaRegistroDeFalha1::botãoCadastrar_Click);
			// 
			// cbModoDeFalha
			// 
			this->cbModoDeFalha->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbModoDeFalha->FormattingEnabled = true;
			this->cbModoDeFalha->Location = System::Drawing::Point(307, 258);
			this->cbModoDeFalha->Name = L"cbModoDeFalha";
			this->cbModoDeFalha->Size = System::Drawing::Size(138, 21);
			this->cbModoDeFalha->TabIndex = 24;
			this->cbModoDeFalha->SelectedIndexChanged += gcnew System::EventHandler(this, &telaRegistroDeFalha1::cbModoDeFalha_SelectedIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(562, 259);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 23;
			// 
			// textProvidencia
			// 
			this->textProvidencia->Location = System::Drawing::Point(231, 341);
			this->textProvidencia->Multiline = true;
			this->textProvidencia->Name = L"textProvidencia";
			this->textProvidencia->Size = System::Drawing::Size(300, 112);
			this->textProvidencia->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(307, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 20);
			this->textBox2->TabIndex = 21;
			// 
			// textModelo
			// 
			this->textModelo->Location = System::Drawing::Point(307, 72);
			this->textModelo->Name = L"textModelo";
			this->textModelo->Size = System::Drawing::Size(138, 20);
			this->textModelo->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(495, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Outro:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(127, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Providência tomada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(275, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 29);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Registro de falha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(153, 258);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Modo de falha";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(174, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Mecânico";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(194, 75);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Motor";
			// 
			// telaRegistroDeFalha1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
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
			this->popupFalha->ResumeLayout(false);
			this->popupFalha->PerformLayout();
			this->popupSucesso->ResumeLayout(false);
			this->popupSucesso->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void telaRegistroDeFalha1_Load(System::Object^  sender, System::EventArgs^  e) {
		telaRegistroDeFalha2->Hide();
		popupFalha->Hide();
		popupSucesso->Hide();
		//AllocConsole();
		//freopen("CONOUT$", "w", stdout);
		
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
		label6->Hide();
		textBox4->Hide();
		textModelo->Text = tabelaMotores->SelectedRows[0]->Cells[0]->Value->ToString() + " " + tabelaMotores->SelectedRows[0]->Cells[1]->Value->ToString();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		telaRegistroDeFalha2->Hide();
	}
	private: System::Void botãoCadastrar_Click(System::Object^  sender, System::EventArgs^  e) {
		__int64 nSerie;
		string modelo, dataDeEntrada, providencia, modoDeFalha, mecanico, descricaoOutro;

		descricaoOutro = "";
		erroModoDeFalha->Text = "";
		erroProvidencia->Text = "";
		erroMecanico->Text = "";

		if (String::IsNullOrEmpty(cbModoDeFalha->Text) || String::IsNullOrWhiteSpace(cbModoDeFalha-> Text)) {
			erroModoDeFalha->Text = "Selecione um modo de falha!";
		}
		else if (String::IsNullOrEmpty(textProvidencia->Text) || String::IsNullOrWhiteSpace(textProvidencia->Text)) {
			erroProvidencia->Text = "Descreva a providência tomada!";
		}
		else if (String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrWhiteSpace(textBox2->Text)) {
			erroMecanico->Text = "Digite o nome do mecânico!";
		}
		else {

			nSerie = _int64::Parse(tabelaMotores->SelectedRows[0]->Cells[1]->Value->ToString());
			modelo = msclr::interop::marshal_as<string>(tabelaMotores->SelectedRows[0]->Cells[0]->Value->ToString());
			dataDeEntrada = msclr::interop::marshal_as<string>(tabelaMotores->SelectedRows[0]->Cells[2]->Value->ToString());
			providencia = msclr::interop::marshal_as<string>(textProvidencia->Text);
			modoDeFalha = msclr::interop::marshal_as<string>(cbModoDeFalha->Text);
			mecanico = msclr::interop::marshal_as<string>(textBox2->Text);
			descricaoOutro = msclr::interop::marshal_as<string>(textBox4->Text);

			if (ControladorRegistroDeFalha::updateFalha(nSerie, modelo, dataDeEntrada, providencia, modoDeFalha, mecanico, descricaoOutro)) {
				popupSucesso->Show();
			
			}
			else {
				popupFalha->Show();
			}

		}

	}
private: System::Void cbModoDeFalha_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (cbModoDeFalha->Text == "Outros" || cbModoDeFalha->Text == "outros") {
		label6->Show();
		textBox4->Show();
	}
	else {
		label6->Hide();
		textBox4->Hide();
	}
}
private: System::Void botãoSucesso_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void botãoFalha_Click(System::Object^  sender, System::EventArgs^  e) {
	popupFalha->Hide();
}
};
}
