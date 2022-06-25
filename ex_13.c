#include<stdio.h>
int main()
{
    int s,p,c;
    printf("\nEnter the selling price of 15 items:");
    scanf("%d",&s);
    printf("\nEnter the profit:");
    scanf("%d",&p);
    c=(s-p)/15;
    printf("Selling price of 1 item:%d",c);
    return 0;
}
