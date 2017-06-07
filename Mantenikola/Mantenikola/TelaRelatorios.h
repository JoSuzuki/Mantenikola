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
			// 
			// TelaRelatorios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"TelaRelatorios";
			this->Text = L"TelaRelatorios";
			this->Load += gcnew System::EventHandler(this, &TelaRelatorios::TelaRelatorios_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TelaRelatorios_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
