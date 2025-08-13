#include<stdio.h>
int main()
{
    int a,b,c;
    int large,small;
    printf("Enter First Number");
    scanf("%d",&a);
    printf("Enter Second Number");
    scanf("%d",&b);
    printf("Enter Third Number");
    scanf("%d",&c);
    if(a>=b && b>=a)
    {
        large=a;
    }
    else if(b>=a && b>=c)
    {
        large=b;
    }
    else
    {
        large=c;
    }
    if(a<=b && b<=c)
    {
        small=a;
    }
    else if(b<=a && b<=c)
    {
        small=b;
    }
    else
    {
        small=c;
    }
    printf("Largest Number Is...%d\n",large);
    printf("Smallest Number Is...%d\n",small);
    return 0;
}
