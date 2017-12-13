#pragma once

#include"TelaCadastro.h"
#include"TelaRelatorios.h"

namespace Mantenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  botãoCadastroMotor;
	private: System::Windows::Forms::Button^  botãoRelatórios;
	private: System::Windows::Forms::Button^  botãoRegistroDeFalha;
	private: System::Windows::Forms::Button^  botãoSair;
	private: System::Windows::Forms::Label^  labelMantenikola;
	private: System::Windows::Forms::Label^  label1;
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
			this->botãoCadastroMotor = (gcnew System::Windows::Forms::Button());
			this->botãoRelatórios = (gcnew System::Windows::Forms::Button());
			this->botãoRegistroDeFalha = (gcnew System::Windows::Forms::Button());
			this->botãoSair = (gcnew System::Windows::Forms::Button());
			this->labelMantenikola = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// botãoCadastroMotor
			// 
			this->botãoCadastroMotor->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->botãoCadastroMotor->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->botãoCadastroMotor->Location = System::Drawing::Point(309, 161);
			this->botãoCadastroMotor->Name = L"botãoCadastroMotor";
			this->botãoCadastroMotor->Size = System::Drawing::Size(158, 111);
			this->botãoCadastroMotor->TabIndex = 0;
			this->botãoCadastroMotor->Text = L"Cadastrar Motor";
			this->botãoCadastroMotor->UseVisualStyleBackColor = true;
			this->botãoCadastroMotor->Click += gcnew System::EventHandler(this, &MenuPrincipal::botãoCadastroMotor_Click);
			// 
			// botãoRelatórios
			// 
			this->botãoRelatórios->Location = System::Drawing::Point(12, 161);
			this->botãoRelatórios->Name = L"botãoRelatórios";
			this->botãoRelatórios->Size = System::Drawing::Size(158, 111);
			this->botãoRelatórios->TabIndex = 1;
			this->botãoRelatórios->Text = L"Apresentar relatórios";
			this->botãoRelatórios->UseVisualStyleBackColor = true;
			this->botãoRelatórios->Click += gcnew System::EventHandler(this, &MenuPrincipal::botãoRelatórios_Click);
			// 
			// botãoRegistroDeFalha
			// 
			this->botãoRegistroDeFalha->Location = System::Drawing::Point(614, 161);
			this->botãoRegistroDeFalha->Name = L"botãoRegistroDeFalha";
			this->botãoRegistroDeFalha->Size = System::Drawing::Size(158, 111);
			this->botãoRegistroDeFalha->TabIndex = 2;
			this->botãoRegistroDeFalha->Text = L"Registrar Falha";
			this->botãoRegistroDeFalha->UseVisualStyleBackColor = true;
			this->botãoRegistroDeFalha->Click += gcnew System::EventHandler(this, &MenuPrincipal::botãoRegistroDeFalha_Click);
			// 
			// botãoSair
			// 
			this->botãoSair->Location = System::Drawing::Point(309, 390);
			this->botãoSair->Name = L"botãoSair";
			this->botãoSair->Size = System::Drawing::Size(158, 111);
			this->botãoSair->TabIndex = 3;
			this->botãoSair->Text = L"Sair";
			this->botãoSair->UseVisualStyleBackColor = true;
			this->botãoSair->Click += gcnew System::EventHandler(this, &MenuPrincipal::botãoSair_Click);
			// 
			// labelMantenikola
			// 
			this->labelMantenikola->AutoSize = true;
			this->labelMantenikola->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->labelMantenikola->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelMantenikola->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelMantenikola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMantenikola->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelMantenikola->Location = System::Drawing::Point(289, 9);
			this->labelMantenikola->Name = L"labelMantenikola";
			this->labelMantenikola->Size = System::Drawing::Size(202, 39);
			this->labelMantenikola->TabIndex = 13;
			this->labelMantenikola->Text = L"Mantenikola";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(519, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Bem Vindo(a) ao sistema da Mantenikola!";
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelMantenikola);
			this->Controls->Add(this->botãoSair);
			this->Controls->Add(this->botãoRegistroDeFalha);
			this->Controls->Add(this->botãoRelatórios);
			this->Controls->Add(this->botãoCadastroMotor);
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void botãoCadastroMotor_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TelaCadastro ^cadastro = gcnew TelaCadastro();
		cadastro->ShowDialog();
		this->Show();
	}
	private: System::Void botãoRelatórios_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TelaRelatorios ^relatorio = gcnew TelaRelatorios();
		relatorio->ShowDialog();
		this->Show();
	}
	private: System::Void botãoRegistroDeFalha_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		telaRegistroDeFalha1 ^registroFalha = gcnew telaRegistroDeFalha1();
		registroFalha->ShowDialog();
		this->Show();
	}
	private: System::Void botãoSair_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void MenuPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
	}

};
}


using namespace System;
using namespace System::Windows::Forms;


