#include <stdio.h>
int reverse(int arr[]) {
  for (int i = 5; i >= 0; i--) {
		printf("The value at position %d: %d\n", i+1, arr[i]);
	}
  return 0;
}
void main() {
	int arr[] = {1,2,3,4,5,6};
  reverse(arr);
}