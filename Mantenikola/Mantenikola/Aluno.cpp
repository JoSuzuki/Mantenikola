 #include "Aluno.h"

Aluno::Aluno()
{
}

string Aluno::getNome()
{
	return this->nome;
}

string Aluno::getNumeroUsp()
{
	return this->numeroUsp;
}


int Aluno::getId()
{
	return this->id;
}

void Aluno::setNome(string nome)
{
	this->nome = nome;
}

void Aluno::setNumeroUsp(string numeroUsp)
{
	this->numeroUsp = numeroUsp;
}

void Aluno::setId(int id)
{
	this->id = id;
}

Aluno::~Aluno()
{
}
 