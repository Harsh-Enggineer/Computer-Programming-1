#include <stdio.h>
int main()
{
    int x=10;
    int *xptr;
    xptr=&x;
    printf("%d",*xptr);
    return 0;
}