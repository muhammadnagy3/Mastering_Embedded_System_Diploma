
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_elements(int* ptr, unsigned int n){

	printf("Input %u number of elements in the array:\n", n);

	int i = 0;
	for (i = 0; i < (int)n; ++i)
	{
		printf("Element-%d: ", i+1);
		scanf("%d", ptr++);
	}
}


void reverse_elements(int* ptr, unsigned int n){

	ptr += n;
	printf("\nThe elements of array in reverse order are:\n");


	int i;
	for (i = (int)n; i > 0; --i)
	{
		printf("Element-%d: %d\n", i, *(--ptr));
	}
}


int main(void) {

	int arr[15];
	unsigned int n = 0;

	printf("Input the number of elements to store in the array (max 15) : ");
	scanf("%u", &n);
	

	read_elements(arr, n);
	reverse_elements(arr, n);

}
