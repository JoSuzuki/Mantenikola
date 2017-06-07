#include "MenuPrincipal.h"

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MenuPrincipal tela;
	Application::Run(%tela);
}