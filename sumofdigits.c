#include <stdio.h>
int main()
{
    int no,sum=0,digit;
    printf("Enter a Number:");
    scanf("%d",&no);
    while(no!=0)
    {
        digit=no%10;
        sum += digit;
        no/=10;
    }
    printf("Sum Of The Digits Is:%d\n",sum);
    return 0;
}