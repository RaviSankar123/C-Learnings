/*
#include<stdio.h>
int main()
{
    int i=1;

    while(i<=10)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}
