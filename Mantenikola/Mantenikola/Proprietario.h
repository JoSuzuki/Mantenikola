#pragma once
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Proprietario
{
protected:
	string nome;
	int CEP;
	int numero;
	string complemento;
public:
	//Proprietario(string nome, int CEP, int numero,string complemento);
	Proprietario();
	virtual int getTipo()=0;  //metodo abstrato
	static vector<Proprietario*> getProprietarios();
	virtual ~Proprietario();
};