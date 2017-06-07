#pragma once

namespace Mantenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PopupMotorJaCadastrado
	/// </summary>
	public ref class PopupMotorJaCadastrado : public System::Windows::Forms::Form
	{
	public:
		PopupMotorJaCadastrado(void)
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
		~PopupMotorJaCadastrado()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  botãoCadastrarNovaFalha;
	private: System::Windows::Forms::Button^  botãoCancelar;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->botãoCadastrarNovaFalha = (gcnew System::Windows::Forms::Button());
			this->botãoCancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Motor já cadastrado";
			// 
			// botãoCadastrarNovaFalha
			// 
			this->botãoCadastrarNovaFalha->Location = System::Drawing::Point(12, 134);
			this->botãoCadastrarNovaFalha->Name = L"botãoCadastrarNovaFalha";
			this->botãoCadastrarNovaFalha->Size = System::Drawing::Size(121, 37);
			this->botãoCadastrarNovaFalha->TabIndex = 1;
			this->botãoCadastrarNovaFalha->Text = L"Cadastrar nova falha";
			this->botãoCadastrarNovaFalha->UseVisualStyleBackColor = true;
			this->botãoCadastrarNovaFalha->Click += gcnew System::EventHandler(this, &PopupMotorJaCadastrado::botãoCadastrarNovaFalha_Click);
			// 
			// botãoCancelar
			// 
			this->botãoCancelar->Location = System::Drawing::Point(139, 134);
			this->botãoCancelar->Name = L"botãoCancelar";
			this->botãoCancelar->Size = System::Drawing::Size(121, 37);
			this->botãoCancelar->TabIndex = 2;
			this->botãoCancelar->Text = L"Cancelar";
			this->botãoCancelar->UseVisualStyleBackColor = true;
			this->botãoCancelar->Click += gcnew System::EventHandler(this, &PopupMotorJaCadastrado::botãoCancelar_Click);
			// 
			// PopupMotorJaCadastrado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(268, 195);
			this->Controls->Add(this->botãoCancelar);
			this->Controls->Add(this->botãoCadastrarNovaFalha);
			this->Controls->Add(this->label1);
			this->Name = L"PopupMotorJaCadastrado";
			this->Text = L"PopupMotorJaCadastrado";
			this->Load += gcnew System::EventHandler(this, &PopupMotorJaCadastrado::PopupMotorJaCadastrado_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void botãoCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void PopupMotorJaCadastrado_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void botãoCadastrarNovaFalha_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}