#include "Account.h"

using namespace std;

int Account::counter = 0;

Account::Account()
{
	id = ++counter;
	balance = 0;
	type = "Checking";
	cout << "Default Constructor is called" << endl;
}

Account::Account(float balance, string type)
{
	id = ++counter;
	this->balance = balance;
	this->type = type;

	cout << "Second Constructor is called" << endl;
}

void Account::Print()
{
	//cout << "-------------------------------" << endl;
	cout << endl << type << " Account number: " << id << endl;
	cout << "Balance: $" << balance << endl << endl;
	//cout << "-------------------------------" << endl;
}

int Account::GetId() 
{
	return id;
}

Account::~Account()
{
	cout << "Account: " << id << " is deleted." << endl;
}