#include <stdio.h>
int bubbleSort(char arr[], int size){
  char temp;
  for(int i = 0; i < size - 1; i++) {
    for(int j  = 0; j < size - i - 1; j++) {
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  return 0;
}

void main() {
  int size = 10;
  char arr[] = {'a', 'n', 'e', 'c', 'm', 'f', 'j', 'g', 'h', 'i'};

  bubbleSort(arr, size);

  printf("Sorted array: ");
  for(int i = 0; i < size; i++) {
    printf("%c ", arr[i]);
  }
  printf("\n");
}