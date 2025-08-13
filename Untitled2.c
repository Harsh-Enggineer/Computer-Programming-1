#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First Number");
    scanf("%d",&a);
    printf("Enter Second Number");
    scanf("%d",&b);
    if(a>b)
    {
        printf("Largest Number Is...%d\n",a);
    }
    else if(b>a)
    {
        printf("Largest Number Is...%d\n",b);
    }
    if(a<b)
    {
        printf("Smallest Number Is...%d\n",a);
    }
    else if(b<a)
    {
        printf("Smallset Number Is...%d\n",b);
    }
    return 0;
}
