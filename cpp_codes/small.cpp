#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter the value of a and b: ";
  cin >> a >> b;
  if(a > b) {
    cout << b << " is the smallest.";
  } else {
    cout << a << " is the smallest.";
  }
}