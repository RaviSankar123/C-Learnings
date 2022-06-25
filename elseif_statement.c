#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("%d is negative value",a);
    }
    else if(a==0)
    {
        printf("The value is 0",a);
    }
    else if(a>0)
    {
        printf("%d is positive value",a);
    }
    return 0;
}
