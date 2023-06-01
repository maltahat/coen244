#include "Owner.h"
using namespace std;

int Owner::counter = 0;

Owner::Owner()
{
	id = ++counter;
	name = "***";
	numOfAccounts = 0;

	for (int i = 0; i < 3; i++)
		accounts[i] = nullptr;

}

Owner::Owner(std::string name) 
{
	id = ++counter;
	this->name = name;
	numOfAccounts = 0;

	for (int i = 0; i < 3; i++)
		accounts[i] = nullptr;
}

void Owner::Print()
{
	cout << endl << "Owner name: " << name << endl;
	cout << "Number of accounts: " << numOfAccounts << endl;

	for (int i = 0; i < 3; i++)
		if (accounts[i] != nullptr)
			accounts[i]->Print();

	cout << endl << endl;
}

bool Owner::InsertAccount(Account* account) 
{
	if (numOfAccounts < 3)
	{
		for (int i = 0; i < 3; i++)
		{
			if (accounts[i] == nullptr)
			{
				accounts[i] = new Account(*account);

				//accounts[i] = account;

				numOfAccounts++;
				return true;
			}
		}
	}

	cout << "You reached the limit of 3 accounts... Cannot add account" << endl;
	return false;	
}

bool Owner::SearchForAccount(int id)
{
	for (int i = 0; i < 3; i++)
	{
		if (id == accounts[i]->GetId())
		{
			cout << "Account " << id << " found: " << endl;
			accounts[i]->Print();
			return true;
		}
	}

	cout << "Account " << id << " NOT found." << endl;
	return false;
}

bool Owner::RemoveAccount(int account_id)
{
	for (int i = 0; i < 3; i++)
	{
		if (accounts[i] != nullptr)
		{
			if (accounts[i]->GetId() == account_id)
			{
				delete accounts[i];
				accounts[i] = nullptr;

				numOfAccounts--;

				return true;
			}
		}
	}

	return false;
}

Owner::~Owner()
{
	cout << "Deleting Accounts of: " << name << endl;

	for (int i = 0; i < 3; i++)
	{
		if (accounts[i] != nullptr)
			delete accounts[i];
	}

	cout << "Owner: " << name << " is deleted." << endl;
}

// nullptr    nullptr    nullptr
// insert(123) --> 123   nullptr    nullptr
// insert(435) --> 123   435   nullptr
//insert(567) -->  123   435   567

//  123     435      567
// remove(435)   --> 123    nullptr   567
//insert(987)  -->  123   987   567