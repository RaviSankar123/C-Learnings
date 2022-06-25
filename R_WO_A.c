#include<stdio.h>

//function declaration
int add();

int main()
{
   int a;
   a=add();
   printf("\nTotal:%d",a);
   return 0;
}

int add()
{
    int a,b;
    printf("\nEnter the values of A and B:");
    scanf("%d %d",&a,&b);
    return a+b;
}
