#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);

    float temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping, value of a = %g", a);
    printf("\nAfter swapping, value of b = %g", b);
    
}