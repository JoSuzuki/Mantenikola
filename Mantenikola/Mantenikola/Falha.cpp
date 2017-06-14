#include "Falha.h"
#include "FalhaDAO.h"

Falha::Falha()
{
}

System::Data::DataTable ^ Falha::tabelaDeFalhas()
{
	return FalhaDAO::tabelaDeFalhas();
}

bool Falha::updateFalha(__int64 numeroDeSerie, string modelo, string dataDeEntrada, string providencia, string nomeModoDeFalha, string mecanico, string descricaoDeOutro)
{
	return FalhaDAO::updateFalha(numeroDeSerie, modelo, dataDeEntrada, providencia, nomeModoDeFalha, mecanico, descricaoDeOutro);
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
