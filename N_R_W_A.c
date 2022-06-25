#include<stdio.h>

void add(int,int);

int main()
{
    add(25,25);
    return 0;
}

void add(int a,int b)
{
    int c;
    c=a+b;
    printf("\nTotal:%d",c);
}
