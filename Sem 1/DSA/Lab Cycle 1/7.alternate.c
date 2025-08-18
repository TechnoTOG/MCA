#include <stdio.h>
int alter(int arr[]) {
  printf("The values at alternate Position: ");
  for(int i = 0; i < 10; i= i + 2) {
    printf("%d ", arr[i]);
  }
  return 0;
}
void main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  alter(arr);
}