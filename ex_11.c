#include<stdio.h>
int main()
{
    int pop=80000,popmen,popwomen,poplit,litmen,litwomen,ilitmen,ilitwomen;
    popmen=0.52*pop;
    popwomen=pop-popmen;
    poplit=0.48*pop;
    litmen=0.35*pop;
    litwomen=poplit-litmen;
    ilitmen=pop-litmen;
    ilitwomen=pop-ilitmen;
    printf("\nTotal population        :%d",pop);
    printf("\nPopulation of men       :%d",popmen);
    printf("\nPopulation of women     :%d",popwomen);
    printf("\nPopulation of literate  :%d",poplit);
    printf("\nPopulation of literate men :%d",litmen);
    printf("\nPopulation of literate women:%d",litwomen);
    printf("\nPopulation of illiterate men:%d",ilitmen);
    printf("\nPopulation of illiterate women:%d",ilitwomen);
    return 0;

}
