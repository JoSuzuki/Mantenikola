#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "MyDAO.h"
using namespace std;
class ProprietarioDAO
{
public:
	ProprietarioDAO();
	Proprietario* getProprietario(int id);
	vector<Proprietario*> getProprietarios();
	virtual ~ProprietarioDAO();
};