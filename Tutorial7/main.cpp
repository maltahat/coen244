
#include "Account.h"
#include "Owner.h"

int main()
{
//	Account acc;    //calls default constructor
//	cout << "after Account acc" << endl;
//
//	Account* acc2;   //does not create an object.. it just creates a pointer to a Account object.
//	cout << "after Account* acc2" << endl;
//
//	acc2 = new Account(20, 2.5);   //calls regular constructor
//	cout << "after acc2= new Account(20,2.5)" << endl;
//
//
//	delete acc2;


	Owner own;				//Owner default constructor

	Account acc1(20,2.5);   //Account Regular construcotr
	Account acc2;			//Account default const.

	own.addAccount(acc1);   //Account copy constructor
	own.addAccount(acc2);	//Account copy constructor


	Owner own2(own);

	return 0;
}
