#include <stdio.h>
int search(int arr[], int value, int size) {
  int i = 0;
  for (i = 0; i < size; i++) {
    if (arr[i] == value) {
      return i;  // Return the index of the found value
    }
  }
  return -1;  // Value not found
}

void main() {
  int arr[] = {1, 6, 54, 7, 90, 24, 35, 67, 84, 22};
  int location = search(arr, 90, 10);

  if(location == -1) {
    printf("Value not found in the array.\n");
  } else {
    printf("Value found at index: %d\n", location + 1);
  }
}