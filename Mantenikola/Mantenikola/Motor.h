#pragma once
#include "Modelo.h"
#include <iostream>
#include <sstream>
using namespace std;
class Motor
{
private:
	int numeroDeSerie;
	string dataDeDesativacao;
	string estado;
	Modelo* modelo;
public:
	Motor();
	int getNumeroDeSerie();
	string getDataDeDesativacao();
	static bool cadastrarMotor(int numeroDeSerie, string modelo, int id_proprietario);
	string getEstado();
	virtual ~Motor();
};

