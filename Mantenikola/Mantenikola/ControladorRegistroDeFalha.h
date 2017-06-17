#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "ModoDeFalha.h"


using namespace std;
class ControladorRegistroDeFalha
{
private:
	static vector<ModoDeFalha*> vetorDeModosDeFalha;

public:
	ControladorRegistroDeFalha();
	static System::Data::DataTable^ getTabelaDeFalhas();
	static bool updateFalha(_int64 numeroDeSerie, string modelo, string dataDeEntrada, string providencia, string nomeModoDeFalha, string mecanico, string descricaoDeOutro);
	static void materializarModosDeFalha();
	static vector<ModoDeFalha*> getModosDeFalha();
	virtual ~ControladorRegistroDeFalha();
};

