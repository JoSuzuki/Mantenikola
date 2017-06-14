#include "Falha.h"
#include "FalhaDAO.h"

Falha::Falha()
{
}

System::Data::DataTable ^ Falha::tabelaDeFalhas()
{
	return FalhaDAO::tabelaDeFalhas();
}

void Falha::setDataDeEntrada(string dataDeEntrada)
{
	this->dataDeEntrada = dataDeEntrada;
}

void Falha::cadastrarFalha(string dataDeEntrada, _int64 numeroDeSerie, string modelo)
{
	FalhaDAO::cadastrarFalha(dataDeEntrada, numeroDeSerie, modelo);
}

Falha::~Falha()
{
}
