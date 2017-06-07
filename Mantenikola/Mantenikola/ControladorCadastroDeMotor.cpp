#include "ControladorCadastroDeMotor.h"



ControladorCadastroDeMotor::ControladorCadastroDeMotor()
{
}

vector<Modelo*> ControladorCadastroDeMotor::getModelos()
{
	return Modelo::getModelos();
}

vector<Proprietario*> ControladorCadastroDeMotor::getProprietarios()
{
	return Proprietario::getProprietarios();
}


ControladorCadastroDeMotor::~ControladorCadastroDeMotor()
{
}