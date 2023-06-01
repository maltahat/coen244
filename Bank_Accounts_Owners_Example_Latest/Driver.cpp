// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Account.h"
#include "Owner.h"

using namespace std;

int main()
{
    Account acc1;

    Account acc2(2000, "Saving");

    Account acc3(3000, "Checking");

    acc1.Print();

    acc2.Print();    

    acc3.Print();

    Owner own1;

    Owner own2("John");

    own1.Print();
    own2.Print();

    
    own2.InsertAccount(&acc1);
    own2.InsertAccount(&acc2);
    own2.InsertAccount(&acc3);
    //own2.InsertAccount(acc3);

    cout << "After inserting 3 accounts for John: " << endl;

    own2.Print();

    own2.SearchForAccount(2);

    own2.SearchForAccount(10);


}