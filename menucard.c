#include<stdio.h>
int main()
{
    int ch,qty;
    printf("Menu card:");
    printf("\nTea          :Rs.10");
    printf("\nCoffee       :Rs.15");
    printf("\nCold coffee  :Rs.25");
    printf("\nMilk shake   :Rs.50");
    printf("\nEnter the choice:");
    scanf("%d",&ch);
    switch(ch)
        {
        case 1:
            printf("\nYou have selected Tea");
            printf("\nEnter the Quantity:");
            scanf("%d",&qty);
            printf("\nTotal amount is %d",(qty*10));
            break;
        case 2:
            printf("\nYou have selected Coffee");
            printf("Enter the Quantity:");
            scanf("%d",&qty);
            printf("\nTotal amount is %d",(qty*15));
            break;
        case 3:
            printf("You have selected Cold coffeee");
            printf("Enter the Quantity:");
            scanf("%d",&qty);
            printf("\nTotal amount is %d",(qty*25));
            break;
        case 4:
            printf("You have selected Milk shake");
            printf("Enter the Quantity:");
            scanf("%d",&qty);
            printf("\nTotal amount is %d",(qty*50));
            break;
        default:
            printf("You selected invalid product");
        }
        return 0;
}
