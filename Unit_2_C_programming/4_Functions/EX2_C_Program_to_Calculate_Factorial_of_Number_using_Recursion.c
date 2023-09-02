/*
 ============================================================================
 Name        : EX2_C_Program_to_Calculate_Factorial_of_Number_using_Recursion.c
 Author      : Muhammad_Nagy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int fact(unsigned int num);

int main(void) {
	puts("Enter Number: ");
	unsigned int num, f_num;
	scanf("%u", &num);
	f_num = fact(num);
	printf("%u", f_num);
	return EXIT_SUCCESS;
}



unsigned int fact(unsigned int num){
	if (num == 1 || num == 0) return 1;
	num *= fact(num-1);
	return num;
}
