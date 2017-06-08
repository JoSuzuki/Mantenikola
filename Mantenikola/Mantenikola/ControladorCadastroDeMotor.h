#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Proprietario.h"
#include "Modelo.h"


using namespace std;
class ControladorCadastroDeMotor
{
private:
	vector<Modelo*> vetorDeModelos;
	vector<Proprietario*> vetorDeProprietarios;


public:
	ControladorCadastroDeMotor();
	void materializarModelos();
	vector<Modelo*> getModelos();
	bool cadastarMotor(int numeroDeSerie, string modelo, string data, string proprietario); //cadastro falha caso cadastro de motor tenha sido bem sucedido
	void materializarProprietarios();
	void cadastrarFalha(int numeroDeSerie, string modelo, string data);
	vector<Proprietario*> getProprietarios();
	virtual ~ControladorCadastroDeMotor();
};

