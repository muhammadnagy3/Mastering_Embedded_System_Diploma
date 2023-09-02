
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

	char c = 'A';
	char* ptr = &c;
	for (int i = 0; i < 26; i++)
	{
		printf("%c   ", (*ptr)++);
	}
	

}
