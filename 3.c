#include <stdio.h>
#include <math.h>
int main()
{   double h,q;
    printf("Input H Q : ");
    scanf("%lf%lf",&h,&q);
    printf("Output : %.2lf\n",tan(q*(3.1415926/180))*h);

}

