
#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 

using namespace std;

int main()
{
	vector<int> myvector;
	vector<int>::iterator it;

	for (int i = 1; i <= 5; i++) 
		myvector.push_back(i);

	cout << "\nmyvector contains:";
	
	for (it = myvector.begin() ; it != myvector.end(); it++)
		cout << " " << *it;

	cout << endl;
	cout << "\nSize of vector is: " << myvector.size() << endl;
	
	myvector.push_back(6);

	for (it = myvector.begin() ; it != myvector.end(); it++)
		cout << " " << *it;

	cout << "\nSize of vector is: " << myvector.size() << endl;


	cout << "\n\n";

	return 0; 
}