#include "modeloDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>


ModeloDAO::ModeloDAO()
{
}


vector<Modelo*> ModeloDAO::materializarModelos()
{
	vector<Modelo*> vetorDeModelos;
	sql::Connection * c = MyDAO::getInstance()->getConnection();
	//std::unique_ptr<sql::Connection> con(c);
	sql::Statement *stmt;
	sql::ResultSet *res;
	stmt = c->createStatement();
	res = stmt->executeQuery("SELECT nome from Modelo");
	while (res->next()) {
		Modelo* modelo = new Modelo(res->getString("nome"));
		vetorDeModelos.push_back(modelo);
	}
	return vetorDeModelos;
}


ModeloDAO::~ModeloDAO()
{

}
