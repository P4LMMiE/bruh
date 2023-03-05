#include <stdio.h>
#include <string.h>
int main()
{   int l,i,count=0;
    char x[30];
    printf("Enter string : ");
    gets(x);
    l = strlen(x);
    printf("The number of ALL characters = %i\n",l);
    for(i=0;i<30;i++)
    {   if((x[i]>='A')&&(x[i]<='Z'))
            count++;
    }
    printf("The number of UPPERCASE character = %d\n",count);
}
