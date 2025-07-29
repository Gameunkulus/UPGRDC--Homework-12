#pragma once

#include <iostream>
#include <pqxx/pqxx>
#include <vector>
#include <Windows.h>
#include <string>
#include <codecvt>

using namespace std;

struct Client
{
	string name;
	string surname;
	string email;
	vector<string> phones;
};

class DataBase
{
private:
	pqxx::connection link;

	void createDataTables();
	void addClient(const string& name, const string& surname, const string& email, const string& phone);
	void addPhone(const string& name, const string& phone);
	void updateClient(const string& email, string& newName, const string& newSurname, const string& newEmail);
	void removePhone(const string& email, const string& phone);
	void removeClient(const string& email);

	vector<Client> findClients(const string& query);

	void show();
};