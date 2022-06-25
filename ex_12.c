#include<stdio.h>
int main()
{
    int amt;
    printf("\nEnter the amount:");
    scanf("%d",&amt);
    printf("\nRequired notes of rs.100 :%d",(amt/100));
    printf("\nRequired notes of rs.50  :%d",(amt%100)/50);
    printf("\nRequired notes of rs.10  :%d",((amt%100)%50)/10);
    printf("\nRemaining amount         :%d",((amt%100)%50)%10);
    return 0;
}
