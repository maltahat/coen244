#pragma once

#include <string>
#include "Account.h"
#include <array>

using namespace std;

class Owner
{
	private:
		string name; // name of the person
		int numAccounts; // represents the current number of accounts held by this owner
		//Account * accounts ; // list of accounts of this person, assume that an owner can have a max of 3 accounts

		array<Account*,3> accounts; //array of Account pointers

	public:
		Owner()
		{
			cout << "Owner constructor called" << endl;
			name = "";
			numAccounts = 0;
			//accounts = new Account[3];

			for(int i=0; i < accounts.size(); i++)
				accounts[i] = nullptr; // default constructor

		} // default constructor

		Owner(const Owner& anotherOwner)
		{
			this->name = anotherOwner.name;
			this->numAccounts = anotherOwner.numAccounts;
			//this->accounts = anotherOwner.accounts;

			for(int i=0; i < anotherOwner.accounts.size(); i++)
			{
				if(anotherOwner.accounts[i] == nullptr)
					accounts[i] = nullptr;
				else
					accounts[i] = new Account(*anotherOwner.accounts[i]);
			}
		}

		~Owner()
		{
			//delete[] accounts; // delete all attributes that are pointers

			for(int i = 0; i < accounts.size(); i++)
				if (accounts[i] != nullptr)
					delete accounts[i];

			cout << "Owner Destructor called" << endl;
		}




		void addAccount(const Account& a)
		{
			if (numAccounts < 3)
			{
				accounts[numAccounts] = new Account(a);  //this creates a new Account object.. Dynamically
				numAccounts++;
			}
			else {
				cout << "Account cannot be added number of accounts exceeded " << endl;
			}
		}



};
