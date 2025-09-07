#include <iostream>
using namespace std;

int main() {
  int a , result = 1;
  cout << "Enter the value of a: ";
  cin >> a;
  
  for (int i = 1; i <= a; i++) {
    result *= a;
  }
  cout << "The exponent of " << a << " with " << a  << " is " << result << ".";
}