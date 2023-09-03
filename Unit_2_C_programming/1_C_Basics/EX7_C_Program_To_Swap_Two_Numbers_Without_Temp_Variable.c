#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping, value of a = %g", a);
    printf("\nAfter swapping, value of b = %g", b);
    
}