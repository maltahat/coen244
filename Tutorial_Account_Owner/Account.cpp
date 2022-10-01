#include "Account.h"

int Account::counter = 1;

Account::Account()
{
	accountNumber = counter++;
	accountName = "Chequing Account";
	balance = 0;
}

Account::Account(string accountName, double balance)
{
	accountNumber = counter++;
	this->accountName = accountName;
	this->balance = balance;
}

Account::Account(const Account& account)
{
	this->accountName = account.accountName;
	this->accountNumber = account.accountNumber;
	this->balance = account.balance;
}

bool Account::Withdraw(double amount)
{
	if (balance < amount)
	{
		//cout << "Insufficient balance" << endl;
		return false;
	}
	else
	{		
		balance -= amount;
		return true;
	}
}

void Account::Deposit(double amount)
{
	balance += amount;
}

void Account::Print()
{
	cout << "*********************************" << endl;
	cout << "Account Number: " << accountNumber << endl;
	cout << "Account Name: " << accountName << endl;
	cout << "Balance: $" << balance << endl;
	cout << "*********************************" << endl;
}

int Account::GetAccountNumber()
{
	return accountNumber;
}

int Account::GetBalance()
{
	return balance;
}