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
	static vector<ModoDeFalha*> materializarModosDeFalha();
	virtual ~ModoDeFalhaDAO();
};
