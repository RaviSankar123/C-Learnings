#include<stdio.h>

void add()
{
    int a,b,c;
    printf("\nEnter the value of A and B:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("\nTotal: %d",c);
}

int main()
{
    int i,n;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        add();
    }
    return 0;
}
