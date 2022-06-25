#include<stdio.h>

int add(int,int);

int main()
{
    int a;
    a=add(20,10);
    printf("\nTotal:%d",a);
    return 0;
}

int add(int a,int b)
{
    return a+b;
}
