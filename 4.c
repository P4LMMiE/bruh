#include <stdio.h>
int main()
{   int x,y;
    printf("Input Dividend : ");
    scanf("%d",&x);
    printf("Input Divisor : ");
    scanf("%d",&y);
    printf("Quotient of %d/%d is %d and remainder is %d",x,y,x/y,x%y);
}
