#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1;
	Fraction f2(4, 6);  //       
	Fraction f3(2, 8);

	Fraction f9(1, 2);
	Fraction f10(2, 4);
	Fraction f11(2, 3);

	f9.Reduce();
	f10.Reduce();
	f11.Reduce();

/*
	if (f9 == f10)
		cout << "f9 equals to f10" << endl;
	else
		cout << "f9 does not equal to f10" << endl;
	

	if (f11 > f9)
		cout << "f11 is greater than f9" << endl;
	else
		cout << "f11 is not greater than f9" << endl;

*/
	//f9.Print();

	cout << "f9 using cout directly: " << "is : " << endl;
	cout << f9 << endl;
  //(f9)cout << endl;

	cin >> f9 >> f10 >> f11;

	cout << "F9 after cin: " << f9 << endl;
	cout << "F10 after cin: " << f10 << endl;

	cout << endl;
	return 0;
}

// 1/2 > 2/3 --> false
//1/2 - 2/3 --> -1/6