#include <stdio.h>
int insert(int arr[], int position, int value, int lastIndex, int size) {
    if (lastIndex >= size - 1) {
        return -1;  // Array is full
    }
    int i = 0;
    for (i = lastIndex; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
    return i + 1;   // Value inserted position
}
void main() {
    int arr[10] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0};
    int size = 10;
    int lastIndex = 4;
    int position = 2; 
    int value = 10; 

    printf("Array before Insertion: ");
        for (int i = 0; i <= size - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

    int newLastIndex = insert(arr, position, value, lastIndex, size);
    if (newLastIndex == -1) {
        printf("Array is full. Cannot insert value.\n");
    } else {
        printf("Value inserted successfully at %d.\nNew array: ", newLastIndex);
        for (int i = 0; i <= size - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}