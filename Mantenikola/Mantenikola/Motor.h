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
	static bool existeMotor(int numeroDeSerie, string modelo);
	static void cadastrarMotor(int numeroDeSerie, string modelo);
	string getEstado();
	virtual ~Motor();
};

