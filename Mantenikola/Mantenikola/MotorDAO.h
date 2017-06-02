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
	Motor* getMotor(int numeroDeSerie);
	vector<Motor*> getMotores();
	int inserir(Motor * motor);
	virtual ~MotorDAO();
};

