#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nOne");
        break;
    case 2:
        printf("\nTwo");
        break;
    case 3:
        printf("\nThree");
        break;
    default:
        printf("\nInvalid number");
    }
    return 0;
}
