#pragma once
#include "Proprietario.h"
#include <iostream>
#include <sstream>
using namespace std;
class PessoaJuridica : public Proprietario
{
private:
	string cnpj;
public:
	//PessoaJuridica(string nome, int CEP, int numero, string complemento, string cnpj) : Proprietario(nome, CEP, numero, complemento) {}
	PessoaJuridica() : Proprietario(){}
	int getTipo() override;
	virtual ~PessoaJuridica();
};
