/*
 ============================================================================
 Name        : Ex1_C_program_to_find_frequency_of_characters.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char arr[1000];
	char c;
	printf("Enter a string: ");
	gets(arr);
	printf("Enter a character to find frequency: ");
	scanf("%c", &c);
	if(c >= 65 && c <= 90) c = c + 32;

	int freq = 0;
	strlwr(arr);
	for (int i = 0; i < (int)strlen(arr); i++)
	{
		if(arr[i] == c){freq++;}
	}

	printf("frequency of %c = %d", c, freq);
}
