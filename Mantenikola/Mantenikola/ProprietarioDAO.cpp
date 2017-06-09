#include "proprietarioDAO.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>


ProprietarioDAO::ProprietarioDAO()
{
}

Proprietario* ProprietarioDAO::getProprietario(int id)
{
	Proprietario* proprietario = nullptr;
	try {
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		//std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = c->createStatement();
		string parametro1 = std::to_string(id);
		res = stmt->executeQuery("SELECT Nome, Tipo_CPF_CNPJ from Proprietario where Id = " + parametro1);
		while (res->next()) {
			if (res->getBoolean("Tipo_CPF_CNPJ")) {
				proprietario = new PessoaFisica();
			}
			else {
				proprietario = new PessoaFisica();
			}
		}
		// delete res;
		//delete stmt;
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
	cout << "Done::GetProprietario" << endl;
	return proprietario;
}

vector<Proprietario*> ProprietarioDAO::getProprietarios()
{
	vector<Proprietario*> vetorDeProprietarios;
	Proprietario* proprietario = nullptr;
	sql::Connection * c = MyDAO::getInstance()->getConnection();
	//std::unique_ptr<sql::Connection> con(c);
	sql::Statement *stmt;
	sql::ResultSet *res;
	stmt = c->createStatement();
	res = stmt->executeQuery("SELECT Nome, Tipo_CPF_CNPJ from Proprietario");
	while (res->next()) {
		if (res->getBoolean("Tipo_CPF_CNPJ")) {
			proprietario = new PessoaFisica();
		}
		else {
			proprietario = new PessoaJuridica();
		}
		proprietario->setNome(res->getString("Nome"));
		vetorDeProprietarios.push_back(proprietario);
	}
	return vetorDeProprietarios;
}



ProprietarioDAO::~ProprietarioDAO()
{
}
