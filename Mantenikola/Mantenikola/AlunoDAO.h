#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Aluno.h"
#include "MyDAO.h"
using namespace std;
class AlunoDAO
{
public:
	AlunoDAO();
	Aluno* getAluno(int id);
	vector<Aluno> getAlunos();
	int inserir(Aluno * aluno);
	virtual ~AlunoDAO();
};

