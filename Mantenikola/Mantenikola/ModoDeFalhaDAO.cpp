#include "ModoDeFalhaDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

ModoDeFalhaDAO::ModoDeFalhaDAO()
{
}

vector<ModoDeFalha*> ModoDeFalhaDAO::materializarModosDeFalha()
{
	vector<ModoDeFalha*> vetorDeModelos;

	sql::Connection * c = MyDAO::getInstance()->getConnection();

	//std::unique_ptr<sql::Connection> con(c);
	sql::Statement *stmt;
	sql::ResultSet *res;
	stmt = c->createStatement();
	res = stmt->executeQuery("SELECT nome from Modelo");
	while (res->next()) {
		ModoDeFalha* modoDeFalha = new ModoDeFalha(res->getString("nome"));
		vetorDeModelos.push_back(modoDeFalha);
	}
	//delete res;
	//delete stmt;
	return vetorDeModelos;
}

ModoDeFalhaDAO::~ModoDeFalhaDAO()
{
}
