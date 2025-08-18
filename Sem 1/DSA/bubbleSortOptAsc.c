#include <stdio.h>
int optBubbleSort(int arr[], int size) {
  int temp, flag;
  for(int i = 0; i < size - 1; i++) {
    for(int j = 0; j < size - i - 1; j++) {
      if(arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        flag = 1;
      }
    }
    if(flag == 0) {
      break;
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

  optBubbleSort(arr, size);

  printf("The sorted array is: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}