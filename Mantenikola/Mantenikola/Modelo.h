#pragma once
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
class Modelo
{
private:
	string nome;
public:
	Modelo(string nome);
	static vector<Modelo*> getModelos();
	virtual ~Modelo();
};

