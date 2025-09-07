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
  int size;
  
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter %d Values: ", size);
  for(int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  BubbleSortDesc(arr, size);

  printf("The sorted array is: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}