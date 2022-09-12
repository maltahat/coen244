#include <iostream>
#include "AndGates.h"
#include "OrGates.h"

using namespace std;

int main(int argc, const char * argv[])
{
	bool A, B, C, D, F;

	cout << "----------------------------- 4 inputs AND Gate ---------------------------------" << endl;

	cout << "A" << "\t" << "B" << "\t"<< "C" << "\t" << "D" << "\t" << "F" << endl;
	
	AND4In and1;

	for (int i = 0; i < 16; i++)
	{
		A = (i / 8) % 2;
		B = (i / 4) % 2;
		C = (i / 2) % 2;
		D = (i / 1) % 2;

		and1.SetIn1(A);
		and1.SetIn2(B);
		and1.SetIn3(C);
		and1.SetIn4(D);

		and1.Evaulte();

		F = and1.GetOut();

		cout << A <<"\t" << B << "\t" << C <<"\t" << D << "\t" << F << endl;
		
	}

	// A = 0;
	// B = 0;
	// C = 0;
	// D = 0;

	// and1.SetIn1(A);
	// and1.SetIn2(B);
	// and1.SetIn3(C);
	// and1.SetIn4(D);
	// and1.Evaulte();
	// F = and1.GetOut();
	// cout << A <<"\t" << B << "\t" << C <<"\t" << D << "\t" << F << endl;

	// A = 1;
	// B = 1;
	// C = 1;
	// D = 1;

	// and1.SetIn1(A);
	// and1.SetIn2(B);
	// and1.SetIn3(C);
	// and1.SetIn4(D);
	// and1.Evaulte();
	// F = and1.GetOut();
	// cout << A <<"\t" << B << "\t" << C <<"\t" << D << "\t" << F << endl;

	cout << "----------------------------- OR Gate ---------------------------------" << endl;

	cout << "A" << "\t" << "B" << "\t"<< "C" << "\t" << "D" << "\t" << "F" << endl;
	
	OR4In or1;

	for (int i = 0; i < 16; i++)
	{
		A = (i / 8) % 2;
		B = (i / 4) % 2;
		C = (i / 2) % 2;
		D = (i / 1) % 2;

		or1.SetIn1(A);
		or1.SetIn2(B);
		or1.SetIn3(C);
		or1.SetIn4(D);

		or1.Evaulte();

		F = or1.GetOut();

		cout << A <<"\t" << B << "\t" << C <<"\t" << D << "\t" << F << endl;
		
	}


	cout << "----------------------------- F = AB + CD ---------------------------------" << endl;

	cout << "A" << "\t" << "B" << "\t"<< "C" << "\t" << "D" << "\t" << "F" << endl;

	AND2In andAB, andCD;
	OR2In orF;

	bool F1, F2;

	for (int i = 0; i < 16; i++)
	{
		A = (i / 8) % 2;
		B = (i / 4) % 2;
		C = (i / 2) % 2;
		D = (i / 1) % 2;

		andAB.SetIn1(A);
		andAB.SetIn2(B);
		F1 = andAB.Evaulte();

		andCD.SetIn1(C);
		andCD.SetIn2(D);
		F2 = andCD.Evaulte();

		orF.SetIn1(F1);
		orF.SetIn2(F2);
		F = orF.Evaulte();

		cout << A <<"\t" << B << "\t" << C <<"\t" << D << "\t" << F << endl;
		
	}
	
	return 0;
}
