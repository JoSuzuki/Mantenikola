#include "ControladorRegistroDeFalha.h"
#include "ModoDeFalha.h"
#include "Falha.h"

vector<ModoDeFalha*> ControladorRegistroDeFalha::vetorDeModosDeFalha = vector<ModoDeFalha*>();


ControladorRegistroDeFalha::ControladorRegistroDeFalha()
{
}

System::Data::DataTable ^ ControladorRegistroDeFalha::getTabelaDeFalhas()
{
	return Falha::tabelaDeFalhas();
}

void ControladorRegistroDeFalha::materializarModosDeFalha()
{
	vetorDeModosDeFalha = ModoDeFalha::materializarModosDeFalha();
}


vector<ModoDeFalha*> ControladorRegistroDeFalha::getModosDeFalha()
{
	return vetorDeModosDeFalha;
}




ControladorRegistroDeFalha::~ControladorRegistroDeFalha()
{
}
