
#include<stdio.h>
int main()
{
    int age;
    char name[10];
    printf("Enter the name:");
    scanf("%s",&name);
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("%s age is %d eligible for vote",name,age);
    }
    else
    {
        printf("\n%s age is %d is not eligible for vote",name ,age);
    }
    return 0;

}
