#include <stdio.h>
void insertionSort(int arr[], int size) {
  for(int i = 1; i < size; i++) {
    int key = arr[i];
    for(int j = i - 1; j >= 0; j--) {
      if(arr[j] > key) {
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
  int size = 10, arr[] = {18, 17, 19, 19, 23, 20, 21, 17, 20, 22};

  insertionSort(arr, size);

  printf("The sorted array is: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}