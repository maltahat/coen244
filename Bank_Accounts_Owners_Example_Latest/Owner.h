#pragma once

#include <iostream>
#include "Account.h"

class Owner
{
private:
	std::string name;
	int id; 
	int numOfAccounts;

	//Account accounts[3];
	Account* accounts[3];   //Account* pointer;    pointer = new Account[3]

	//accounts[i] --> Account*             pointer[i] --> Account


	static int counter;

public:

	Owner();

	Owner(std::string name);

	void Print();

	bool InsertAccount(Account* account);

	bool SearchForAccount(int id);

	bool RemoveAccount(int account_id);

	~Owner();
};