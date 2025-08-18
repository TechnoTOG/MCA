#include <stdio.h>
void insertionSortDesc(int arr[], int size) {
  for(int i = 1; i < size; i++) {
    int key = arr[i];
    for (int j = i - 1; j >= 0; j--) {
      if(arr[j] < key) {
        arr[j+1] = arr[j];
        arr[j] = key;
      } else {
        arr[j+1] = key;
        break;
      }
    }
  }
}

void main() {
  int size = 10, arr[] = {12, 150, 260, 45, 80, 15, 1, 100, 88, 16};
  insertionSortDesc(arr, size);
  printf("The sorted array in descending order is: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}