#include<stdio.h>
int main()
{
    int mark;
    printf("Enter Marks Here...");
    scanf("%d",&mark);
    if(mark>=70)
    {
        printf("Dist.",mark);
    }
    else if(mark>=60 && mark<=70)
    {
        printf("First",mark);
    }
    else if(mark>=50 && mark<=60)
    {
        printf("Second",mark);
    }
    else if(mark>=35 && mark<=50)
    {
        printf("Third");
    }
    else if(mark<35)
    {
        printf("Fail");
    }
    return 0;
}
