
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle rec1; //call the default constructor.

	Rectangle rec2(5, 2); //call the regular constructor

	Rectangle rec3 (4); //call the regualar constructor 2
	
	rec1.SetWidth(10);
	rec1.SetHeight(5);

	// double w = rec1.GetWidth();
	// double h = rec1.GetHeight();
	// cout << "Width is: " << w << ", Height is: " << h << endl;

	//cout << "Rec1: Width is: " << rec1.GetWidth() << ", Height is: " << rec1.GetHeight() << endl;
	rec1.Print();

	rec2.SetHeight(4);
	rec2.SetWidth(7);
	cout << "Rec2: Width is: " << rec2.GetWidth() << ", Height is: " << rec2.GetHeight() << endl;

	cout << "Rec1 area = " << rec1.ComputeArea() << endl;
	cout << "Rec2 area = " << rec2.ComputeArea() << endl;

	rec3.SetHeight(3);
	cout << "Rec3: Width is: " << rec3.GetWidth() << ", Height is: " << rec3.GetHeight() << endl;
	cout << "Rec3 area = " << rec3.ComputeArea() << endl;

	cout << endl;

	cout << "Rec1 Peremeter = " << rec1.ComputePeremeter() << endl;
	cout << "Rec2 Peremeter = " << rec2.ComputePeremeter() << endl;
	cout << "Rec3 Peremeter = " << rec3.ComputePeremeter() << endl;

	cout << endl;

	cout << "Rec1 diagonal length = " << rec1.ComputeDiagonalLength() << endl;
	cout << "Rec2 diagonal length = " << rec2.ComputeDiagonalLength() << endl;
	cout << "Rec3 diagonal length = " << rec3.ComputeDiagonalLength() << endl;
	
	return 0;
}
