// reading numbers from a text file and find the sum

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
  
  string line;
  ifstream myfile ("numbers.txt");
  int sum = 0;

  if (myfile.is_open()) {

    while (getline(myfile, line)) {
      cout << line << endl;
      sum += stoi(line); // "1234" can be converted..... "AX32F" cannot be converted
    }

    myfile.close();
    cout << "Sum = " << sum << endl;

  }
  else 
    cout << "Unable to open file"; 

  return 0;
}












