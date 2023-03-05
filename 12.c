#include <stdio.h>
int main()
{   int a,b,c,i,count;
    printf("Input A = ");
    scanf("%d",&a);
    printf("Input B = ");
    scanf("%d",&b);
    printf("Input C = ");
    scanf("%d",&c);
    i=a+1;
    while(i<b){
        if(i%c==0)
        {
            count++;
        }
        i++;
    }
    i=a+1;
    printf("Output : There is %d number divisible by %d\n",count,c);
    do{
        if(i%c==0)
        {
            printf("%d ",i);
        }
        i++;
    }while(i<b);
}
