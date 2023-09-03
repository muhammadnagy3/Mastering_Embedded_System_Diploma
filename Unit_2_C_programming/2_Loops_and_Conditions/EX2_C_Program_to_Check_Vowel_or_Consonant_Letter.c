#include <stdlib.h>
#include <stdio.h>

int main()
{
    char character;
    printf("Enter an alphabet: ");
    scanf("%c", &character);
    
    // Code 1
    switch (character)
    {
    case 'a':
        printf("\n%c is a voiel.", character);
        break;
    case 'e':
        printf("\n%c is a voiel.", character);
        break;
    case 'i':
        printf("\n%c is a voiel.", character);
        break;
    case 'o':
        printf("\n%c is a voiel.", character);
        break;
    case 'u':
        printf("\n%c is a voiel.", character);
        break;
    
    default:
        printf("\n%c is a consonant.", character);
        break;
    }

    // Code 2
    // if (character == 'a'||character =='e'||character =='i'||character =='o'|| character =='u') 
    // printf("\n%c is a voiel.", character);
    // else printf("\n%c is a consonant.", character);



}