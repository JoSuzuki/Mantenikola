#pragma once
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
class ModoDeFalha
{
private:
	string nome;
public:
	ModoDeFalha(string nome);
	string getNome();
	static System::Data::DataTable ^ getTabelaDeModosDeFalhaPorModelo(string modoDeFalha);
	static vector<ModoDeFalha*> materializarModosDeFalha();
	virtual ~ModoDeFalha();
};