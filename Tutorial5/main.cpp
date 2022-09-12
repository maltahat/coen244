#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	//Rectangle rec1(7, 4);

	//cout << "Rec1 area: " << rec1.GetArea() << endl;

	//Square sq1(5);
	//cout << "sq1 area: " << sq1.GetArea() << endl;

	//Triangle tr1(5, 4);
	//cout << "tr1 area: " << tr1.GetArea() << endl;

	//Circle cr1(5);
	//cout << "cr1 area: " << cr1.GetArea() << endl;

	Shape * shapes[4];

	shapes[0] = new Rectangle(7, 4);
	shapes[1] = new Square(5);
	shapes[2] = new Triangle(5, 4);
	shapes[3] = new Circle(5);

	for (int i = 0; i < 4; i++)
		cout << shapes[i]->GetShapeType() << " : " << shapes[i]->GetArea() << endl;
	
	return 0;
}