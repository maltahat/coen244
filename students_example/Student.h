#pragma once

#include <iostream>
using namespace std;

class Student
{
private:
	int id;
	string name;

	static int counter;

public:
	Student();
	Student(string);
	void print();
	void changeValues(string, int);
	int getId();
	string getName();
};


int Student::counter = 0;

Student::Student()
{
	name = "";
	id = 0;
}

Student::Student(string name)
{
	this->name = name;
	this->id = ++counter;
}

void Student::print()
{
	cout << "Student id: " << this->id << ", Student name: " << this->name << endl;
}

void Student::changeValues(string name, int id)
{
	this->id = id;
	this->name = name;
}

int Student::getId()
{
	return id;
}

string Student::getName()
{
	return name;
}