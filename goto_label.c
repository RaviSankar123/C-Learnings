
#include<stdio.h>
int main()
{
    int ch,qty,i,net=0;
    ravi:
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
            net=net+(qty*10);
            break;
        case 2:
            printf("\nYou have selected Coffee");
            printf("\nEnter the Quantity:");
            scanf("%d",&qty);
            net=net+(qty*15);
            break;
        case 3:
            printf("\nYou have selected Cold coffeee");
            printf("\nEnter the Quantity:");
            scanf("%d",&qty);
            net=net+(qty*25);
            break;
        case 4:
            printf("\nYou have selected Milk shake");
            printf("\nEnter the Quantity:");
            scanf("%d",&qty);
            net=net+(qty*50);
            break;
        default:
            printf("\nYou selected invalid product");
        }

        printf("\nDo you want to continue press 1:");
        scanf("%d",&i);
        if(i==1)
        {
            goto ravi;
        }
        printf("\nTotal amount : %d",net);
        return 0;
}
