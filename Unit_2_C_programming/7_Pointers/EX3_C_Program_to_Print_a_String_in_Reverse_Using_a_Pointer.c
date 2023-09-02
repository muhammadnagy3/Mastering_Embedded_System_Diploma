
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev_fun(char* str_ptr, char* rev_str_ptr){

	unsigned int len = strlen(str_ptr);
	str_ptr += len;
	unsigned int i = 0;
	for (i = 0; i < len; i++)
	{
		str_ptr--;
		*rev_str_ptr = *str_ptr;
		rev_str_ptr++;
	}
	*rev_str_ptr = '\0';
}


int main(void) {

	char str[100];
	char rev_str[100];

	printf("Input a string: ");
	gets(str);
	rev_fun(str, rev_str);
	printf("Reverse of the string is: %s", rev_str);

}
