#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A and B:");
    scanf("%d%d",&a,&b);
    printf("A:%d B:%d\n",a,b);
    a=a+b;//5
    b=a-b;//2
    a=a-b;//3
    printf("A:%d B:%d",a,b);
    return 0;
}
/*
a=a*b;
b=a/b;
a=a/b;
*/
