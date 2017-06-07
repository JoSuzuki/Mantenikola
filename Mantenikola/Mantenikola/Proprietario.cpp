#include "Proprietario.h"
#include "ProprietarioDAO.h"

Proprietario::Proprietario()
{
}


vector<Proprietario*> Proprietario::getProprietarios()
{
	return ProprietarioDAO::getProprietarios();
}

Proprietario::~Proprietario()
{
}
