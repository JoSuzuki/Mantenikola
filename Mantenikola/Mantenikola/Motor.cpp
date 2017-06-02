#include "Motor.h"

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


string Motor::getEstado()
{
	return this->estado;
}


Motor::~Motor()
{
}
