/*
 ============================================================================
 Name        : C_Program_to_Find_Prime_Numbers_Between_Two_Intervals.c
 Author      : Muhammad Nagy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime_num(int x, int y);

int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
//	printf("ggggggggg");
	return EXIT_SUCCESS;
}

void prime_num(int x, int y){
	int i;
	for(i = x; i <= y; i++){
		if(i == 2) {printf("%d\n", i); continue;}
		int k, temp = 0;
		for(k = 2; k <y; k++){
			if(i == k) break;
			if(i%k)break;
			else temp++;
		}
		if(temp == i-2) printf("%d\n", i);
	}
}
