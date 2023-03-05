#include <stdio.h>
int main()
{
    char a;
    int b;
    float tax;
    printf("Enter Personal(P) or Company(C) : ");
    scanf("%c",&a);
    printf("Enter Money (Year) : ");
    scanf("%d",&b);
    if(a=='P')
    { if((b>0)&&(b<150001))
        tax=0;
        else if((b>150000)&&(b<300001))
            tax=b*0.05;
        else if((b>300000)&&(b<500001))
            tax=b*0.10;
        else if(b>500000)
            tax=b*0.15;

    }
        else if(a=='C')
        {
            if((b>0)&&(b<3000001))
        tax=b*0.15;
        else if(b>3000000)
            tax=b*0.3;
        }
    printf("Your tax : %.2f TH",tax);
}
