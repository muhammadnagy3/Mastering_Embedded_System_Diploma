/*
 ============================================================================
 Name        : EX2_C_Program_To_Calculate_Average_.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int n;
	printf("Enter the number of data:\n ");
	fflush(stdout); fflush(stdin);
	scanf("%u", &n);
	float arr[n];

	for(int i = 0; i < n; i++){
		printf("Enter number: ");
		fflush(stdout); fflush(stdin);
		scanf("%f", &arr[i]);
		if(i == 0) continue;
		arr[i] += arr[i-1];
	}
	printf("\nAverage = %g", arr[n-1]/n);
}
