#pragma once

#include "Student.h"

class ClassRoom
{
private:
	string name;
	Student** studentsArray;  //20
	int studentsNo;

public:
	ClassRoom(string);
	void print();
	bool insert(Student&);
};

ClassRoom::ClassRoom(string name)
{
	this->name = name;
	this->studentsArray = new Student*[20];

	for (int i = 0; i < 20; i++)
		studentsArray[i] = nullptr;

	studentsNo = 0;
}

bool ClassRoom::insert(Student& student)
{
	for (int i = 0; i < 20; i++)
	{
		if (studentsArray[i] == nullptr)
		{
			studentsArray[i] = new Student(student);
			studentsNo++;
			return true;
		}
	}
	
	return false;
}

void ClassRoom::print()
{
	cout << name << endl;
	cout << "Students: " << endl;

	for (int i = 0; i < studentsNo; i++)
		studentsArray[i]->print();

	cout << endl;
}