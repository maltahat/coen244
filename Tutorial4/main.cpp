#include <iostream>
#include "AndGates.h"
#include "OrGates.h"

using namespace std;

int main(int argc, const char * argv[])
{
	bool A, B;

	cout << "----------------------------- AND Gate ---------------------------------" << endl;

	AND2In and1;

	cout << "A" << "\t" << "B" << "\t" << "F" << endl;
	
	A = 0;
	B = 0;
	and1.SetIn1(A);
	and1.SetIn2(B);
	and1.Evaulte();
	bool F = and1.GetOut();
	cout << A <<"\t" << B << "\t" << F << endl;

	A = 0;
	B = 1;
	and1.SetIn1(A);
	and1.SetIn2(B);
	and1.Evaulte();
	F = and1.GetOut();
	cout << A <<"\t" << B << "\t" << F << endl;

	A = 1;
	B = 0;
	and1.SetIn1(A);
	and1.SetIn2(B);
	and1.Evaulte();
	F = and1.GetOut();
	cout << A <<"\t" << B << "\t" << F << endl;

	A = 1;
	B = 1;
	and1.SetIn1(A);
	and1.SetIn2(B);
	and1.Evaulte();
	F = and1.GetOut();
	cout << A <<"\t" << B << "\t" << F << endl;

	cout << "----------------------------- OR Gate ---------------------------------" << endl;

	OR2In or1;

	cout << "A" << "\t" << "B" << "\t" << "F" << endl;
	
	A = 0;
	B = 0;
	or1.SetIn1(A);
	or1.SetIn2(B);
	or1.Evaulte();
	F = or1.GetOut();
	cout << A <<"\t" << B << "\t" << F << endl;

	A = 0;
	B = 1;
	or1.SetIn1(A);
	or1.SetIn2(B);
	or1.Evaulte();
	F = or1.GetOut();
	cout << A <<"\t" << B << "\t" << F << endl;

	A = 1;
	B = 0;
	or1.SetIn1(A);
	or1.SetIn2(B);
	or1.Evaulte();
	F = or1.GetOut();
	cout << A <<"\t" << B << "\t" << F << endl;

	A = 1;
	B = 1;
	or1.SetIn1(A);
	or1.SetIn2(B);
	or1.Evaulte();
	F = or1.GetOut();
	cout << A <<"\t" << B << "\t" << F << endl;
	
	return 0;
}
