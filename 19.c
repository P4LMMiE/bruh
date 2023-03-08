#include <stdio.h>
int main()
{
    int n,i,x[100],y[100],sum[100];
    int thismax = 0;
    int thisnum = 0;


    printf("N = ");
    scanf("%d",&n);
    if(n>=5&&n<=100)
    {   printf("Input X : ");
        for(i=0;i<n;i++)
        {
            scanf("%d", &x[i]);
        }
        printf("Input Y : ");
        for(i=0;i<n;i++)
        {
            scanf("%d", &y[i]);
        }
        for(i=0;i<n;i++)
        {
            sum[i] = x[i] + y[i];
            if(thismax < sum[i])
            {
                thismax = sum[i];
                thisnum = i;
            }
        }
    }
    printf("\nOutput X : %d\n", x[thisnum]);
    printf("Output Y : %d", y[thisnum]);
}
