#include <iostream>
using namespace std;

double read_double(string prompt)
{
  cout << prompt << ": ";
  double value;
  cin >> value;
  
  return value;
}

int main()
{
  double price = read_double("First item");
  price = price + read_double("Next item");
  double rate = read_double("Tax rate in percent");
  double tax = price * rate / 100;
  
  cout << "Amount due: " << (price + tax) << endl;
}
