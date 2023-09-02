
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//complex number
struct Scomplex
{
	float re;
	float im;

} complex[2];


//function to read complex number
struct Scomplex read_complex(void){
	struct Scomplex complex;
	printf("Enter real and imaginary respectively: ");
	scanf("%f", &complex.re);
	scanf("%f", &complex.im);

	return complex;
}

// function to print added complex numbers
void print_added_complex_numbers(struct Scomplex complex_1, struct Scomplex complex_2){

	printf("Sum = %g + %gi", 
	complex_1.re + complex_2.re,
	complex_1.im + complex_2.im);

}



int main(void) {

	printf("For 1st complex number\n");
	complex[0] = read_complex();
	printf("For 2nd complex number\n");
	complex[1] = read_complex();

	print_added_complex_numbers(complex[0], complex[1]);



}
