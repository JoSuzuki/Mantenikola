#include "ControladorCadastroDeMotor.h"
#include "Motor.h"
#include "Falha.h"

vector<Modelo*> ControladorCadastroDeMotor::vetorDeModelos = vector<Modelo*>();
vector<Proprietario*> ControladorCadastroDeMotor::vetorDeProprietarios = vector<Proprietario*>();


ControladorCadastroDeMotor::ControladorCadastroDeMotor()
{
}

void ControladorCadastroDeMotor::materializarModelos()
{
	vetorDeModelos = Modelo::materializarModelos();
}


vector<Modelo*> ControladorCadastroDeMotor::getModelos()
{
	return vetorDeModelos;
} 


bool ControladorCadastroDeMotor::cadastrarMotor(_int64 numeroDeSerie, string modelo, string data, string proprietario)
{
	int id_proprietario;
	cout << proprietario << endl;
	for (int i = 0; i < vetorDeProprietarios.size(); i++) {
		cout << vetorDeProprietarios[i]->getNome() << endl;
		cout << vetorDeProprietarios[i]->getId() << endl;
		if (vetorDeProprietarios[i]->getNome() == proprietario) {
			id_proprietario = vetorDeProprietarios[i]->getId();
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
	vetorDeProprietarios = Proprietario::getProprietarios();
}

void ControladorCadastroDeMotor::cadastrarFalha(_int64 numeroDeSerie, string modelo, string data)
{
	Falha::cadastrarFalha(data, numeroDeSerie, modelo);
}


vector<Proprietario*> ControladorCadastroDeMotor::getProprietarios()
{
	return vetorDeProprietarios;
}


ControladorCadastroDeMotor::~ControladorCadastroDeMotor()
{
}