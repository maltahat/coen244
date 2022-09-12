// writing even numbers from 1 to 10 on a text file

#include <iostream>
#include <fstream>
using namespace std;

int main () {

  ofstream myfile ("numbers.txt");

  if (myfile.is_open()) {

    //all even numbers from 1 to 20
  	for (int i = 1; i <= 20; i++) 
    {
      if (i % 2 == 0) //the number is even
  		  myfile << i << "\n";
  	}
    
    myfile.close();

  }
  else 
  	cout << "Unable to open file";

  return 0;
}












