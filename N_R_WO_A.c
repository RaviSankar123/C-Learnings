#include<stdio.h>

//function declaration
void add();

int main()
{
    add();
    return 0;
}

void add()
{
    int a,b,c;
    printf("\nEnter the value of A and B:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal:%d",c);
}

