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
  int size = 10, result;

  char target = 'e';
  char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
  result = binarySearch(arr, size, target);

  if(result == -1) {
    printf("The target value was not found\n");
  } else {
    printf("The target was found at position %d\n", result+1);
  }
}
