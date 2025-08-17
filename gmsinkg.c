#include <stdio.h>
int main()
{
    float kg,grm;
    printf("Enter Amount In Grams");
    scanf("%f",&grm);
    kg=grm/1000;
    printf("%f Grams In Kg Is...%f",grm,kg);
}