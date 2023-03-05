#include <stdio.h>
int main()
{   int i,j,n;
    char x;
    printf("Input n : ");
    scanf("%d",&n);
    getchar();
    printf("Input Char : ");
    scanf("%c",&x);
    for(i=0;i<n;i++)
    {   for(j=i+1;j>0;j--)
        {
            printf("%c",x);
        }
        printf("\n");
    }
}
