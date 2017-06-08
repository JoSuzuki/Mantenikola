#include "Falha.h"
#include "FalhaDAO.h"

Falha::Falha()
{
}

void Falha::setDataDeEntrada(string dataDeEntrada)
{
	this->dataDeEntrada = dataDeEntrada;
}

void Falha::cadastrarFalha(string dataDeEntrada, int numeroDeSerie, string modelo)
{
	FalhaDAO::cadastrarFalha(dataDeEntrada, numeroDeSerie, modelo);
}

Falha::~Falha()
{
}
