#pragma once
#include "Rectangle.h"
#include <iostream>
using namespace std;

class Square : public Rectangle
{
    private :

    protected :

    public:
        
        Square (double dimension) : Rectangle (dimension, dimension)
        {
            this->shapeType = "Square";
            
            cout << "Square Class Constructor is called." << endl;
        }

        ~Square()
        {
             cout << "Square Class Destructor is called." << endl;
        }

};