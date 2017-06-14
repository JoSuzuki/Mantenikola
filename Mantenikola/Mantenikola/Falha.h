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
	static System::Data::DataTable^ tabelaDeFalhas();
	static bool updateFalha(_int64 numeroDeSerie, string modelo, string dataDeEntrada, string providencia, string nomeModoDeFalha, string mecanico, string descricaoDeOutro);
	void setDataDeEntrada(string dataDeEntrada);
	static void cadastrarFalha(string dataDeEntrada, _int64 numeroDeSerie, string modelo);
	virtual ~Falha();
};