#include<stdio.h>
int main()
{
    int bs,da,hr,gs;
    printf("Enter the basic salary:\ns");
    scanf("%d",&bs);
    da=bs*0.4;
    hr=bs*0.2;
    gs=bs+da+hr+gs;
    printf("\nBasic salary is %d",bs);
    printf("\nDA is %d",da);
    printf("\nHR is %d",hr);
    printf("\nGS is %d",gs);
    return 0;
}
