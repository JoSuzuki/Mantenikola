#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include "Motor.h"
#include "MyDAO.h"
using namespace std;
class MotorDAO
{
public:
	MotorDAO();
	Motor* getMotor(_int64 numeroDeSerie, string modelo);
	vector<Motor*> getMotores();
	static bool cadastrarMotor(_int64 numeroDeSerie, string modelo, int id_proprietario);
	virtual ~MotorDAO();
};

