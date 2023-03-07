#include <stdio.h>
int main()
{
    int i,x[3],sum=0;
    for(i=0;i<3;i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    printf("%d + %d + %d = %d\n",x[0],x[1],x[2],sum);
    if(sum<=100)
        printf("100 OK !!");
}
