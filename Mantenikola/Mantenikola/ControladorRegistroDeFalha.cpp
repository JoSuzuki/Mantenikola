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

bool ControladorRegistroDeFalha::updateFalha(__int64 numeroDeSerie, string modelo, string dataDeEntrada, string providencia, string nomeModoDeFalha, string mecanico, string descricaoDeOutro)
{
	return Falha::updateFalha(numeroDeSerie, modelo, dataDeEntrada, providencia, nomeModoDeFalha, mecanico, descricaoDeOutro);
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
