#include "modeloDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>


ModeloDAO::ModeloDAO()
{
}


Modelo* ModeloDAO::getModelo(string nome)
{
	Modelo* modelo = nullptr;
	try {
		/* INSERT TUTORIAL CODE HERE! */
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = con->createStatement();
		res = stmt->executeQuery("SELECT nome, numero_usp, id from alunos where id = " + nome);

		while (res->next()) {
			modelo = new Modelo(res->getString("nome"));
			//motor->setId(res->getInt("id"));
			//motor->setNome(res->getString("nome"));
			//motor->setNumeroUsp(res->getString("numero_usp"));
		}
		delete res;
		delete stmt;
		// We need not check the return value explicitly. If it indicates
		// an error, Connector/C++ generates an exception.
	}
	catch (sql::SQLException &e) {
		/*
		MySQL Connector/C++ throws three different exceptions:

		- sql::MethodNotImplementedException (derived from sql::SQLException)
		- sql::InvalidArgumentException (derived from sql::SQLException)
		- sql::SQLException (derived from std::runtime_error)
		*/
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
		/* what() (derived from std::runtime_error) fetches error message */
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;

		return nullptr;
	}
	cout << "Done::GetModelo" << endl;
	return modelo;
}

vector<Modelo*> ModeloDAO::materializarModelos()
{
	vector<Modelo*> vetorDeModelos;
	sql::Connection * c = MyDAO::getInstance()->getConnection();
	std::unique_ptr<sql::Connection> con(c);
	sql::Statement *stmt;
	sql::ResultSet *res;
	stmt = con->createStatement();
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
