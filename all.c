#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter First No");
    scanf("%d",&a);
    printf("Enter Second No");
    scanf("%d",&b);
    c=a+b;
    e=a-b;
    f=a*b;
    g=a/b;
    printf("%d+%d=%d",a,b,c);
    printf("%d-%d=%d",a,b,e);
    printf("%d*%d=%d",a,b,f);
    printf("%d/%d=%d",a,b,g);
}