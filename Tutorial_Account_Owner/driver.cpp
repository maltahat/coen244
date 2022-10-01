// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Account.h"
#include "Owner.h"
#include <iostream>
using namespace std;


int main()
{
    Account acc1;
    acc1.Deposit(1000);

    Account acc2("Saving Account", 2000);

    Account acc3;
    acc3.Deposit(3000);



    Owner own1("John");

    own1.Print();

    own1.addAccount(acc1);
    own1.addAccount(acc2);
    own1.addAccount(acc3);

    cout << "\nAfter adding threee accounts: " << endl;
    own1.Print();


    own1.removeAccount(2);

    cout << "\nAfter removing account 2: " << endl;
    own1.Print();


    Account acc4("Checquing Account", 5000);

    own1.addAccount(acc4);
    cout << "\nAfter adding account 4: " << endl;
    own1.Print();

    own1.addAccount(acc2);
    cout << "\nAfter adding account 2: " << endl;
    own1.Print();

    Account acc5;

    if (own1.addAccount(acc5))
        cout << "Account added" << endl;
    else
        cout << "Account array is full, Could not add this account" << endl;

    cout << "\nAfter adding account 5: " << endl;
    own1.Print();
}