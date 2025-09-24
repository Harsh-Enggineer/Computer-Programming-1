//accept 5 values and print then later on 
#include <stdio.h>
int main()
{
    int a[5],i;
    printf("Enter Any 5 Values\n");
    for(i=0;i<5;i++)
    {
        printf("Enter Number %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n You Entered:\n");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}