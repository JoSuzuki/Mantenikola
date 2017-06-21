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

	private: System::Windows::Forms::Button^  botãoCancelar;
	private: System::Windows::Forms::ComboBox^  cbRelatorios;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::ComboBox^  cbModelos;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  tabelaRelatorioModelo;



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
			this->botãoCancelar = (gcnew System::Windows::Forms::Button());
			this->cbRelatorios = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbModelos = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabelaRelatorioModelo = (gcnew System::Windows::Forms::DataGridView());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->labelNaoImplementado = (gcnew System::Windows::Forms::Label());
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(416, 29);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Seleção de relatórios de atendimento";
			// 
			// botãoCancelar
			// 
			this->botãoCancelar->Location = System::Drawing::Point(319, 492);
			this->botãoCancelar->Name = L"botãoCancelar";
			this->botãoCancelar->Size = System::Drawing::Size(120, 47);
			this->botãoCancelar->TabIndex = 16;
			this->botãoCancelar->Text = L"Retornar ao Menu";
			this->botãoCancelar->UseVisualStyleBackColor = true;
			this->botãoCancelar->Click += gcnew System::EventHandler(this, &TelaRelatorios::botãoCancelar_Click);
			// 
			// cbRelatorios
			// 
			this->cbRelatorios->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbRelatorios->FormattingEnabled = true;
			this->cbRelatorios->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Modelos de Motor", L"Clientes", L"Modos de Falha" });
			this->cbRelatorios->Location = System::Drawing::Point(159, 64);
			this->cbRelatorios->Name = L"cbRelatorios";
			this->cbRelatorios->Size = System::Drawing::Size(174, 21);
			this->cbRelatorios->TabIndex = 17;
			this->cbRelatorios->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaRelatorios::cbRelatorios_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Selecione o tipo de relatório:";
			// 
			// cbModelos
			// 
			this->cbModelos->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbModelos->FormattingEnabled = true;
			this->cbModelos->Location = System::Drawing::Point(635, 64);
			this->cbModelos->Name = L"cbModelos";
			this->cbModelos->Size = System::Drawing::Size(137, 21);
			this->cbModelos->TabIndex = 2;
			this->cbModelos->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaRelatorios::cbModelos_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(584, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Modelo:";
			// 
			// tabelaRelatorioModelo
			// 
			this->tabelaRelatorioModelo->AllowUserToAddRows = false;
			this->tabelaRelatorioModelo->AllowUserToDeleteRows = false;
			this->tabelaRelatorioModelo->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tabelaRelatorioModelo->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedHeaders;
			this->tabelaRelatorioModelo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaRelatorioModelo->Location = System::Drawing::Point(0, 97);
			this->tabelaRelatorioModelo->Name = L"tabelaRelatorioModelo";
			this->tabelaRelatorioModelo->ReadOnly = true;
			this->tabelaRelatorioModelo->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tabelaRelatorioModelo->Size = System::Drawing::Size(783, 389);
			this->tabelaRelatorioModelo->TabIndex = 0;
			// 
			// labelNaoImplementado
			// 
			this->labelNaoImplementado->AutoSize = true;
			this->labelNaoImplementado->ForeColor = System::Drawing::Color::Red;
			this->labelNaoImplementado->Location = System::Drawing::Point(339, 67);
			this->labelNaoImplementado->Name = L"labelNaoImplementado";
			this->labelNaoImplementado->Size = System::Drawing::Size(0, 13);
			this->labelNaoImplementado->TabIndex = 20;
			// 
			// TelaRelatorios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->labelNaoImplementado);
			this->Controls->Add(this->cbModelos);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cbRelatorios);
			this->Controls->Add(this->tabelaRelatorioModelo);
			this->Controls->Add(this->botãoCancelar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelMantenikola);
			this->Name = L"TelaRelatorios";
			this->Text = L"TelaRelatorios";
			this->Load += gcnew System::EventHandler(this, &TelaRelatorios::TelaRelatorios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaRelatorioModelo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TelaRelatorios_Load(System::Object^  sender, System::EventArgs^  e) {
		cbModelos->Hide();
		label3->Text = "";
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

	private: System::Void botãoCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void cbModelos_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		DataTable^ tabelaRelatorios = ControladorRelatorios::getTabelaDeModosDeFalhaPorModelo(msclr::interop::marshal_as<string>(cbModelos->Text));
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = tabelaRelatorios;
		tabelaRelatorioModelo->DataSource = bSource;
	}

	private: System::Void cbRelatorios_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cbRelatorios->Text == "") {
			labelNaoImplementado->Text = "";
		}
		else if (cbRelatorios->Text == "Modelos de Motor") {
			labelNaoImplementado->Text = "";
			cbModelos->Show();
			label3->Text = "Modelos";
		}
		else if (cbRelatorios->Text == "Clientes") {
			labelNaoImplementado->Text = "Função ainda não implementada";
		}
		else if (cbRelatorios->Text == "Modos de Falha") {
			labelNaoImplementado->Text = "Função ainda não implementada";
		}
		else {
			labelNaoImplementado->Text = "";
		}
	}
};
}
