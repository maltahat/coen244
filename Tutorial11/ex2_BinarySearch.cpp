
#include <iostream>
using namespace std;

void show(int a[], int arraysize) 
{
	for (int i = 0; i < arraysize; ++i) 
		cout << a[i] << " ";
}

int main() 
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 

	int asize = sizeof(a) / sizeof(a[0]); //40 / 4 = 10;
	cout << "\n The array is : "; 
	show(a, asize);

	cout << "\n\nLet's say we want to search for 2 in the array"; 
	cout << "\n So, we first sort the array";
	sort(a, a + asize);

	// 0 1 2 3 4 5 6 7 8 9
	cout << "\n\n The array after sorting is : ";
	show(a, asize);

	cout << "\n\nNow, we do the binary search"; 
	
	if (binary_search(a, a + 10, 2))
		cout << "\nElement 2 found in the array"; 
	else
		cout << "\nElement 2 not found in the array";


	cout << "\n\nNow, say we want to search for 10"; 
	if (binary_search(a, a + 10, 10))
		cout << "\nElement 10 found in the array"; 
	else
		cout << "\nElement 10 not found in the array";

	cout << endl;
	return 0; 
}