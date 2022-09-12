// writing even numbers from 1 to 10 on a text file

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () {

  string mystr;
  float price = 0;
  int quantity = 0;

  cout << "Enter price: ";
  getline(cin, mystr);
  stringstream(mystr) >> price;

  cout << "Enter quantity: ";
  getline (cin, mystr);
  stringstream(mystr) >> quantity;

  //float tprice = price * quantity;

  cout << "Total price: " << price * quantity << endl;

  return 0;
}
