#include <stdio.h>
int main()
{   float w,h;
    printf("Input W :");
    scanf("%f",&w);
    printf("Input H :");
    scanf("%f",&h);
    if(!(w>=1000||h>=1000))
    printf("Output : %.2f",w*h);
}
