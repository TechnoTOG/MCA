#include <stdio.h>
int evenDisp(int arr[], int size) {
  printf("The Even values from the array: ");
  for(int i = 1; i < size; i = i+2) {
    printf("%d ", arr[i]);
  }
  return 0;
}
void main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  evenDisp(arr, 10);
}