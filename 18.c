#include <stdio.h>
int main()
{
    int i,x[10],count=0,sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter number #%d : ",i+1);
        scanf("%d",&x[i]);
        if(x[i]%2==1)
            {   count++;
                sum+=x[i];
            }

    }
    printf("The number of ODD numbers = %d\n",count);
    printf("Sum of ODD numbers = %d\n",sum);
}
