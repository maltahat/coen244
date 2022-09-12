#include <iostream>
using namespace std;

template <typename T>
void fun(const T& x) {
	static int count = 0;
	cout << "x = " << x << " count = " << count << endl;
	++count;
	//return;
}

int main() {

	fun<int>(1); //int version of the function will be created, x = 1, count_int = 0; increment count
	cout << endl;

	fun<int>(7); //x = 7, count_int = 1; increment count
	cout << endl;

	fun<double>(1.1); //double version, x = 1.1, count_double = 0, increment
	cout << endl;

	fun<int>(5); // x = 5, count_int = 2
	cout << endl;

	fun<double>(2.5); //x = 2.5, count_double = 1
	cout << endl;
	
	return 0;
}