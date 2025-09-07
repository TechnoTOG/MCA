#include <iostream>
using namespace std;

int main() {
  int sum = 0, n;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "Sum of Natural numbers from 1 to " << n << " are: ";
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  cout << sum;
}