#include <stdio.h>
int main()
{   int x[10],i;
    char a;
    printf("Enter Character(A,B,C) : ");
    scanf("%c",&a);
    switch(a){
    case 'A':
        printf("Enter Number : ");
        scanf("%d",&x[0]);
        printf("You Input %d",x[0]);
            break;
    case 'B':
        for(i=0;i<2;i++)
        {
            printf("Enter Number : ");
            scanf("%d",&x[i]);
        }
            printf("You Input %d,%d",x[0],x[1]);
                break;
    case 'C':
        for(i=0;i<3;i++)
        {
            printf("Enter Number : ");
            scanf("%d",&x[i]);
        }
            printf("You Input %d,%d,%d",x[0],x[1],x[2]);
                break;
    default:
        break;
    }
}
