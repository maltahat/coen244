#pragma once
#include "Rectangle.h"
#include <iostream>
using namespace std;

class Triangle : public Rectangle
{
    private :

    protected :

    public:
        
        Triangle (double width, double height) : Rectangle (width, height)
        {
            this->shapeType = "Triangle";
            
            cout << "Triangle Class Constructor is called." << endl;
        }

        ~Triangle()
        {
             cout << "Triangle Class Destructor is called." << endl;
        }

        double GetArea()
        {
            return width * height / 2;
        }

};