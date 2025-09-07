#include <iostream>
using namespace std;

int main() {
  int mark;
  cout << "Enter the mark out of 100";
  cin >> mark;

  if(mark >= 90) {
    cout << "The Grade of the student is: A+";
  } else if(mark >= 85 && mark < 90) {
    cout << "The Grade of the student is A";
  } else if(mark >= 80 && mark < 85) {
    cout << "The grade of the student is B";
  } else if(mark >= 70 && mark < 80) {
    cout << "The Grade of the student is C";
  } else if(mark >= 60 && mark < 70) {
    
  }
}