#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Rectangle : public Shape
{
    private :

    protected :
        double width;
        double height;

    public:
        
        Rectangle (double width, double height)
        {
            this->width = width;
            this->height = height;

            this->shapeType = "Rectangle";

            //cout << "Area is: " << this->GetArea() << endl;

            cout << "Rectangle Class Constructor is called." << endl;
        }

        ~Rectangle()
        {
             cout << "Rectangle Class Destructor is called." << endl;
        }

        double GetArea()
        {
            return width * height;
        }
};