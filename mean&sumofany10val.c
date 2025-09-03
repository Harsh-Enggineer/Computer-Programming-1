#include <stdio.h>
int main()
{
    int i;
    float num,sum=0.0,mean;
    printf("Enter Any 10 Numbers:\n");
    for(i=1;i<=10;i++)
    {
        printf("Enter Number %d",i);
        scanf("%f",&num);
        sum+=num;
    }
    mean=sum/10.0;
    printf("\nSum Of The 10 Number Is:%.2f\n",sum);
    printf("Mean Of The Number Is:%.2f\n",mean);
    return 0;
}