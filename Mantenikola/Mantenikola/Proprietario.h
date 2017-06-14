#pragma once
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Proprietario
{
protected:
	int id;
	string nome;
	int CEP;
	int numero;
	string complemento;
public:
	//Proprietario(string nome, int CEP, int numero,string complemento);
	Proprietario();
	virtual int getTipo()=0;  //metodo abstrato
	void setNome(string nome);
	string getNome();
	int getId();
	void setId(int id);
	static vector<Proprietario*> getProprietarios();
	virtual ~Proprietario();
};