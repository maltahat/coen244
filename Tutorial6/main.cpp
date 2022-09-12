#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	Shape* sh = new Rectangle(2, 60);

	Shape * shapes[4];

	shapes[0] = new Rectangle(7, 4);
	shapes[1] = new Square(5);
	shapes[2] = new Triangle(5, 4);
	shapes[3] = new Circle(5);

	for (int i = 0; i < 4; i++)
		cout << shapes[i]->GetShapeType() << " : " << shapes[i]->GetArea() << endl;
	
	return 0;
}