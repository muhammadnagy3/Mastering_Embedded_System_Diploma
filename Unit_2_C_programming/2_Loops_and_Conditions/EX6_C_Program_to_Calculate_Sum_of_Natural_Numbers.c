#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    
    printf("\nSum = %d", sum);
}