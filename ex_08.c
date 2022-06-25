#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,h,i,j,sum=0,result;
    printf("Enter the five digit number:");
    scanf("%d",&a);//12345
    b=a/10;//1234
    c=a%10;//5
    sum+=c;
    d=b/10;//123
    e=b%10;//4
    sum+=e;
    f=d/10;//12
    h=d%10;//3
    sum+=h;
    i=f/10;//1
    sum+=i;
    j=f%10;//2
    sum+=j;
    result=c*10000+e*1000+h*100+j*10+i;
    printf("Total:%d",result);
    return 0;

}
