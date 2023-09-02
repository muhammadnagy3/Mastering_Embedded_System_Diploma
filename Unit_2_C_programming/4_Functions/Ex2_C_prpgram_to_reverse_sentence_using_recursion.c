/*
 ============================================================================
 Name        : Ex2_C_prpgram_to_reverse_sentence_using_recursion.c
 Author      : Muhammad_Nagy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_f();


int main(void) {
	printf("Enter sentence: ");
	fflush(stdin); 	fflush(stdout);
	reverse_f();
}

void reverse_f(){
	char c;
	scanf("%c", &c);
	if(c != '\n'){
		reverse_f();
		printf("%c", c);
	}

}
