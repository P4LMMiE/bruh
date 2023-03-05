#include <stdio.h>
#include <math.h>
int main()
{
    int H,Q;
    double x;
    printf("Input H Q : ");
    scanf("%d %d",&H,&Q);
    x=tan(Q);
    //x=x*H;
    printf("Output : %.2lf",x);
}
