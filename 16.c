#include <stdio.h>
int main()
{
    int i,j,k,x[6];
    printf("Enter Score 6 students :\n");
    for(i=0;i<6;i++)
    {   printf("Student#%d score: ",i+1);
        scanf("%d",&x[i]);
    }
    printf("ID | Score\n");
    printf("---+------------------------------------------------------------------------\n");
    for(i=1;i<=6;i++)
    {   printf("%2d |",i);
        for(j=0;j<x[i-1];j++)
            {   printf("*");

            }
        printf("(%d)",x[i-1]);
        printf("\n");
    }
}
