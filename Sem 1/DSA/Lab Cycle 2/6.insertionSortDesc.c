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
  int size;
  
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  for(int i = 0; i < size; i++) {
    printf("Enter the value for the position %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  insertionSortDesc(arr, size);

  printf("The sorted array is: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}