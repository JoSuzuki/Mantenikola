#include "AlunoDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>



AlunoDAO::AlunoDAO()
{
}

Aluno * AlunoDAO::getAluno(int id)
{
	Aluno * aluno = nullptr;
	try {
		/* INSERT TUTORIAL CODE HERE! */
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = con->createStatement();
		string parametro1 = std::to_string(id);
		res = stmt->executeQuery("SELECT nome, numero_usp, id from alunos where id = " +parametro1 );
		
		while (res->next()) {
			aluno = new Aluno();
			aluno->setId(res->getInt("id"));
			aluno->setNome(res->getString("nome"));
			aluno->setNumeroUsp(res->getString("numero_usp"));	
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
	cout << "Done::GetAluno" << endl;
	return aluno;
}

vector<Aluno> AlunoDAO::getAlunos()
{
	return vector<Aluno>();
}

int AlunoDAO::inserir(Aluno * aluno)
{
	try {
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		std::unique_ptr<sql::Connection> con(c);
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = con->createStatement();
		string nome = aluno->getNome();
		string numeroUsp = aluno->getNumeroUsp();
		stmt->execute("INSERT INTO alunos(nome, numero_usp) VALUES ('"+nome+"', '"+numeroUsp+"')");
	}
	catch (sql::SQLException &e){

}
	return 0;
}


AlunoDAO::~AlunoDAO()
{

}
