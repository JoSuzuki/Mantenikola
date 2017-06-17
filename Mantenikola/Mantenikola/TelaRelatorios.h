#pragma once

#include"ControladorRelatorios.h"
#include <msclr\marshal_cppstd.h>

namespace Mantenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaRelatorios
	/// </summary>
	public ref class TelaRelatorios : public System::Windows::Forms::Form
	{
	public:
		TelaRelatorios(void)
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
		~TelaRelatorios()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  labelMantenikola;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  bot�oApresentar;
	private: System::Windows::Forms::Button^  bot�oCancelar;
	private: System::Windows::Forms::ComboBox^  cbRelatorios;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  popupRelatorioModelo;

	private: System::Windows::Forms::Button^  bot�oRetornar;
	private: System::Windows::Forms::ComboBox^  cbModelos;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  tabelaRelatorioModelo;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  bot�oMenu;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Label^  labelNaoImplementado;

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
			this->bot�oApresentar = (gcnew System::Windows::Forms::Button());
			this->bot�oCancelar = (gcnew System::Windows::Forms::Button());
			this->cbRelatorios = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->popupRelatorioModelo = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bot�oMenu = (gcnew System::Windows::Forms::Button());
			this->bot�oRetornar = (gcnew System::Windows::Forms::Button());
			this->cbModelos = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabelaRelatorioModelo = (gcnew System::Windows::Forms::DataGridView());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->labelNaoImplementado = (gcnew System::Windows::Forms::Label());
			this->popupRelatorioModelo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaRelatorioModelo))->BeginInit();
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
			this->label1->Location = System::Drawing::Point(140, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Sele��o de relat�rios de atendimento";
			// 
			// bot�oApresentar
			// 
			this->bot�oApresentar->Location = System::Drawing::Point(92, 243);
			this->bot�oApresentar->Name = L"bot�oApresentar";
			this->bot�oApresentar->Size = System::Drawing::Size(75, 23);
			this->bot�oApresentar->TabIndex = 15;
			this->bot�oApresentar->Text = L"Continuar";
			this->bot�oApresentar->UseVisualStyleBackColor = true;
			this->bot�oApresentar->Click += gcnew System::EventHandler(this, &TelaRelatorios::bot�oApresentar_Click);
			// 
			// bot�oCancelar
			// 
			this->bot�oCancelar->Location = System::Drawing::Point(288, 243);
			this->bot�oCancelar->Name = L"bot�oCancelar";
			this->bot�oCancelar->Size = System::Drawing::Size(75, 23);
			this->bot�oCancelar->TabIndex = 16;
			this->bot�oCancelar->Text = L"Cancelar";
			this->bot�oCancelar->UseVisualStyleBackColor = true;
			this->bot�oCancelar->Click += gcnew System::EventHandler(this, &TelaRelatorios::bot�oCancelar_Click);
			// 
			// cbRelatorios
			// 
			this->cbRelatorios->FormattingEnabled = true;
			this->cbRelatorios->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Modelos de Motor", L"Clientes", L"Modos de Falha" });
			this->cbRelatorios->Location = System::Drawing::Point(159, 125);
			this->cbRelatorios->Name = L"cbRelatorios";
			this->cbRelatorios->Size = System::Drawing::Size(174, 21);
			this->cbRelatorios->TabIndex = 17;
			this->cbRelatorios->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaRelatorios::cbRelatorios_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Selecione o tipo de relat�rio:";
			// 
			// popupRelatorioModelo
			// 
			this->popupRelatorioModelo->Controls->Add(this->label4);
			this->popupRelatorioModelo->Controls->Add(this->bot�oMenu);
			this->popupRelatorioModelo->Controls->Add(this->bot�oRetornar);
			this->popupRelatorioModelo->Controls->Add(this->cbModelos);
			this->popupRelatorioModelo->Controls->Add(this->label3);
			this->popupRelatorioModelo->Controls->Add(this->tabelaRelatorioModelo);
			this->popupRelatorioModelo->Location = System::Drawing::Point(0, 0);
			this->popupRelatorioModelo->Name = L"popupRelatorioModelo";
			this->popupRelatorioModelo->Size = System::Drawing::Size(484, 322);
			this->popupRelatorioModelo->TabIndex = 19;
			this->popupRelatorioModelo->TabStop = false;
			this->popupRelatorioModelo->Text = L"Relat�rios de Modelo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 22);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Mantenikola";
			// 
			// bot�oMenu
			// 
			this->bot�oMenu->Location = System::Drawing::Point(389, 0);
			this->bot�oMenu->Name = L"bot�oMenu";
			this->bot�oMenu->Size = System::Drawing::Size(95, 42);
			this->bot�oMenu->TabIndex = 4;
			this->bot�oMenu->Text = L"Retornar para o Menu Principal";
			this->bot�oMenu->UseVisualStyleBackColor = true;
			this->bot�oMenu->Click += gcnew System::EventHandler(this, &TelaRelatorios::bot�oMenu_Click);
			// 
			// bot�oRetornar
			// 
			this->bot�oRetornar->Location = System::Drawing::Point(403, 61);
			this->bot�oRetornar->Name = L"bot�oRetornar";
			this->bot�oRetornar->Size = System::Drawing::Size(75, 23);
			this->bot�oRetornar->TabIndex = 3;
			this->bot�oRetornar->Text = L"Retornar";
			this->bot�oRetornar->UseVisualStyleBackColor = true;
			this->bot�oRetornar->Click += gcnew System::EventHandler(this, &TelaRelatorios::bot�oRetornar_Click);
			// 
			// cbModelos
			// 
			this->cbModelos->FormattingEnabled = true;
			this->cbModelos->Location = System::Drawing::Point(76, 53);
			this->cbModelos->Name = L"cbModelos";
			this->cbModelos->Size = System::Drawing::Size(137, 21);
			this->cbModelos->TabIndex = 2;
			this->cbModelos->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaRelatorios::cbModelos_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Modelo:";
			// 
			// tabelaRelatorioModelo
			// 
			this->tabelaRelatorioModelo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaRelatorioModelo->Location = System::Drawing::Point(0, 90);
			this->tabelaRelatorioModelo->Name = L"tabelaRelatorioModelo";
			this->tabelaRelatorioModelo->Size = System::Drawing::Size(484, 232);
			this->tabelaRelatorioModelo->TabIndex = 0;
			// 
			// labelNaoImplementado
			// 
			this->labelNaoImplementado->AutoSize = true;
			this->labelNaoImplementado->ForeColor = System::Drawing::Color::Red;
			this->labelNaoImplementado->Location = System::Drawing::Point(159, 153);
			this->labelNaoImplementado->Name = L"labelNaoImplementado";
			this->labelNaoImplementado->Size = System::Drawing::Size(0, 13);
			this->labelNaoImplementado->TabIndex = 20;
			// 
			// TelaRelatorios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 322);
			this->Controls->Add(this->labelNaoImplementado);
			this->Controls->Add(this->popupRelatorioModelo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbRelatorios);
			this->Controls->Add(this->bot�oCancelar);
			this->Controls->Add(this->bot�oApresentar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelMantenikola);
			this->Name = L"TelaRelatorios";
			this->Text = L"TelaRelatorios";
			this->Load += gcnew System::EventHandler(this, &TelaRelatorios::TelaRelatorios_Load);
			this->popupRelatorioModelo->ResumeLayout(false);
			this->popupRelatorioModelo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaRelatorioModelo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TelaRelatorios_Load(System::Object^  sender, System::EventArgs^  e) {
		popupRelatorioModelo->Hide();
	}

	private: System::Void bot�oCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void bot�oApresentar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (cbRelatorios->Text == "Modelos de Motor") {
			popupRelatorioModelo->Show();

			ControladorRelatorios::materializarModelos();
			for (int i = 0; i < ControladorRelatorios::getModelos().size(); i++) {
				try {
					cbModelos->Items->Add(msclr::interop::marshal_as<System::String^>(ControladorRelatorios::getModelos()[i]->getNome()));
				}
				catch (...) {
					break;
				}
			}
		}
	
	}
	private: System::Void bot�oMenu_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void cbModelos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void bot�oRetornar_Click(System::Object^  sender, System::EventArgs^  e) {
		popupRelatorioModelo->Hide();
	}
	private: System::Void cbRelatorios_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cbRelatorios->Text == "") {
			labelNaoImplementado->Text = "";
		}
		else if (cbRelatorios->Text == "Modelos de Motor") {
			labelNaoImplementado->Text = "";
		}
		else if (cbRelatorios->Text == "Clientes") {
			labelNaoImplementado->Text = "Fun��o ainda n�o implementada";
		}
		else if (cbRelatorios->Text == "Modos de Falha") {
			labelNaoImplementado->Text = "Fun��o ainda n�o implementada";
		}
		else {
			labelNaoImplementado->Text = "";
		}
	}
};
}
