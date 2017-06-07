#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Proprietario.h"
#include "Modelo.h"

using namespace std;
class ControladorCadastroDeMotor
{
public:
	ControladorCadastroDeMotor();
	static vector<Modelo*> getModelos();
	static vector<Proprietario*> getProprietarios();
	virtual ~ControladorCadastroDeMotor();
};

