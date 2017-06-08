#include "FalhaDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>


FalhaDAO::FalhaDAO()
{
}


void FalhaDAO::cadastrarFalha(string dataDeEntrada, int numeroDeSerie, string modelo)
{
	try {
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		//std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = c->createStatement();
		//System::String^ numeroUsp = msclr::interop::marshal_as<System::String^>(motor->getEstado());

		stmt->execute("INSERT INTO falha(Data_de_entrada, nome_modelo, numero_de_serie_motor) VALUES ('"+ dataDeEntrada +"','"+modelo+"',"+to_string(numeroDeSerie)+")");
	}
	catch (sql::SQLException &e) {

	}
	return;
}


FalhaDAO::~FalhaDAO()
{

}
