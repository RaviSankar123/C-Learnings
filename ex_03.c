#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float average;
    printf("\nEnter the five marks:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    average=total/5;
    printf("\nTotal: %d",total);
    printf("\nAverage: %f",average);
    return 0;
}
