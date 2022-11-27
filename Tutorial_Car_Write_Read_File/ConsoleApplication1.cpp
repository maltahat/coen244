// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Car
{
	int num_of_doors;
	string fuel_type; //"Gas" , "Electric"
	double price;

public:
	Car(int doors, string type, double prc)
	{
		num_of_doors = doors;
		fuel_type = type;
		price = prc;
	}

	void Print()
	{
		cout << fuel_type << " car with: " << num_of_doors << " doors, price: " << price << endl;
	}

	int GetNumofDoors()
	{
		return num_of_doors;
	}

	string GetType()
	{
		return fuel_type;
	}

	double GetPrice()
	{
		return price;
	}
};

bool WriteObjectsToFile(Car** array)
{
	//write to file
	ofstream file("data.txt");

	if (file.is_open())
	{
		for (int i = 0; i < 5; i++)
			file << array[i]->GetNumofDoors() << " " << array[i]->GetType() << " " << array[i]->GetPrice() << "\n";

		file.close();

		return true;

	}
	else
	{
		cout << "Could not open the file" << endl;
		return false;
	}
}

bool ReadFile()
{
	//read lines from the file

	ifstream file("data.txt");

	if (file.is_open())
	{

		int doors;
		string type;
		double price;

		file >> doors >> type >> price;

		Car obj(doors, type, price);

		obj.Print();

	}
	else
	{
		cout << "Could not open the file" << endl;
		return false;
	}
}

bool ReadFile2()
{
	ifstream file("data.txt");

	if (file.is_open())
	{
		string line;

		while (getline(file, line))
		{
			cout << line << endl;

			//split based on the " " --> 3 seperate strings tokens

			//convert from string to number

			//read from the string as it is a stream

		}

	}
	else
	{
		cout << "Could not open the file" << endl;
		return false;
	}
}

int main()
{
	Car* cars_array[5];

	cars_array[0] = new Car(2, "Gas", 15000);
	cars_array[1] = new Car(4, "Electric", 70000);
	cars_array[2] = new Car(2, "Gas", 10000);
	cars_array[3] = new Car(4, "Gas", 5000);
	cars_array[4] = new Car(4, "Electric", 50000);

	//for (int i = 0; i < 5; i++)
	//	cars_array[i]->Print();

	//WriteObjectsToFile(cars_array);

	// ReadFile();

	/*
	cout << "Enter your full name: ";
	string fullName;

	// cin >> fullName;

	getline(cin, fullName);

	cout << "Your full name is: " << fullName << endl;
	
	*/

	ReadFile2();
}