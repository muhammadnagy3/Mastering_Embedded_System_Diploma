#include <stdlib.h>
#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    
    if (((int)character >= 65 && (int)character <= 90) || ((int)character >= 97 && (int)character <= 122)) 
    printf("\n%c is an alphabet.", character);
    else printf("\n%c is not an alphabet.", character);



}