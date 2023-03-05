#include <stdio.h>
int main()
{
    int sum=0,i=1,x,n,count;
    printf("Please input N : ");
    scanf("%d",&n);
    printf("Prime : ");
    while(n>=i)
    {   x=1;
        while(i>=x)
        {
            if(i%x==0)
                count++;

            x++;
        }
        if(count==2)
        {   printf("%d ",i);
                sum+=i;
        }
        i++;
        count=0;
    }
    printf("\nSummation of prime is %d",sum);
}
