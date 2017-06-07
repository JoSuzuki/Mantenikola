#pragma once

#include<string>


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaCadastro
	/// </summary>
	public ref class TelaCadastro : public System::Windows::Forms::Form
	{
	public:
		TelaCadastro(void)
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
		~TelaCadastro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bot�oRetornar;
	private: System::Windows::Forms::ComboBox^  cbModelo;
	private: System::Windows::Forms::Button^  bot�oCadastrar;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  cbProprietario;

	private: System::Windows::Forms::TextBox^  textoNumeroDeSerie;
	private: System::Windows::Forms::TextBox^  textoDataDeEntrada;


	private: System::Windows::Forms::Label^  labelMantenikola;

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
			this->bot�oRetornar = (gcnew System::Windows::Forms::Button());
			this->cbModelo = (gcnew System::Windows::Forms::ComboBox());
			this->bot�oCadastrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cbProprietario = (gcnew System::Windows::Forms::ComboBox());
			this->textoNumeroDeSerie = (gcnew System::Windows::Forms::TextBox());
			this->textoDataDeEntrada = (gcnew System::Windows::Forms::TextBox());
			this->labelMantenikola = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bot�oRetornar
			// 
			this->bot�oRetornar->Location = System::Drawing::Point(348, 266);
			this->bot�oRetornar->Name = L"bot�oRetornar";
			this->bot�oRetornar->Size = System::Drawing::Size(100, 36);
			this->bot�oRetornar->TabIndex = 0;
			this->bot�oRetornar->Text = L"Cancelar";
			this->bot�oRetornar->UseVisualStyleBackColor = true;
			this->bot�oRetornar->Click += gcnew System::EventHandler(this, &TelaCadastro::bot�oRetornar_Click);
			// 
			// cbModelo
			// 
			this->cbModelo->FormattingEnabled = true;
			this->cbModelo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Modelo1", L"Modelo2", L"Modelo3" });
			this->cbModelo->Location = System::Drawing::Point(214, 176);
			this->cbModelo->Name = L"cbModelo";
			this->cbModelo->Size = System::Drawing::Size(121, 21);
			this->cbModelo->TabIndex = 1;
			// 
			// bot�oCadastrar
			// 
			this->bot�oCadastrar->Location = System::Drawing::Point(67, 266);
			this->bot�oCadastrar->Name = L"bot�oCadastrar";
			this->bot�oCadastrar->Size = System::Drawing::Size(100, 36);
			this->bot�oCadastrar->TabIndex = 2;
			this->bot�oCadastrar->Text = L"Cadastrar";
			this->bot�oCadastrar->UseVisualStyleBackColor = true;
			this->bot�oCadastrar->Click += gcnew System::EventHandler(this, &TelaCadastro::bot�oCadastrar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(214, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Cadastro de Motores";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(125, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Modelo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(101, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Datat de entrada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(101, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"N�mero de s�rie";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(214, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"(Formato: aaaassnnnnn)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(125, 227);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Propriet�rio";
			// 
			// cbProprietario
			// 
			this->cbProprietario->FormattingEnabled = true;
			this->cbProprietario->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"J�o", L"Toninho", L"Baltazar" });
			this->cbProprietario->Location = System::Drawing::Point(214, 224);
			this->cbProprietario->Name = L"cbProprietario";
			this->cbProprietario->Size = System::Drawing::Size(121, 21);
			this->cbProprietario->TabIndex = 9;
			// 
			// textoNumeroDeSerie
			// 
			this->textoNumeroDeSerie->Location = System::Drawing::Point(214, 90);
			this->textoNumeroDeSerie->Name = L"textoNumeroDeSerie";
			this->textoNumeroDeSerie->Size = System::Drawing::Size(121, 20);
			this->textoNumeroDeSerie->TabIndex = 10;
			// 
			// textoDataDeEntrada
			// 
			this->textoDataDeEntrada->Location = System::Drawing::Point(214, 145);
			this->textoDataDeEntrada->Name = L"textoDataDeEntrada";
			this->textoDataDeEntrada->Size = System::Drawing::Size(121, 20);
			this->textoDataDeEntrada->TabIndex = 11;
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
			this->labelMantenikola->Location = System::Drawing::Point(-1, -2);
			this->labelMantenikola->Name = L"labelMantenikola";
			this->labelMantenikola->Size = System::Drawing::Size(108, 22);
			this->labelMantenikola->TabIndex = 12;
			this->labelMantenikola->Text = L"Mantenikola";
			// 
			// TelaCadastro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 341);
			this->Controls->Add(this->labelMantenikola);
			this->Controls->Add(this->textoDataDeEntrada);
			this->Controls->Add(this->textoNumeroDeSerie);
			this->Controls->Add(this->cbProprietario);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bot�oCadastrar);
			this->Controls->Add(this->cbModelo);
			this->Controls->Add(this->bot�oRetornar);
			this->Name = L"TelaCadastro";
			this->Text = L"Tela de Cadastro";
			this->Load += gcnew System::EventHandler(this, &TelaCadastro::TelaCadastro_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bot�oRetornar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void bot�oCadastrar_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void TelaCadastro_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
