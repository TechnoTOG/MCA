#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
  for(int i = 0; i < size; i++) {
    if(arr[i] == target) {
      return i;  // Target found
    }
  }
  return -1;  // Target not found
}
void main() {
  int size = 10, target = 26, result;

  int arr[] = {3, 8, 2, 23, 78, 90, 1, 26, 45, 12};
  result = linearSearch(arr, size, target);

  if(result == -1) {
    printf("The target value was not found\n");
  } else {
    printf("The target was found at position %d\n", result+1);
  }
}