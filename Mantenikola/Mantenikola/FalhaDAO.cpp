#include "FalhaDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <msclr\marshal_cppstd.h>



FalhaDAO::FalhaDAO()
{
}

System::Data::DataTable ^ FalhaDAO::tabelaDeFalhas()
{
	System::Data::DataTable ^ dataTable = gcnew System::Data::DataTable();
	dataTable->Columns->Add("Modelo");
	dataTable->Columns->Add("Numero de Serie");
	dataTable->Columns->Add("Data de entrada");
	dataTable->Columns->Add("Tipo do cliente");
	System::Data::DataRow^ row = dataTable->NewRow();

	sql::Connection * c = MyDAO::getInstance()->getConnection();
	sql::Statement *stmt;
	sql::ResultSet *res;
	stmt = c->createStatement();
	res = stmt->executeQuery("SELECT nome_modelo, numero_de_serie_motor, data_de_entrada, tipo_cpf_cnpj, providencia_tomada FROM falha INNER JOIN motor ON falha.nome_modelo_motor = motor.nome_modelo && falha.numero_de_serie_motor = motor.numero_de_serie INNER JOIN proprietario ON proprietario.Id = motor.Id_Proprietario");
	while (res->next()) {
		if (res->getString("providencia_tomada")->empty()) {
			System::Data::DataRow^ row = dataTable->NewRow();
			string modelo = res->getString("nome_modelo");
			row["Modelo"] = msclr::interop::marshal_as<System::String^>(modelo);
			row["Numero de Serie"] = res->getInt64("numero_de_serie_motor");
			string dataDeEntrada = res->getString("data_de_entrada");
			row["Data de entrada"] = msclr::interop::marshal_as<System::String^>(dataDeEntrada);
			if (res->getBoolean("tipo_cpf_cnpj")) {
				row["Tipo do cliente"] = "Juridico";
			}
			else {
				row["Tipo do cliente"] = "Fisico";
			}
			dataTable->Rows->Add(row);
		} 
	}
	return dataTable;
}

bool FalhaDAO::updateFalha(__int64 numeroDeSerie, string modelo, string dataDeEntrada, string providencia, string nomeModoDeFalha, string mecanico, string descricaoDeOutro)
{
	
	try {
		sql::Connection * c = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = c->createStatement();
		stmt->execute("UPDATE falha SET Providencia_tomada='" + providencia + "', Nome_ModoDeFalha='" + nomeModoDeFalha + "', Descricao_de_outro='" + descricaoDeOutro + "', Login_Funcionario='" + mecanico + "' where Data_de_entrada='" + dataDeEntrada + "' and Nome_modelo_motor='" + modelo + "' and Numero_de_serie_Motor=" + to_string(numeroDeSerie));
	}
	catch (sql::SQLException &e) {
		cout << "Deu ruim no update de falha" << endl;
		return false;
	}
	return true;
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
