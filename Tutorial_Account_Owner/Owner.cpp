#include "Owner.h"

Owner::Owner(string name)
{
	this->name = name;

	for (int i = 0; i < 4; i++)
		accountArray[i] = nullptr;
}

bool Owner::addAccount(Account account) 
{
	for (int i = 0; i < 4; i++)
		if (accountArray[i] == nullptr)
		{
			accountArray[i] = new Account(account);
			return true;
		}

	return false;
}

bool Owner::removeAccount(int accNum) 
{
	for (int i = 0; i < 4; i++)
		if (accountArray[i] != nullptr)
		{
			if (accountArray[i]->GetAccountNumber() == accNum)
			{
				delete accountArray[i];
				accountArray[i] = nullptr;
				return true;
			}
		}

	return false;
}

void Owner::Print()
{
	cout << "Owner name: " << name << endl;
	cout << "Accounts info: " << endl;

	for (int i = 0; i < 4; i++)
		if (accountArray[i] != nullptr)
			accountArray[i]->Print();
}

double Owner::totalBalance()
{
	double totalBalance = 0;

	for (int i = 0; i < 4; i++)
		if (accountArray[i] != nullptr)
			totalBalance += accountArray[i]->GetBalance();

	return totalBalance;
}