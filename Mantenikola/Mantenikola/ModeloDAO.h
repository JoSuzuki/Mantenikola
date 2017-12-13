#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Modelo.h"
#include "MyDAO.h"
using namespace std;
class ModeloDAO
{
public:
	ModeloDAO();
	static vector<Modelo*> materializarModelos();
	virtual ~ModeloDAO();
};

