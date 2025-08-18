#include <stdio.h>
int traverse(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("The value at position %d: %d\n", i+1, arr[i]);
	}
	return 0;
}
void main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	traverse(arr, 6);
}