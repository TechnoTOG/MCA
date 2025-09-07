#include <stdio.h>
int binarySearch(char arr[], int size, char target) {
  int low = 0, high = size-1, mid;
  while(low < high) {
    mid = (low + high) / 2;
    if(arr[mid] == target) {
      return mid;
    } else if(arr[mid] < target) {
      low = mid + 1;
    } else if(arr[mid] > target) {
      high = mid - 1;
    }
  }
  return -1;
}

void main() {
int size, result;

  printf("Enter the size of array: ");
  scanf("%d", &size);

  char arr[size], target;

  for(int i = 0; i < size; i++) {
    printf("Enter the value at position %d: ", i+1);
    scanf(" %c", &arr[i]);
  }

  printf("Enter the target value to be found: ");
  scanf(" %c", &target);

  result = binarySearch(arr, size, target);

  if(result == -1) {
    printf("The target value was not found\n");
  } else {
    printf("The value was found at position %d\n", result+1);
  }
}
