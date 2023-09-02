/*
 ============================================================================
 Name        : EX3_C_Program_To_Find_Transpose_of_a_Matrix.c
 Author      : Muhammad Nagy
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int m, n;
	printf("Enter rows and column of matrix : ");
	fflush(stdout); fflush(stdin);
	scanf("%u %u", &m, &n);

	float mat[m][n];
	float trans[n][m];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("Enter element a%d%d: ", i+1, j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &mat[i][j]);
			trans[j][i] = mat[i][j];
		}
	}


	printf("Entered Matrix: \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%4g", mat[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix: \n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%4g", trans[i][j]);
		}
		printf("\n");
	}
}
