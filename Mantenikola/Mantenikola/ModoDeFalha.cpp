#include "ModoDeFalha.h"
#include "ModoDeFalhaDAO.h"

ModoDeFalha::ModoDeFalha(string nome)
{
}

string ModoDeFalha::getNome()
{
	return this->nome;
}

vector<ModoDeFalha*> ModoDeFalha::materializarModosDeFalha()
{
	return ModoDeFalhaDAO::materializarModosDeFalha();
}

ModoDeFalha::~ModoDeFalha()
{
}
