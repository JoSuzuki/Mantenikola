#pragma once
#include "Proprietario.h"
#include <iostream>
#include <sstream>
class Proprietario;

using namespace std;
class PessoaJuridica : public Proprietario
{
private:
	string cnpj;
public:
	//PessoaJuridica(string nome, int CEP, int numero, string complemento, string cnpj) : Proprietario(nome, CEP, numero, complemento) {}
	PessoaJuridica();
	int getTipo() override;
	virtual ~PessoaJuridica();
};
