#include <stdio.h>
int main()
{   float x;
    printf("Input a temperature in degree Celsius: ");
    scanf("%f",&x);
    printf("%.0f degrees Celsius is equivalent to %.1f degrees Fahrenheit",x,((9*x)/5)+32);
}
