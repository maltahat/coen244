#include<iostream>
#include<stdlib.h>

using namespace std;
	
template<class T, class U>
class MyClass {
	T x;
	U y;
};

int main(){

	MyClass<char, char> a; // 1 byte / char, size of a: 2 characters; the size is 2 bytes.
	MyClass<int, int> b; // 4 bytes / int, size of b = 8 bytes.
	
	int z = 10;
	char c = 'A';
	double dd = 2.5;

	cout << "size of int: " << sizeof(z) << endl;
	cout << "size of char: " << sizeof(c) << endl;
	cout << "size of double: " << sizeof(dd) << endl;

	cout << "size of object a: " << sizeof(a) << endl;
	cout << "size of object b: " << sizeof(b) << endl;

	MyClass<double, double> d;
	cout << "size of object d: " << sizeof(d) << endl;

	MyClass<int, double> obj1;
	cout << "size of object obj1: " << sizeof(obj1) << endl;
	
	return 0;
}