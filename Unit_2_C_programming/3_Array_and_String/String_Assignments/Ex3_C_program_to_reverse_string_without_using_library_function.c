/*
 ============================================================================
 Name        : Ex3_C_program_to_reverse_string_without_using_library_function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(void) {
	char arr[1000];
	printf("Enter the string: ");
	gets(arr);

	int i = 0, j = (int)strlen(arr)-1, temp;
	for (i = 0; i < (int)strlen(arr)/2; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	printf("Reverse string is %s", arr);


}
