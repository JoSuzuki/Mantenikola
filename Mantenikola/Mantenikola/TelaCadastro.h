#pragma once

#include<string>
#include"ControladorCadastroDeMotor.h"
#include"telaRegistroDeFalha1.h"
#include <msclr\marshal_cppstd.h>



namespace Mantenikola {

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
	private: System::Windows::Forms::Button^  botãoRetornar;
	private: System::Windows::Forms::ComboBox^  cbModelo;
	private: System::Windows::Forms::Button^  botãoCadastrar;
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
	private: System::Windows::Forms::Label^  labelErroNSerie;
	private: System::Windows::Forms::Label^  labelErroDataEntrada;
	private: System::Windows::Forms::Label^  labelErroModelo;
	private: System::Windows::Forms::Label^  labelErroProprietario;
	private: System::Windows::Forms::Label^  labelMotorCadastrado;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  PopupMotorJaCadastrado;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  botãoCancelar;
	private: System::Windows::Forms::Button^  botãoCadastrarNovaFalha;
	private: System::Windows::Forms::Label^  label9;

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
			this->SuspendLayout();
			this->botãoRetornar = (gcnew System::Windows::Forms::Button());
			this->cbModelo = (gcnew System::Windows::Forms::ComboBox());
			this->botãoCadastrar = (gcnew System::Windows::Forms::Button());
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
			this->labelErroNSerie = (gcnew System::Windows::Forms::Label());
			this->labelErroDataEntrada = (gcnew System::Windows::Forms::Label());
			this->labelErroModelo = (gcnew System::Windows::Forms::Label());
			this->labelErroProprietario = (gcnew System::Windows::Forms::Label());
			this->labelMotorCadastrado = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->PopupMotorJaCadastrado = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->botãoCancelar = (gcnew System::Windows::Forms::Button());
			this->botãoCadastrarNovaFalha = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->PopupMotorJaCadastrado->SuspendLayout();
			//
			// botãoRetornar
			// 
			this->botãoRetornar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->botãoRetornar->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->botãoRetornar->Location = System::Drawing::Point(468, 295);
			this->botãoRetornar->Name = L"botãoRetornar";
			this->botãoRetornar->Size = System::Drawing::Size(100, 36);
			this->botãoRetornar->TabIndex = 0;
			this->botãoRetornar->Text = L"Cancelar";
			this->botãoRetornar->UseVisualStyleBackColor = true;
			this->botãoRetornar->Click += gcnew System::EventHandler(this, &TelaCadastro::botãoRetornar_Click);
			// 
			// cbModelo
			// 
			this->cbModelo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbModelo->FormattingEnabled = true;
			this->cbModelo->Location = System::Drawing::Point(214, 176);
			this->cbModelo->Name = L"cbModelo";
			this->cbModelo->Size = System::Drawing::Size(215, 21);
			this->cbModelo->TabIndex = 1;
			// 
			// botãoCadastrar
			// 
			this->botãoCadastrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->botãoCadastrar->Location = System::Drawing::Point(131, 295);
			this->botãoCadastrar->Name = L"botãoCadastrar";
			this->botãoCadastrar->Size = System::Drawing::Size(100, 36);
			this->botãoCadastrar->TabIndex = 2;
			this->botãoCadastrar->Text = L"Cadastrar";
			this->botãoCadastrar->UseVisualStyleBackColor = true;
			this->botãoCadastrar->Click += gcnew System::EventHandler(this, &TelaCadastro::botãoCadastrar_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 20);
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
			this->label3->Location = System::Drawing::Point(101, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Datat de entrada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(101, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Número de série";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(274, 88);
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
			this->label6->Text = L"Proprietário";
			// 
			// cbProprietario
			// 
			this->cbProprietario->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbProprietario->FormattingEnabled = true;
			this->cbProprietario->Location = System::Drawing::Point(214, 224);
			this->cbProprietario->Name = L"cbProprietario";
			this->cbProprietario->Size = System::Drawing::Size(215, 21);
			this->cbProprietario->TabIndex = 9;
			// 
			// textoNumeroDeSerie
			// 
			this->textoNumeroDeSerie->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textoNumeroDeSerie->Location = System::Drawing::Point(214, 65);
			this->textoNumeroDeSerie->Name = L"textoNumeroDeSerie";
			this->textoNumeroDeSerie->Size = System::Drawing::Size(215, 20);
			this->textoNumeroDeSerie->TabIndex = 10;
			// 
			// textoDataDeEntrada
			// 
			this->textoDataDeEntrada->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textoDataDeEntrada->Location = System::Drawing::Point(214, 122);
			this->textoDataDeEntrada->Name = L"textoDataDeEntrada";
			this->textoDataDeEntrada->Size = System::Drawing::Size(215, 20);
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
			// labelErroNSerie
			// 
			this->labelErroNSerie->AutoEllipsis = true;
			this->labelErroNSerie->AutoSize = true;
			this->labelErroNSerie->ForeColor = System::Drawing::Color::Red;
			this->labelErroNSerie->Location = System::Drawing::Point(380, 68);
			this->labelErroNSerie->Name = L"labelErroNSerie";
			this->labelErroNSerie->Size = System::Drawing::Size(0, 13);
			this->labelErroNSerie->TabIndex = 13;
			// 
			// labelErroDataEntrada
			// 
			this->labelErroDataEntrada->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelErroDataEntrada->AutoEllipsis = true;
			this->labelErroDataEntrada->AutoSize = true;
			this->labelErroDataEntrada->ForeColor = System::Drawing::Color::Red;
			this->labelErroDataEntrada->Location = System::Drawing::Point(380, 129);
			this->labelErroDataEntrada->Name = L"labelErroDataEntrada";
			this->labelErroDataEntrada->Size = System::Drawing::Size(0, 13);
			this->labelErroDataEntrada->TabIndex = 14;
			// 
			// labelErroModelo
			// 
			this->labelErroModelo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelErroModelo->AutoEllipsis = true;
			this->labelErroModelo->AutoSize = true;
			this->labelErroModelo->ForeColor = System::Drawing::Color::Red;
			this->labelErroModelo->Location = System::Drawing::Point(380, 179);
			this->labelErroModelo->Name = L"labelErroModelo";
			this->labelErroModelo->Size = System::Drawing::Size(0, 13);
			this->labelErroModelo->TabIndex = 15;
			// 
			// labelErroProprietario
			// 
			this->labelErroProprietario->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelErroProprietario->AutoEllipsis = true;
			this->labelErroProprietario->AutoSize = true;
			this->labelErroProprietario->ForeColor = System::Drawing::Color::Red;
			this->labelErroProprietario->Location = System::Drawing::Point(380, 227);
			this->labelErroProprietario->Name = L"labelErroProprietario";
			this->labelErroProprietario->Size = System::Drawing::Size(0, 13);
			this->labelErroProprietario->TabIndex = 16;
			// 
			// labelMotorCadastrado
			// 
			this->labelMotorCadastrado->AutoSize = true;
			this->labelMotorCadastrado->Location = System::Drawing::Point(244, 266);
			this->labelMotorCadastrado->Name = L"labelMotorCadastrado";
			this->labelMotorCadastrado->Size = System::Drawing::Size(0, 13);
			this->labelMotorCadastrado->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(274, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"(Formato: dd/mm/aa)";
			// 
			// PopupMotorJaCadastrado
			// 
			this->PopupMotorJaCadastrado->AutoSize = true;
			this->PopupMotorJaCadastrado->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->PopupMotorJaCadastrado->Controls->Add(this->label8);
			this->PopupMotorJaCadastrado->Controls->Add(this->botãoCancelar);
			this->PopupMotorJaCadastrado->Controls->Add(this->botãoCadastrarNovaFalha);
			this->PopupMotorJaCadastrado->Controls->Add(this->label9);
			this->PopupMotorJaCadastrado->Location = System::Drawing::Point(86, 32);
			this->PopupMotorJaCadastrado->Name = L"PopupMotorJaCadastrado";
			this->PopupMotorJaCadastrado->Size = System::Drawing::Size(491, 247);
			this->PopupMotorJaCadastrado->TabIndex = 19;
			this->PopupMotorJaCadastrado->TabStop = false;
			this->PopupMotorJaCadastrado->Text = L"Erro: Motor já cadastrado";
			this->PopupMotorJaCadastrado->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(125, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(227, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Deseja cadastrar uma nova falha neste motor\?";
			// 
			// botãoCancelar
			// 
			this->botãoCancelar->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->botãoCancelar->Location = System::Drawing::Point(324, 166);
			this->botãoCancelar->Name = L"botãoCancelar";
			this->botãoCancelar->Size = System::Drawing::Size(121, 37);
			this->botãoCancelar->TabIndex = 6;
			this->botãoCancelar->Text = L"Cancelar";
			this->botãoCancelar->UseVisualStyleBackColor = true;
			this->botãoCancelar->Click += gcnew System::EventHandler(this, &TelaCadastro::botãoCancelar_Click);
			// 
			// botãoCadastrarNovaFalha
			// 
			this->botãoCadastrarNovaFalha->Location = System::Drawing::Point(41, 166);
			this->botãoCadastrarNovaFalha->Name = L"botãoCadastrarNovaFalha";
			this->botãoCadastrarNovaFalha->Size = System::Drawing::Size(121, 37);
			this->botãoCadastrarNovaFalha->TabIndex = 5;
			this->botãoCadastrarNovaFalha->Text = L"Cadastrar nova falha";
			this->botãoCadastrarNovaFalha->UseVisualStyleBackColor = true;
			this->botãoCadastrarNovaFalha->Click += gcnew System::EventHandler(this, &TelaCadastro::botãoCadastrarNovaFalha_Click);
			// 
			// label9
			// 
			this->label9->AutoEllipsis = true;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(6, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(479, 29);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Este motor já foi cadastrado no sistema!";
			// 
			// TelaCadastro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 370);
			this->Controls->Add(this->PopupMotorJaCadastrado);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->labelMotorCadastrado);
			this->Controls->Add(this->labelErroProprietario);
			this->Controls->Add(this->labelErroModelo);
			this->Controls->Add(this->labelErroDataEntrada);
			this->Controls->Add(this->labelErroNSerie);
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
			this->Controls->Add(this->botãoCadastrar);
			this->Controls->Add(this->cbModelo);
			this->Controls->Add(this->botãoRetornar);
			this->Name = L"TelaCadastro";
			this->Text = L"Tela de Cadastro";
			this->Load += gcnew System::EventHandler(this, &TelaCadastro::TelaCadastro_Load);
			this->PopupMotorJaCadastrado->ResumeLayout(false);
			this->PopupMotorJaCadastrado->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void botãoRetornar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void botãoCadastrar_Click(System::Object^  sender, System::EventArgs^  e) {
		_int64 nSerie;
		string data, modelo, proprietario;
		if (checkCampos()) {

			nSerie = _int64::Parse(textoNumeroDeSerie->Text);
			data = msclr::interop::marshal_as<string>(textoDataDeEntrada->Text);
			modelo = msclr::interop::marshal_as<string>(cbModelo->Text);
			proprietario = msclr::interop::marshal_as<string>(cbProprietario->Text);

			
			if (ControladorCadastroDeMotor::cadastrarMotor(nSerie, modelo, data, proprietario)) {
				labelMotorCadastrado->Text = "Motor Cadastrado!";
			}
			else {
				PopupMotorJaCadastrado->Show();
			}
		}
	}
	private: System::Void TelaCadastro_Load(System::Object^  sender, System::EventArgs^  e) {
		PopupMotorJaCadastrado->Hide();
		AllocConsole();
		freopen("CONOUT$", "w", stdout);
		
		ControladorCadastroDeMotor::materializarModelos();
		for (int i = 0; i < ControladorCadastroDeMotor::getModelos().size(); i++) {
			try {
				cbModelo->Items->Add(msclr::interop::marshal_as<System::String^>(ControladorCadastroDeMotor::getModelos()[i]->getNome()));
			}
			catch (...) {
				break;
			}
		}
		ControladorCadastroDeMotor::materializarProprietarios();
		for (int i = 0; i < ControladorCadastroDeMotor::getProprietarios().size(); i++) {
			try {
				cbProprietario->Items->Add(msclr::interop::marshal_as<System::String^>(ControladorCadastroDeMotor::getProprietarios()[i]->getNome()));

			}
			catch (...) {
				break;
			}
		}
	}
	private: bool checkCampos() {
		_int64 nSerie;
		string data;

		labelErroNSerie->Text = "";
		labelErroDataEntrada->Text = "";
		labelErroModelo->Text = "";
		labelErroProprietario->Text = "";

		if (String::IsNullOrEmpty(textoNumeroDeSerie->Text) || String::IsNullOrWhiteSpace(textoNumeroDeSerie->Text)) {
			labelErroNSerie->Text = "Número de Série inválido (nenhum valor)";
			return FALSE;
		}
		
		else { 
			try {
				nSerie = _int64::Parse(textoNumeroDeSerie->Text);
				if ((nSerie / 100000) % 100 > 52 || nSerie > 100000000000 || nSerie < 10000000000) {
					labelErroNSerie->Text = "Número de Série inválido (fora da faixa)";
					return FALSE;
				}
			}
			catch (...) {
				labelErroNSerie->Text = "Número de Série inválido (não converteu)";
				return FALSE;
			}
		}
		if (String::IsNullOrEmpty(textoDataDeEntrada->Text) || String::IsNullOrWhiteSpace(textoDataDeEntrada->Text)) {
			labelErroDataEntrada->Text = "Data de inválida";
			return FALSE;
		}
		else {
			data = msclr::interop::marshal_as<string>(textoDataDeEntrada->Text);
			if (data.size() != 8 || data[2] !='/' || data[5] != '/') {
				labelErroDataEntrada->Text = "Data de inválida";
				return FALSE;
			}
			try {
				if (std::stoi(data.substr(0, 1)) < 0 || std::stoi(data.substr(0, 1)) > 31) {
					labelErroDataEntrada->Text = "Data de inválida";
					return FALSE;
				}
				if (std::stoi(data.substr(3, 4)) < 0 || std::stoi(data.substr(3, 4)) > 12) {
					labelErroDataEntrada->Text = "Data de inválida";
					return FALSE;
				}
				if (std::stoi(data.substr(6, 7)) < 0) {
					labelErroDataEntrada->Text = "Data de inválida";
					return FALSE;
				}
			}
			catch (...) {
				labelErroDataEntrada->Text = "Data de inválida";
				return FALSE;
			}
		}
		if (String::IsNullOrEmpty(cbModelo->Text) || String::IsNullOrWhiteSpace(cbModelo->Text)) {
			labelErroModelo->Text = "Modelo inválido";
			return FALSE;
		}
		if (String::IsNullOrEmpty(cbProprietario->Text) || String::IsNullOrWhiteSpace(cbProprietario->Text)) {
			labelErroProprietario->Text = "Proprietário inválido";
			return FALSE;
		}
		return TRUE;
	}

	private: System::Void botãoCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		PopupMotorJaCadastrado->Hide();
	}
	private: System::Void botãoCadastrarNovaFalha_Click(System::Object^  sender, System::EventArgs^  e) {
		_int64 nSerie;
		string data, modelo;

		nSerie = _int64::Parse(textoNumeroDeSerie->Text);
		data = msclr::interop::marshal_as<string>(textoDataDeEntrada->Text);
		modelo = msclr::interop::marshal_as<string>(cbModelo->Text);

		PopupMotorJaCadastrado->Hide();
		this->Hide();
		ControladorCadastroDeMotor::cadastrarFalha(nSerie, modelo, data);
		telaRegistroDeFalha1 ^registroFalha = gcnew telaRegistroDeFalha1();
		registroFalha->ShowDialog();
		this->Close();
	}
};
}
