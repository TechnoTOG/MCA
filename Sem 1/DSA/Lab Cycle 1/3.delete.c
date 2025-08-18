#include <stdio.h>
int delete(int arr[], int position, int lastIndex) {
    if (position < 0 || position > lastIndex) {
        return -1;  // Invalid position
    }
    for (int i = position; i < lastIndex; i++) {
        arr[i] = arr[i + 1];
    }
    arr[lastIndex] = 0;  // Optional: Clear the last element
    return lastIndex - 1;  // Return new last index
}

void main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 0, 0, 0};
    int size = 10;
    int lastIndex = 6; // Last index of the array with elements
    int position = 4; // Position to delete the value

    printf("Array before Deletion: ");
    for (int i = 0; i <= size - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newLastIndex = delete(arr, position, lastIndex);
    if (newLastIndex == -1) {
        printf("Invalid position. Cannot delete value.\n");
    } else {
        printf("Value deleted successfully from %d.\nNew array: ", position);
        for (int i = 0; i <= size - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}