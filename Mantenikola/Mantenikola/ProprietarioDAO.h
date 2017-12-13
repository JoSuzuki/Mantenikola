#pragma once
#include <vector>
#include <iostream>
#include <sstream>
#include "MyDAO.h"
#include "Proprietario.h"

using namespace std;
class ProprietarioDAO
{
public:
	ProprietarioDAO();
	Proprietario* getProprietario(int id);
	static vector<Proprietario*> getProprietarios();
	virtual ~ProprietarioDAO();
};