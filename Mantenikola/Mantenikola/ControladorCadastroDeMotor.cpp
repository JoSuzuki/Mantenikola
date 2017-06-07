#include "ControladorCadastroDeMotor.h"



ControladorCadastroDeMotor::ControladorCadastroDeMotor()
{
}

vector<Modelo*> ControladorCadastroDeMotor::getModelos()
{
	return Modelo::getModelos();
}

bool ControladorCadastroDeMotor::existeMotor(int numeroDeSerie, string modelo)
{
	return Motor::existeMotor(numeroDeSerie, modelo);
}

void ControladorCadastroDeMotor::cadastarMotor(int numeroDeSerie, string modelo, string data, int id_proprietario)
{
	Motor::cadastrarMotor(numeroDeSerie, modelo);

}

vector<Proprietario*> ControladorCadastroDeMotor::getProprietarios()
{
	return Proprietario::getProprietarios();
}


ControladorCadastroDeMotor::~ControladorCadastroDeMotor()
{
}