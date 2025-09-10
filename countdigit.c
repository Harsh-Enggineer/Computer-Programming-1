#include <stdio.h>
int main()
{
    int no,count=0;
    printf("Enter An Integer:");
    scanf("%d",&no);
    if(no==0)
    {
        count=1;
    }
    else
    {
        while(no!=0)
        {
            no/=10;
            count++;
        }
    }
    printf("Number Of Digits:%d\n",count);
    return 0;
}