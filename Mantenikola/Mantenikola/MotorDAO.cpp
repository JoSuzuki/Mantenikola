#include "motorDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <msclr\marshal_cppstd.h>




MotorDAO::MotorDAO()
{
}

Motor* MotorDAO::getMotor(int numeroDeSerie)
{
	Motor* motor = nullptr;
	try {
		/* INSERT TUTORIAL CODE HERE! */
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = con->createStatement();
		string parametro1 = std::to_string(numeroDeSerie);
		res = stmt->executeQuery("SELECT nome, numero_usp, id from alunos where id = " + parametro1);

		while (res->next()) {
			motor = new Motor();
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
	cout << "Done::GetMotor" << endl;
	return motor;
}

vector<Motor*> MotorDAO::getMotores()
{
	return vector<Motor*>();
}

int MotorDAO::inserir(Motor* motor)
{
	try {
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = con->createStatement();
		string numeroDeSerie = to_string(motor->getNumeroDeSerie());
		//System::String^ numeroUsp = msclr::interop::marshal_as<System::String^>(motor->getEstado());
		string estado = motor->getEstado();
		stmt->execute("INSERT INTO alunos(nome, numero_usp) VALUES ("+ numeroDeSerie+ ", '" + estado + "')");
	}
	catch (sql::SQLException &e) {

	}
	return 0;
}


MotorDAO::~MotorDAO()
{

}
