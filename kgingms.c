#include <stdio.h>
int main()
{
    float kg,grm;
    printf("Enter Amount In Kg");
    scanf("%f",&kg);
    grm=kg*1000;
    printf("%f Kg In Grams Is...%f",kg,grm);
}