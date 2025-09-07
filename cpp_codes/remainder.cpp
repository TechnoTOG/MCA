#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter value to be divided: ";
  cin >> a;
  cout << "Enter value to divide by: ";
  cin >> b;
  cout << "The remainder after dividing " << a << " by " << b << " is: " << a % b;
  return 0;
}