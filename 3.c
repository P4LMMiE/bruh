#include <stdio.h>
#include <math.h>
int main()
{   int h,q;
    double result;
    printf("Input H Q : ");
    scanf("%d%d",&h,&q);
    if((5<h&&h<1000)&&(15<q&&q<75))
    { result=tan(q*(3.1415926/180))*h;
    printf("Output : %.2lf\n",result);
    }
}
