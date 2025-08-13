#include<stdio.h>
int main()
{
    int a;
    printf("Enter Number");
    scanf("%d",&a);
    if(a%7==0)
    {
        printf("%d Is Divisable By 7",a);
    }
    else
    {
        printf("%d Is Not Divisable By 7",a);
    }
    return 0;
}
