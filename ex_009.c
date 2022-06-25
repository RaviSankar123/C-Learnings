#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,h,i,j;
    printf("Enter the five digit number:");
    scanf("%d",&a);//12345
    b=a/10;//1234
    c=a%10;//5
    d=b/10;//123
    e=b%10;//4
    f=d/10;//12
    h=d%10;//3
    i=f/10;//1
    j=f%10;//2
    printf("Total:%d",c+e+h+i+j);
    return 0;
}

