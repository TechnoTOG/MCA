#include <stdio.h>
char update(char arr[], char value, int size, int position) {
  char i = 0;
  if (position >= 0 && position < size)
  {
    i = arr[position];
    arr[position] = value;
    return i;  // Success
  }
  
  return -1;  // Value not found
}

void main() {
  char arr[] = {'a', 'b', 'c', 'd', 'e'};
  char location = update(arr, 'z', 5, 2);

  if(location == -1) {
    printf("Value could not be updated in the array.\n");
  } else {
    printf("Existing Value %c, updated with %c\n", location, arr[location]);
  }
}