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



bool Motor::cadastrarMotor(_int64 numeroDeSerie, string modelo, int id_proprietario)
{
	return MotorDAO::cadastrarMotor(numeroDeSerie, modelo, id_proprietario);
}


string Motor::getEstado()
{
	return this->estado;
}


Motor::~Motor()
{
}
