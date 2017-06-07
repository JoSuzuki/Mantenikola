#include "MenuPrincipal.h"

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Mantenikola::MenuPrincipal tela;
	Application::Run(%tela);
}