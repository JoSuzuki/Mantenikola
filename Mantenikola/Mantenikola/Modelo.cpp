#include "Modelo.h"
#include "ModeloDAO.h"



Modelo::Modelo(string nome)
{
	this->nome = nome;
}

string Modelo::getNome()
{
	return this->nome;
}

vector<Modelo*> Modelo::materializarModelos()
{
	return ModeloDAO::materializarModelos();
}

Modelo::~Modelo()
{
}
