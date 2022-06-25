#include<stdio.h>
int main()
{
    int c,d,b;
    printf("Enter C and D:");
    scanf("%d%d",&c,&d);
    printf("C:%d D:%d\n",c,d);
    b=c;
    c=d;
    d=b;
    printf("C:%d D:%d",c,d);
    return 0;
}
