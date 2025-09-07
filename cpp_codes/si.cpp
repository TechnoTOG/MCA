# include <iostream>
using namespace std;

int main() {
  int p, r, t;
  float a;
  cout << "Enter the principle amount: ";
  cin >> p;
  cout << "Enter the rate of interest: ";
  cin >> r;
  cout << "Enter the time period in Yr: ";
  cin>> t;
  a = (p * r * t) / 100;
  cout << "The simple Interest is: " << a;
  return 0;
}