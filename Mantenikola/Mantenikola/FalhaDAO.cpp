#include "FalhaDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>


FalhaDAO::FalhaDAO()
{
}

System::Data::DataTable ^ FalhaDAO::tabelaDeFalhas()
{
	System::Data::DataTable ^ dataTable = gcnew System::Data::DataTable();
	dataTable->Columns->Add("Modelo");
	dataTable->Columns->Add("Numero de Serie");
	dataTable->Columns->Add("Dias na oficina");
	dataTable->Columns->Add("Tipo do cliente");
	System::Data::DataRow^ row = dataTable->NewRow();
	row["Modelo"] = "NGB04";
	row["Numero de Serie"] = 77772211111;
	row["Dias na oficina"] = "3";
	row["Tipo do cliente"] = "Fisico";
	dataTable->Rows->Add(row);
	return dataTable;
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
