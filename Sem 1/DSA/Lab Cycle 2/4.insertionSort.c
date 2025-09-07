/*
Lab sheet 2
Write C programs to do the following:
1.	To perform a search on an array of numbers (Identify the appropriate search and apply)
2.	To perform a search on alphabets (Identify the appropriate search and apply)
3.	To sort a list of characters in alphabetical order using bubble sort
4.	To sort ages of students in ascending order using insertion sort
5.	To sort the prices of items in descending order using bubble sort
6.	To sort a list of numbers in descending order using insertion sort
*/


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
  int size;
  
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  for(int i = 0; i < size; i++) {
    printf("Enter the value for the position %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  insertionSort(arr, size);

  printf("The sorted array is: ");
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}