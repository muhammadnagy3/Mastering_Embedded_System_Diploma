/*
 ============================================================================
 Name        : EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2.c
 Author      : Muhammad
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float arr[2][4];
	printf("Enter the element of 1st matrix\n");

	//store data
	int i = 0;
	for(i = 0; i < 2; i++)
	{
		for(int j = 0; j < 4; j++)
			{
				if(i == 0) printf("Enter a1%d: ", j+1);
				else printf("Enter b2%d: ", j+1);
				fflush(stdout); fflush(stdin);
				scanf("%f", &arr[i][j]);
			}
	}

	i = 0;
	printf("Sum of matrix:\n");
	for(int j = 0; j < 4; j++)
	{
		arr[i][j] += arr[i+1][j];
		printf("%3.1f   ", arr[i][j]);
		if(j == 1) printf("\n");
	}

}
