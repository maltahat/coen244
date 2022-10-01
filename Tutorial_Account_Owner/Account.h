#pragma once

#include <iostream>
using namespace std;

class Account
{
	private:
		int accountNumber;
		string accountName;
		double balance;

		static int counter;

	public:
		Account();

		Account(string accountName, double balance);

		Account(const Account&);

		bool Withdraw(double amount);

		void Deposit(double amount);

		void Print();

		int GetAccountNumber();

		int GetBalance();
};