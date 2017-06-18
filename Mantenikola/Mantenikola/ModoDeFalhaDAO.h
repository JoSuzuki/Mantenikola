#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "ModoDeFalha.h"
#include "MyDAO.h"
using namespace std;
class ModoDeFalhaDAO
{
public:
	ModoDeFalhaDAO();
	static System::Data::DataTable ^ getTabelaDeModosDeFalhaPorModelo(string modoDeFalha);
	static vector<ModoDeFalha*> materializarModosDeFalha();
	virtual ~ModoDeFalhaDAO();
};
