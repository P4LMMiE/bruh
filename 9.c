#include <stdio.h>
int main()
{
    char ch;
    printf("Input Char : ");
    scanf("%c",&ch);
    printf("Output: ");
    if((ch>='A')&&(ch<='Z'))
        printf("Upper case letter");
    else if((ch>='a')&&(ch<='z'))
        printf("Lower case letter");
    else if((ch>='0')&&(ch<='9'))
        printf("Digit");
    else printf("Others");
}
