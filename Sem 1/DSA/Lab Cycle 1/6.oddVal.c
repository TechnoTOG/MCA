#include <stdio.h>
int oddval(int arr[]) {
  printf("The Odd values from the array: ");
  for(int i = 0; i < 10; i++) {
    if(arr[i] % 2 != 0) {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}
void main() {
  int arr[] = {5, 67, 22, 4, 68, 99, 36, 55, 37, 91};
  oddval(arr);
}