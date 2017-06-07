#pragma once
#include "Proprietario.h"
#include <iostream>
#include <sstream>
using namespace std;
class PessoaFisica : public Proprietario
{
private:
	string cpf;
public:
	//PessoaFisica(string nome, int CEP, int numero, string complemento, string cpf) : Proprietario(nome, CEP, numero, complemento){}
	PessoaFisica() : Proprietario() {}
	int getTipo() override;
	virtual ~PessoaFisica();
};