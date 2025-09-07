#include <iostream>
using namespace std;

int main() {
  int prod = 0, n;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "Product of Natural numbers from 1 to " << n << " are: ";
  for (int i = 1; i <= n; i++) {
    prod += i;
  }
  cout << prod;
}