#include<stdio.h>
int main()
{
    int n,a,b,d1,d2,d3;
    printf("Enter the five digit number:");
    scanf("%d",&n);//153
    d3=n%10;//3
    a=n/10;//15
    d2=a%10;//5
    d1=a/10;//1
    b=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
    if(n==b)
    {
        printf("\nThe given number is armstrong");
    }
    else
    {
        printf("\nThe given number is not a armstrong");
    }
    return 0;
}
