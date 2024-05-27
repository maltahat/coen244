// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Student.h"
#include "ClassRoom.h"

#include <iostream>
using namespace std;

int main()
{
    Student s1("John");
    Student s2("David");
    Student s3("Paul");
    Student s4("Mary");
    Student s5("Luna");
    Student s6("Julia");

    ClassRoom cr("COEN244");

    cr.print();

    cr.insert(s1);
    cr.insert(s2);
    cr.insert(s3);
    cr.insert(s4);
    cr.insert(s5);
    cr.insert(s6);

    cr.print();
}
