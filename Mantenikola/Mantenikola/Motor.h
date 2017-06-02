#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Motor
{
private:
	int numeroDeSerie;
	string dataDeDesativacao;
	string estado;
public:
	Motor();
	int getNumeroDeSerie();
	string getDataDeDesativacao();
	string getEstado();
	virtual ~Motor();
};

