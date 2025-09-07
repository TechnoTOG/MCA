#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "The exponent of " << a << " with " << a  << " is " << pow(a, a) << ".";
}