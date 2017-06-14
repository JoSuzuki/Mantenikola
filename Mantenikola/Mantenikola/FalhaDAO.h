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
	static void cadastrarFalha(string dataDeEntrada, int numeroDeSerie, string modelo);
	virtual ~FalhaDAO();
};