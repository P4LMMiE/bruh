#include <stdio.h>
#include <math.h>
int main()
{   float r;
    const double pi=3.1415926535;
    printf("Please input r : ");
    scanf("%f",&r);
    printf("The surface area of sphere is %.2f\n",4*pi*pow(r,2));
    printf("The volume of sphere is %.2f\n",(4*pi*pow(r,3))/3);
}
