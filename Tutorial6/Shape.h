#pragma once

#include <iostream>
using namespace std;

class Shape
{
    protected:
        string shapeType;

    public:
        Shape()
        {
            cout << "Shape Class Default Constructor is called." << endl;
            shapeType = "Unknown";
        }

        ~Shape()
        {
            cout << "Shape Class Destructor is called." << endl;
        }

        string GetShapeType()
        {
            return shapeType;
        }

        virtual double GetArea() = 0;
    
};