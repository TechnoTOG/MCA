/*
Data Structures Lab sheet -5-Aug-2025

Write C program to do the following:
Create an integer array and implement the below:
	1.	To traverse an array of size n
	2.	To insert a value into the array
	3.	To delete a value from the array
	4.	To search an element in an unsorted array 
	5.	To display all the values in the even positions
	6.	To display all the odd numbered values in the array
	7.	To display all the values in the alternate positions in the array
	8.	To reverse an array 

Create a character array and 
	1.	Update a value at a particular position 
	2.	Display the value at the middle position
*/

#include <stdio.h>
int traverse(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("The value at position %d: %d\n", i+1, arr[i]);
	}
	return 0;
}
void main() {
	int arr[] = {1,2,3,4,5,6};
	traverse(arr, 6);
}