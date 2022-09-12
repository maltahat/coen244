#pragma once

#include <iostream>
using namespace std;

class Account
{
	private:
		int accountNum; // account number
		double balance; // the balance
	public:

		Account()
		{
			cout << "account default constructor called" << endl;
			accountNum = 0;
			balance = 0;
		} // default constructor

		Account(int an, double b)
		{
			cout << "account regular constructor called" << endl;
			accountNum = an;
			balance = b;
		} // regular constructor

		Account(const Account& anotherAccount)
		{
			cout << "account copy constructor called" << endl;
			accountNum = anotherAccount.accountNum;
			balance = anotherAccount.balance;
		} // copy constructor

		~Account()
		{
			cout << "Account Destructor called" << endl;
		} // destructor. Does nothing
};
