/*
 ============================================================================
 Name        : EX4_C_Program_to_Insert_an_Element_in_an_Array.c
 Author      : Muhammad Nagy
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdin);
	scanf("%d", &n);
	float arr[n+1];
	for(int i = 0; i < n; i++){
		scanf("%f", &arr[i]);
	}
	float num;
	printf("Enter the element to be inserted: ");
	fflush(stdin); fflush(stdin);
	scanf("%f", &num);

	int index;
	printf("Enter the location: ");
	fflush(stdin); fflush(stdin);
	scanf("%d", &index);
	index--;

	//shift elements
	for(int i = n; i > index; i--){
		arr[i] = arr[i-1];
	}
	arr[index] = num;

	//print array
	for(int i = 0; i < n+1; i++){
		printf("%4g", arr[i]);
	}
}
