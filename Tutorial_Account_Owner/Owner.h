#pragma once

#include "Account.h"

class Owner
{
	private:
		string name;

		Account* accountArray[4];

	public:
		Owner(string name);

		bool addAccount(Account account);		

		bool removeAccount(int accNum);

		void Print();

		double totalBalance();
};