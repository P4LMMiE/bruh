#include <stdio.h>
void menu()
{
    printf("\thalf price 400\t\t\t\thalf price 800\t\t\t\thalf price 1200\n");
    printf("Free tel cost per month for 400 baht\tFree tel cost per month for 800 baht\tFree tel cost per month for 1200 baht\n");
    printf("\tCOST 200 baht\t\t\t\tCOST 400 baht\t\t\t\tCOST 600 baht\n");
}
int main()
{   int x,y;
    menu();
    printf("Promotion Half price : ");
    scanf("%d",&x);
    switch(x)
    {
    case 400:
        printf("Your usage time : ");
        scanf("%d",&y);
        printf("Fee : ");
        if(y*1.5>400)
            printf("%.2f",(y*1.5)-200);
        else printf("200.00");
        break;
    case 800:
        printf("Your usage time : ");
        scanf("%d",&y);
        printf("Fee : ");
        if(y*1.5>800)
            printf("%.2f",(y*1.5)-400);
        else printf("400.00");
        break;
    case 1200:
        printf("Your usage time : ");
        scanf("%d",&y);
        printf("Fee : ");
        if(y*1.5>1200)
            printf("%.2f",(y*1.5)-600);
        else printf("600.00");
        break;
    default:
        break;
    }
}
