#pragma once

#include"TelaCadastro.h"

namespace Project1 {

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
	private: System::Windows::Forms::Button^  bot�oCadastroMotor;
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
			this->bot�oCadastroMotor = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bot�oCadastroMotor
			// 
			this->bot�oCadastroMotor->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bot�oCadastroMotor->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->bot�oCadastroMotor->Location = System::Drawing::Point(116, 119);
			this->bot�oCadastroMotor->Name = L"bot�oCadastroMotor";
			this->bot�oCadastroMotor->Size = System::Drawing::Size(158, 111);
			this->bot�oCadastroMotor->TabIndex = 0;
			this->bot�oCadastroMotor->Text = L"Cadastrar Motor";
			this->bot�oCadastroMotor->UseVisualStyleBackColor = true;
			this->bot�oCadastroMotor->Click += gcnew System::EventHandler(this, &MenuPrincipal::bot�oCadastroMotor_Click);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 333);
			this->Controls->Add(this->bot�oCadastroMotor);
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bot�oCadastroMotor_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TelaCadastro ^cadastro = gcnew TelaCadastro();
		cadastro->ShowDialog();
		this->Show();
	}
	private: System::Void MenuPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}


using namespace System;
using namespace System::Windows::Forms;


