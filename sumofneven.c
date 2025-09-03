#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter Integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum +=(2*i);
    printf("Sum Of The First %d Even Number Is:%d\n",n,sum);
    return 0;
}
