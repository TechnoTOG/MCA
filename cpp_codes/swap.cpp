#include <iostream>
using namespace std;

int main() {
  int a, b, temp;
  cout << "Enter the value for a: ";
  cin >> a;
  cout << "Enter the value for b: ";
  cin >> b;

  temp = a;
  a = b;
  b = temp;

  cout << "The value of a and b after swap are: " << a << " & " << b;
}