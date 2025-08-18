#include <stdio.h>
void bubbleSortDesc(int arr[], int size) {
  int temp;
  for(int i = 0; i < size - 1; i++) {
    for(int j = 0; j < size - i - 1; j++) {
      if(arr[j] < arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void main() {
  int size = 10;
  int arr[] = {180, 15, 30, 45, 60, 75, 90, 105, 120, 135};
  bubbleSortDesc(arr, size);
  printf("The sorted array in descending order is: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}