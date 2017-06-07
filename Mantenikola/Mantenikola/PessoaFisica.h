#pragma once
#include "Proprietario.h"
#include <iostream>
#include <sstream>
class Proprietario;
using namespace std;
class PessoaFisica : public Proprietario
{
private:
	string cpf;
public:
	PessoaFisica();
	int getTipo() override;
	virtual ~PessoaFisica();
};