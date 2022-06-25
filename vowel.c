#include<stdio.h>
int main()
{
    char c;
    printf("Enter the vowel:");
    scanf("%c",&c);
    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("\n%c is a vowel",c);
        break;
    default:
        printf("\n%c is not a vowel",c);
        break;
    }
    return 0;
}
