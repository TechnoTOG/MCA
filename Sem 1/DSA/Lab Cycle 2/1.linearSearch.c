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
  int size, target, result;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  for(int i = 0; i < size; i++) {
    printf("Enter the value at position %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  printf("Enter the target value to be found: ");
  scanf("%d",&target);
  result = linearSearch(arr, size, target);

  if(result == -1) {
    printf("The target value was not found\n");
  } else {
    printf("The target was found at position %d\n", result+1);
  }
}