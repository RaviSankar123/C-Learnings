#include<stdio.h>
int main()
{
    float km,m,cm,i,ft;
    printf("Enter the kilometer:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
    printf("\nKilometer is %f",km);
    printf("\nMeter is %f",m);
    printf("\nCentimeter is %f",cm);
    printf("\nInch is %f",i);
    printf("\nFeet is %f",ft);
    return 0;
}
