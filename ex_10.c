#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter the four digit number:");
    scanf("%d",&a);//1234
    b=a/10;//123
    c=a%10;//4
    d=b/10;//12
    e=b%10;//3
    f=d/10;//1
    g=d%10;//2
    printf("\n total:%d",c+f);
    return 0;
}
