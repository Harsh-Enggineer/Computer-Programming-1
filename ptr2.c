#include <stdio.h>
int main()
{
    int *xptr;
    int x=20;
    xptr=&x;
    printf("Origninal Value Is=%d\n",*xptr);
    *xptr=40;
    printf("Updated Value Is=%d",*xptr);
    return 0;
}