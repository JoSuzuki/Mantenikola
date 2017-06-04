#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Modelo.h"

using namespace std;
class ControladorCadastroDeMotor
{
public:
	ControladorCadastroDeMotor();
	vector<Modelo*> getModelos();
	virtual ~ControladorCadastroDeMotor();
};

