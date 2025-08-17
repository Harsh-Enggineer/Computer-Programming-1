#include <stdio.h>
int main()
{
    float cel,fer;
    printf("Enter Temp In Fehrinate");
    scanf("%f",&fer);
    cel=(fer-32)*5/9;
    printf("%.2f Temp In Celcuise Is...%.2f",fer,cel);
    return 0;
}