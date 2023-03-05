#include <stdio.h>
int main()
{   int x,y,i=1;
    printf("Enter N : ");
    scanf("%d",&x);
    printf("Output : ");
    do{
       if(x%i==0)
       {
           printf("%d ",i);
           y++;
       }
        i++;
    }while(i<=x);
    printf("\nTotal : %d\n",y);
}
