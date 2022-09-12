#include<iostream> 
#include<algorithm> // for all_of() 
#include<array>  

using namespace std;

bool is_positive(int n) {
   return (n > 0);
}

int main()
{
	// Initializing array 
	int ar[6]= {1, 2, 3, 4, 5, -6};
	
	// Checking if all elements are positive 
	if (all_of(ar, ar+6, is_positive))
		cout << "All are positive elements" << endl;
	else 
		cout << "All are not positive elements" << endl;

	return 0; 
}