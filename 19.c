#include <stdio.h>
int main()
{
    int n,i,x[100],y[100],max=0,sum[100];
    printf("N = ");
    scanf("%d",&n);
    if(n>=5)
    {   printf("Input X : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        printf("Input Y : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&y[i]);
        }
        for(i=0;i<n;i++)
        {
            sum[i]=x[i]+y[i];
        }
    }
    printf("Output X : %d",x[]);
    printf("Output Y : %d",y[]);
}
