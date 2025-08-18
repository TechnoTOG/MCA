#include <stdio.h>
char mid(int arr[], int size) {
  int mid = size / 2;
  return arr[mid];
}

void main() {
  char arr[] = {'a', 'b', 'c', 'd', 'e'};
  char location = mid(arr, 5);

  printf("Middle Value %c\n", location);
}