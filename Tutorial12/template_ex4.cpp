#include <iostream>

using namespace std;

template <class T>
class Test{
	private:
		T val;
	public:
		static int count;
		Test() 
		{ 
			count++; 
		}
};

template<class T>
int Test<T>::count = 0;

int main() {
	Test<int> a; //creates count_int = 1
	Test<int> b; //count_int = 2
	Test<double> c; //count_double = 1

	cout << Test<int>::count << endl;
	cout << Test<double>::count << endl;
	return 0;
}