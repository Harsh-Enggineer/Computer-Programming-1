#include <stdio.h>
int main()
{
    int no,digit;
    printf("Enter A Number:");
    scanf("%d",&no);
    if(no==0)
    {
        printf("0\n");
        return 0;
    }
    printf("The Digit in reverce order are:");
    while(no!=0)
    {
        digit=no%10;
        printf("%d",digit);
        no=no/10;
    }
    return 0;
}
