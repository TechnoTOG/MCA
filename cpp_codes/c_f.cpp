#include <iostream>
using namespace std;

int main() {
  float c, f;
  cout << "Enter the temp in Celsius: ";
  cin >> c;
  f = (c * 9/5) + 32;
  cout << "The temprature in Frenheit is: " << f;
  return 0;
}