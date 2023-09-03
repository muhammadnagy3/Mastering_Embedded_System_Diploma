#include <stdlib.h>
#include <stdio.h>

int main()
{
    char character;
    printf("Enter operator either + or - or * or devide: ");
    scanf("%c", &character);
    
    float num1, num2;
    printf("Enter two  operants: ");
    scanf("%f %f", &num1, &num2);
    
    switch (character)
    {
    case '+':
        printf("\n%g + %g = %g", num1, num2, num1 + num2);
        break;
    case '-':
        printf("\n%g - %g = %g", num1, num2, num1 - num2);
        break;
    case '*':
        printf("\n%g * %g = %g", num1, num2, num1 * num2);
        break;
    case '/':
        printf("\n%g / %g = %g", num1, num2, num1 / num2);
        break;
    
    default:
        printf("You entered error operator");
        break;
    }

}