#include <stdlib.h>
#include <stdio.h>

int main()
{
    float num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    
    if (num1 >= num2 && num1 >= num3) printf("Largest numbers = %g", num1);
    else if (num2 >= num1 && num2 >= num3) printf("Largest numbers = %g", num2);
    else printf("Largest numbers = %g", num3);

}