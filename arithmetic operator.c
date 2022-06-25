#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Total:%d\n",c);
    c=a-b;
    printf("Difference:%d\n",c);
    c=a*b;
    printf("Multiply:%d\n",c);
    c=a/b;
    printf("Division:%d\n",c);
    c=a%b;
    printf("Modulus;%d\n",c);
    return 0;
}
