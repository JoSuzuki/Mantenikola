#pragma once

//#include"ControladorRegistroDeFalha"

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  botãoCancelar;

	private: System::Windows::Forms::DataGridView^  tabelaMotores;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  modelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nSerie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  diasNaOficina;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tipoProprietario;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->botãoCancelar = (gcnew System::Windows::Forms::Button());
			this->tabelaMotores = (gcnew System::Windows::Forms::DataGridView());
			this->modelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nSerie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->diasNaOficina = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipoProprietario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaMotores))->BeginInit();
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 38);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Continuar";
			this->button1->UseVisualStyleBackColor = true;
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
			this->tabelaMotores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaMotores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->modelo,
					this->nSerie, this->diasNaOficina, this->tipoProprietario
			});
			this->tabelaMotores->Location = System::Drawing::Point(110, 51);
			this->tabelaMotores->Name = L"tabelaMotores";
			this->tabelaMotores->Size = System::Drawing::Size(445, 234);
			this->tabelaMotores->TabIndex = 18;
			// 
			// modelo
			// 
			this->modelo->HeaderText = L"Modelo";
			this->modelo->Name = L"modelo";
			// 
			// nSerie
			// 
			this->nSerie->HeaderText = L"Número de Série";
			this->nSerie->Name = L"nSerie";
			// 
			// diasNaOficina
			// 
			this->diasNaOficina->HeaderText = L"Dias na oficina";
			this->diasNaOficina->Name = L"diasNaOficina";
			// 
			// tipoProprietario
			// 
			this->tipoProprietario->HeaderText = L"Tipo do Cliente";
			this->tipoProprietario->Name = L"tipoProprietario";
			// 
			// telaRegistroDeFalha1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 388);
			this->Controls->Add(this->tabelaMotores);
			this->Controls->Add(this->botãoCancelar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelMantenikola);
			this->Name = L"telaRegistroDeFalha1";
			this->Text = L"telaRegistroDeFalha1";
			//this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &telaRegistroDeFalha1::telaRegistroDeFalha1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &telaRegistroDeFalha1::telaRegistroDeFalha1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaMotores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void telaRegistroDeFalha1_Load(System::Object^  sender, System::EventArgs^  e) {

		/*ControladorRegistroDeFalha::materializarMotores();
		for (int i = 0; i < ControladorRegistroDeFalha::getMotores().size(); i++) {
			try {
				tabelaMotores->Rows->Add(msclr::interop::marshal_as<System::String^>(ControladorRegistroDeFalha::getModelos()[i]->getNome(),));
			}
			catch (...) {
				break;
			}
		}
		ControladorregistroDeFalha::materializarProprietarios();
		for (int i = 0; i < ControladorCadastroDeMotor::getProprietarios().size(); i++) {
			try {
				cbProprietario->Items->Add(msclr::interop::marshal_as<System::String^>(ControladorCadastroDeMotor::getProprietarios()[i]->getNome()));

			}
			catch (...) {
				break;
			}
		}*/
	}
	
	private: System::Void botãoCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
			 /*
	private: System::Void telaRegistroDeFalha1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		Application::Exit();
	}*/
};
}
