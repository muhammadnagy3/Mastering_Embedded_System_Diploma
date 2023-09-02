
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

	int m = 29 ;
	int *ab = &m;

	printf("Address of m : 0x%p\n", &m);
	printf("Value of m : %d\n",m);

	*ab = 29;

	printf("\nAddress of pointer ab : 0x%p\n", ab);
	printf("Content of pointer ab : %d\n",*ab);

	m = 34;

	printf("\nAddress of pointer ab : 0x%p\n", ab);
	printf("Content of pointer ab : %d\n",*ab);

	*ab = 7;

	printf("\nAddress of pointer m : 0x%p\n", &m);
	printf("Content of pointer m : %d\n",m);

}
