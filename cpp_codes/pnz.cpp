#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Enter the number: ";
  cin >> a;
  if(a > 0) {
    cout << a << " is an Positive Number";
  } else if(a < 0) {
    cout << a << " is an Negative number Number";
  } else {
    cout << a << " is Zero";
  }
}