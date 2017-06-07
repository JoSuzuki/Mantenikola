#include "Motor.h"
#include "MotorDAO.h"

Motor::Motor()
{

}

int Motor::getNumeroDeSerie()
{
	return this->numeroDeSerie;
}

string Motor::getDataDeDesativacao()
{
	return this->dataDeDesativacao;
}

bool Motor::existeMotor(int numeroDeSerie, string modelo)
{
	return MotorDAO::existeMotor(numeroDeSerie,modelo);
}

void Motor::cadastrarMotor(int numeroDeSerie, string modelo)
{
	MotorDAO::cadastrarMotor(numeroDeSerie, modelo);
}


string Motor::getEstado()
{
	return this->estado;
}


Motor::~Motor()
{
}
