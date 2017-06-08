#include "ControladorCadastroDeMotor.h"
#include "Motor.h"
#include "Falha.h"



ControladorCadastroDeMotor::ControladorCadastroDeMotor()
{
}

void ControladorCadastroDeMotor::materializarModelos()
{
	this->vetorDeModelos = Modelo::materializarModelos();
}

vector<Modelo*> ControladorCadastroDeMotor::getModelos()
{
	return this->vetorDeModelos;
}


bool ControladorCadastroDeMotor::cadastarMotor(int numeroDeSerie, string modelo, string data, string proprietario)
{
	int id_proprietario;
	for (int i = 0; i < this->vetorDeProprietarios.size(); i++) {
		if (this->vetorDeProprietarios[i]->getNome() == proprietario) {
			id_proprietario = this->vetorDeProprietarios[i]->getId();
			break; // achou o proprietario pode sair do loop
		}
	}
	bool cadastrou = Motor::cadastrarMotor(numeroDeSerie, modelo, id_proprietario);
	if (cadastrou == true) {
		Falha::cadastrarFalha(data, numeroDeSerie, modelo);
	}
	
	return cadastrou;
}

void ControladorCadastroDeMotor::materializarProprietarios()
{
	this->vetorDeProprietarios = Proprietario::getProprietarios();
}

void ControladorCadastroDeMotor::cadastrarFalha(int numeroDeSerie, string modelo, string data)
{
	Falha::cadastrarFalha(data, numeroDeSerie, modelo);
}

vector<Proprietario*> ControladorCadastroDeMotor::getProprietarios()
{
	return this->vetorDeProprietarios;
}


ControladorCadastroDeMotor::~ControladorCadastroDeMotor()
{
}