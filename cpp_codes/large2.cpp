#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter the value of a and b: ";
  cin >> a >> b;
  if(a > b) {
    cout << a << " is the largest.";
  } else {
    cout << b << " is the largest.";
  }
}