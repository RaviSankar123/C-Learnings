#include<stdio.h>
int main()
{
    float r_area,r_peri,l,b,c_area,c_cir,r;
    printf("Enter the length and breadth:");
    scanf("%f%f",&l,&b);
    printf("Enter the radius:");
    scanf("%f",&r);
    r_area=l*b;
    r_peri=2*(l+b);
    c_area=3.14*r*r;
    c_cir=2*3.14*r;
    printf("Area of rectangle:%f\n",r_area);
    printf("Perimeter of rectangle:%f\n",r_peri);
    printf("Area of circle:%f\n",c_area);
    printf("Circumference of circle:%f\n",c_cir);
    return 0;
}
