#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1;

	Fraction f2(4, 6);  //       2/4  -> 1/2

	Fraction f3(2, 8);

	cout << "f1: ";
	f1.Print();

	cout << "f2: ";
	f2.Print();

	cout << "f3: ";
	f3.Print();

	f2.Reduce();
	cout << "f2 after reduction: ";
	f2.Print();



	Fraction f4 = f2.Add(f3);
	cout << "f4 = f2 + f3: ";
	f4.Print();

	Fraction f5 = f2 + f3;
	

	cout << "f2: ";
	f2.Print();

	Fraction f6 = f2 - f3;
	cout << "f6 = f2 - f3: ";
	f6.Print();

	Fraction f7 = f2 * f3;
	cout << "f7 = f2 * f3: ";
	f7.Print();

	Fraction f8 = f2 / f3;
	cout << "f8 = f2 / f3: ";
	f8.Print();

	// f2.Sub(f3);
	// cout << "f2 = f2 - f3: ";
	// f2.Print();


	// f2.Mult(f3);
	// cout << "f2 = f2 * f3: ";
	// f2.Print();

	// f2.Div(f3);
	// cout << "f2 = f2 / f3: ";
	// f2.Print();

	f2 += f3;   //  f2 = f2 + f3
	cout << "f2 += f3: ";
	f2.Print();

	f2 -= f3;   //  f2 = f2 + f3
	cout << "f2 -= f3: ";
	f2.Print();

	return 0;
}