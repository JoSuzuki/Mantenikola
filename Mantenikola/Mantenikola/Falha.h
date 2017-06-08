#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Falha
{
private:
	string dataDeEntrada;
public:
	Falha();
	void setDataDeEntrada(string dataDeEntrada);
	static void cadastrarFalha(string dataDeEntrada, int numeroDeSerie, string modelo);
	virtual ~Falha();
};