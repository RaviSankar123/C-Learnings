#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float average;
    printf("Enter the five marks:\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    average=total/5.0;
    printf("\nTotal  :%d",total);
    printf("\nAverage:%f",average);
    if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
    {
        printf("\nPass");
        if(average>=90&&average<=100)
        {
            printf("\nGrade is A");
        }
        else if(average>=80&&average<=89)
        {
            printf("\nGrade is B");
        }
        else if(average>=70&&average<=79)
        {
            printf("\nGrade is C");
        }
        else if(average<70)
        {
            printf("\nGrade is D");
        }
    }
    else
    {
        printf("\nFail");
        printf("\nNo grade");
    }
    return 0;
}
