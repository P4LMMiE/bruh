#include <stdio.h>
#include <math.h>
int main()
{   float a,b,c,result;
    printf("Input a b c : ");
    scanf("%f%f%f",&a,&b,&c);
    result = ((-b)+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    printf("Output : %.2f",result);
}
