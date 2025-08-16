#include <stdio.h>
int main()
{
    int hour,min;
    printf("Enter Miniutes");
    scanf("%d",&min);
    hour=min/60;
    printf("%d Minuite In Hour Is...%d",min,hour);
}