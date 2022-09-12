#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Circle : public Shape
{
    private :

    protected :
        double radius;

    public:
        
        Circle (double radius)
        {
            this->radius = radius;

            this->shapeType = "Circle";
            
            cout << "Circle Class Constructor is called." << endl;
        }

        ~Circle()
        {
             cout << "Circle Class Destructor is called." << endl;
        }

        double GetArea()
        {
            return (this->radius * this->radius * 3.14);
        }
};