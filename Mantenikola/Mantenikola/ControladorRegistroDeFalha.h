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
	static void materializarModosDeFalha();
	static vector<ModoDeFalha*> getModosDeFalha();
	virtual ~ControladorRegistroDeFalha();
};

