#include "ModoDeFalha.h"
#include "ModoDeFalhaDAO.h"

ModoDeFalha::ModoDeFalha(string nome)
{
	this->nome = nome;
}

string ModoDeFalha::getNome()
{
	return this->nome;
}

System::Data::DataTable ^ ModoDeFalha::getTabelaDeModosDeFalhaPorModelo(string modoDeFalha)
{
	return ModoDeFalhaDAO::getTabelaDeModosDeFalhaPorModelo(modoDeFalha);
}

vector<ModoDeFalha*> ModoDeFalha::materializarModosDeFalha()
{
	return ModoDeFalhaDAO::materializarModosDeFalha();
}

ModoDeFalha::~ModoDeFalha()
{
}
