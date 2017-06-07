#include "Modelo.h"
#include "ModeloDAO.h"



Modelo::Modelo(string nome)
{
	this->nome = nome;
}

vector<Modelo*> Modelo::getModelos()
{
	return ModeloDAO::getModelos();
}


Modelo::~Modelo()
{
}
