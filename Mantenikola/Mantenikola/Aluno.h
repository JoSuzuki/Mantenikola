#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Aluno
{
private:
	//risos
	string nome;
	int id;
	string numeroUsp;
public:
	Aluno();
	string getNome();
	string getNumeroUsp();
	int getId();
	void setNome(string nome);
	void setNumeroUsp(string numeroUsp);
	void setId(int id);
	virtual ~Aluno();
};

