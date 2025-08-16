#include <stdio.h>
int main()
{
    int hour,min;
    printf("Enter Hour");
    scanf("%d",&hour);
    min=hour*60;
    printf("%d Hour In Minuite Is...%d",hour,min);
}