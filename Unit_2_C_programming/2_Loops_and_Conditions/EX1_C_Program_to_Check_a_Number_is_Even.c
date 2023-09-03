#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer you want to check: ");
    scanf("%d", &num);
    if (num % 2) printf("\n%d is odd.", num);
    else printf("\n%d is even.", num);
}