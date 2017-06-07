#pragma once

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
	private: System::Windows::Forms::Button^  botãoRelatóriosModelo;
	private: System::Windows::Forms::Button^  botãoRelatóriosProprietário;
	protected:

	protected:

	private: System::Windows::Forms::Button^  botãoRelatorioFalha;

	private: System::Windows::Forms::Label^  labelMantenikola;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;


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
			this->botãoRelatóriosModelo = (gcnew System::Windows::Forms::Button());
			this->botãoRelatóriosProprietário = (gcnew System::Windows::Forms::Button());
			this->botãoRelatorioFalha = (gcnew System::Windows::Forms::Button());
			this->labelMantenikola = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// botãoRelatóriosModelo
			// 
			this->botãoRelatóriosModelo->Location = System::Drawing::Point(53, 78);
			this->botãoRelatóriosModelo->Name = L"botãoRelatóriosModelo";
			this->botãoRelatóriosModelo->Size = System::Drawing::Size(132, 56);
			this->botãoRelatóriosModelo->TabIndex = 0;
			this->botãoRelatóriosModelo->Text = L"Apresentar relatórios por modelo";
			this->botãoRelatóriosModelo->UseVisualStyleBackColor = true;
			// 
			// botãoRelatóriosProprietário
			// 
			this->botãoRelatóriosProprietário->Location = System::Drawing::Point(53, 263);
			this->botãoRelatóriosProprietário->Name = L"botãoRelatóriosProprietário";
			this->botãoRelatóriosProprietário->Size = System::Drawing::Size(132, 54);
			this->botãoRelatóriosProprietário->TabIndex = 1;
			this->botãoRelatóriosProprietário->Text = L"Apresentar relatórios por proprietário";
			this->botãoRelatóriosProprietário->UseVisualStyleBackColor = true;
			// 
			// botãoRelatorioFalha
			// 
			this->botãoRelatorioFalha->Location = System::Drawing::Point(53, 172);
			this->botãoRelatorioFalha->Name = L"botãoRelatorioFalha";
			this->botãoRelatorioFalha->Size = System::Drawing::Size(132, 51);
			this->botãoRelatorioFalha->TabIndex = 2;
			this->botãoRelatorioFalha->Text = L"Apresentar relatórios por modo de falha";
			this->botãoRelatorioFalha->UseVisualStyleBackColor = true;
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(191, 97);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 14;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(191, 188);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 15;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(191, 281);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 16;
			// 
			// TelaRelatorios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 379);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->labelMantenikola);
			this->Controls->Add(this->botãoRelatorioFalha);
			this->Controls->Add(this->botãoRelatóriosProprietário);
			this->Controls->Add(this->botãoRelatóriosModelo);
			this->Name = L"TelaRelatorios";
			this->Text = L"TelaRelatorios";
			this->Load += gcnew System::EventHandler(this, &TelaRelatorios::TelaRelatorios_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TelaRelatorios_Load(System::Object^  sender, System::EventArgs^  e) {
	}

};
}
