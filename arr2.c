//accept 10 values and print them later on
#include <stdio.h>
int main()
{
    int a[10],i;
    printf("Enter Any 10 Values\n");
    for(i=0;i<10;i++)
    {
        printf("Enter Number %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("4th No. Is:%d\n",a[3]);
    printf("7th No. Is:%d\n",a[6]);
    printf("9th No. Is:%d\n",a[8]);
    return 0;
}