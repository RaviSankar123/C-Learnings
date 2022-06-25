#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number A and B:");
    scanf("%d%d",&a,&b);
    c=a>b?a:b;
    printf("Greatest number is %d",c);
    return 0;
}
