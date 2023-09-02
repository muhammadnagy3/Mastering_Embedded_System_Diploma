/*
 ============================================================================
 Name        : Ex2_C_program_to_find_length_of_a_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char arr[1000];
	printf("Enter a string: ");

	for (int i = 0; i < 1000; i++)
	{
		scanf("%c", &arr[i]);
		if(arr[i] == '\n'){
			arr[i] = '\0';
			printf("Length of string = %d", i);
			break;
		}
	}

}
