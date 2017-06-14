#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Falha.h"
#include "MyDAO.h"
using namespace std;
class FalhaDAO
{
public:
	FalhaDAO();
	static System::Data::DataTable^ tabelaDeFalhas();
	static bool updateFalha(__int64 numeroDeSerie, string modelo, string dataDeEntrada, string providencia, string nomeModoDeFalha, string mecanico, string descricaoDeOutro);
	static void cadastrarFalha(string dataDeEntrada, int numeroDeSerie, string modelo);
	virtual ~FalhaDAO();
};