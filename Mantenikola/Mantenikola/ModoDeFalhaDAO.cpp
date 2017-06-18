#include "ModoDeFalhaDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <msclr\marshal_cppstd.h>

ModoDeFalhaDAO::ModoDeFalhaDAO()
{
}

System::Data::DataTable ^ ModoDeFalhaDAO::getTabelaDeModosDeFalhaPorModelo(string modoDeFalha)
{
	System::Data::DataTable ^ dataTable = gcnew System::Data::DataTable();
	dataTable->Columns->Add("Nome do modo de falha");
	dataTable->Columns->Add("Numero de ocorrencias");
	System::Data::DataRow^ row = dataTable->NewRow();

	sql::Connection * c = MyDAO::getInstance()->getConnection();
	sql::Statement *stmt;
	sql::ResultSet *res;
	stmt = c->createStatement();
	res = stmt->executeQuery("SELECT nome_modoDeFalha, count(Numero_de_serie_motor) FROM falha WHERE nome_modelo_motor = '"+modoDeFalha+"' GROUP BY nome_modoDeFalha");
	while (res->next()) {
		if (!res->getString("nome_modoDeFalha")->empty()) {
			System::Data::DataRow^ row = dataTable->NewRow();
			string nomeModoDeFalha = res->getString("nome_modoDeFalha");
			row["Nome do modo de falha"] = msclr::interop::marshal_as<System::String^>(nomeModoDeFalha);
			row["Numero de ocorrencias"] = res->getInt("count(Numero_de_serie_motor)");
			dataTable->Rows->Add(row);
		}
	}
	return dataTable;
}

vector<ModoDeFalha*> ModoDeFalhaDAO::materializarModosDeFalha()
{
	vector<ModoDeFalha*> vetorDeModosDeFalha;

	sql::Connection * c = MyDAO::getInstance()->getConnection();

	//std::unique_ptr<sql::Connection> con(c);
	sql::Statement *stmt;
	sql::ResultSet *res;
	stmt = c->createStatement();
	res = stmt->executeQuery("SELECT nome from ModoDeFalha");
	while (res->next()) {
		ModoDeFalha* modoDeFalha = new ModoDeFalha(res->getString("nome"));
		vetorDeModosDeFalha.push_back(modoDeFalha);
	}
	//delete res;
	//delete stmt;
	return vetorDeModosDeFalha;
}

ModoDeFalhaDAO::~ModoDeFalhaDAO()
{
}
