#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Proprietario.h"
#include "Modelo.h"
#include "Motor.h"

using namespace std;
class ControladorCadastroDeMotor
{
public:
	ControladorCadastroDeMotor();
	static vector<Modelo*> getModelos();
	static bool existeMotor(int numeroDeSerie, string modelo);
	static void cadastarMotor(int numeroDeSerie, string modelo, string data, int id_proprietario);
	static vector<Proprietario*> getProprietarios();
	virtual ~ControladorCadastroDeMotor();
};

