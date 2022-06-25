#include<stdio.h>
int main()
{
    int days;
    printf("\nEnter the days:");
    scanf("%d",&days);
    if(days>=1&&days<=5)
    {
        printf("\nCharge is 50 paise");
    }
    else if(days>=6&&days<=10)
    {
        printf("\nCharge is one rupee");
    }
    else if(days>=10&&days<=30)
    {
        printf("\nCharge is five rupees");
    }
    else
    {
        printf("Your member ship will be cancelled");
    }
    return 0;
}
