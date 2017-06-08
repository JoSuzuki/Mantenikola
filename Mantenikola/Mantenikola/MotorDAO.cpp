#include "motorDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>


MotorDAO::MotorDAO()
{
}

Motor* MotorDAO::getMotor(int numeroDeSerie, string modelo)
{
	Motor* motor = nullptr;
	try {
		/* INSERT TUTORIAL CODE HERE! */
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		//std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = c->createStatement();
		string parametro1 = std::to_string(numeroDeSerie);
		res = stmt->executeQuery("SELECT numeroDeSerie from motor where Numero_de_serie = " + to_string(numeroDeSerie) + "&& Nome_modelo = " + modelo);

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

/*
bool MotorDAO::existeMotor(int numeroDeSerie, string modelo)
{
	bool existe = false;
	try {
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = con->createStatement();
		string parametro1 = std::to_string(numeroDeSerie);
		res = stmt->executeQuery("SELECT numeroDeSerie from motor where Numero_de_serie = " + to_string(numeroDeSerie) + "&& Nome_modelo = " + modelo);

		while (res->next()) {
			existe = true;
		}
		delete res;
		delete stmt;
		// We need not check the return value explicitly. If it indicates
		// an error, Connector/C++ generates an exception.
	}
	catch (sql::SQLException &e) {
		
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;

		return existe;
	}
	return existe;
}*/

bool MotorDAO::cadastrarMotor(int numeroDeSerie, string modelo, int id_proprietario)
{
	try {
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		//std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = c->createStatement();
		//System::String^ numeroUsp = msclr::interop::marshal_as<System::String^>(motor->getEstado());
		
		stmt->execute("INSERT INTO motor(Numero_de_serie, Nome_modelo, Id_proprietario) VALUES ("+ to_string(numeroDeSerie) + ", '" + modelo + "',"+to_string(id_proprietario)+")");
	}
	catch (sql::SQLException &e) {
		return false;
	}
	return true;
}


MotorDAO::~MotorDAO()
{

}
