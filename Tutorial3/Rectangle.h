#include <iostream>
#include "math.h"
using namespace std;

class Rectangle
{
	private:
		double width;
		double height;

	public:
		//default constructor
		Rectangle()
		{
			cout << "Default constructor is called" << endl;
			width = 0;
			height = 0;
		}

		//regular constructor
		Rectangle(double width, double height)
		{
			cout << "Regular constructor 1 is called" << endl;
			//this->width = width;
			SetWidth(width);
			this->height = height;
		}

		//regular constructor
		Rectangle(double width)
		{
		 	cout << "Regular constructor 2 is called" << endl;
		 	this->width = width;
		 	height = 0;
		}

		void SetWidth(double width)
		{
			if (width >= 0)
				this->width = width;
			else
			{
				cout << "You cannot assign a negative value for the width" << endl;
			}
		}

		void SetHeight(double height)
		{
			if (height >= 0)
				this->height = height;
			else
			{
				cout << "You cannot assign a negative value for the height" << endl;
			}
		}

		double GetWidth()
		{
			return this->width;
		}

		double GetHeight()
		{
			return this->height;
		}

		double ComputeArea()
		{
			return width * height;
		}

		double ComputePeremeter()
		{
			return 2 * (width + height);
		}

		double ComputeDiagonalLength()
		{
			double p = sqrt(pow(width, 2) + pow(height, 2));
			return p;
		}

		void Print()
		{
			cout << "Width is: " << width << ", Height is: " << height << endl;
		}
};