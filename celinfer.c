#include <stdio.h>
int main()
{
    float cel,fer;
    printf("Enter Temp. In Celciuse");
    scanf("%f",&cel);
    fer=(cel*9/5)+32;
    printf("%.2f Temp In Fehrenheit Is...%.2f",cel,fer);
    return 0;
}