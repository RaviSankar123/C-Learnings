#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature:");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0);
    printf("\nThe degree is %f",c);
    return 0;
}
