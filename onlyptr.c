#include <stdio.h>
int main()
{
    int a[5],*p,i;
    p=a;
    printf("\nEnter 5 Different Values.\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",p);
        p++;
    }
    printf("Now,Printing All Values Of Array a\n");
    printf("Using Pointer Veriable.p\n");
    p=a;
    for(i=0;i<5;i++)
    {
        printf("%d",*p);
        p++;
    }
}