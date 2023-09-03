#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) printf("Error!!! Factorial of negative numbers doesn't exist");
    else if (num == 0) printf("\nFactorial = 1");

    else
    {
        long factorial = 1;
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        
        printf("Factorial = %ld", factorial);  
    }
}