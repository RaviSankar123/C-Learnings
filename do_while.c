#include<stdio.h>
int main()
{
    int i=0,n;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    do
    {
        printf("\n%d",i);
        i+=2;
    }while(i<=n);
    return 0;
}
