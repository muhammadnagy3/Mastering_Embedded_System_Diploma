/*
 ============================================================================
 Name        : Ex4_C_program_to_calculate_the_power_of_a_number_using_recursion.c
 Author      : Muhammad_Nagy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power_f(int base, int pow);

int main(void) {
	int base, pow;
	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter Power number (positive intiger): ");
	scanf("%d", &pow);

	printf("%d", power_f(base, pow));
}


int power_f(int base, int pow){
	if(pow != 0){

		base *= power_f(base, --pow);
		return base;
	}
	else return 1;


}
