#include <iostream>
using namespace std;

int main() {
  int year;
  cout << "Enter a year: ";
  cin >> year;

  if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
    cout << "The Year is Leap Year";
  } else {
    cout << "The Year is not a Leap Year";
  }
  return 0;
}