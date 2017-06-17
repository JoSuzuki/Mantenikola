#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "ModoDeFalha.h"
#include "Modelo.h"


using namespace std;
class ControladorRelatorios
{
private:
	static vector<ModoDeFalha*> vetorDeModosDeFalha;
	static vector<Modelo*> vetorDeModelos;

public:
	ControladorRelatorios();
	static void materializarModosDeFalha();			//Não se se vai precisar,
	static vector<ModoDeFalha*> getModosDeFalha();	//   mas ta aqui.
	static void materializarModelos();
	static vector<Modelo*> getModelos();
	virtual ~ControladorRelatorios();
};