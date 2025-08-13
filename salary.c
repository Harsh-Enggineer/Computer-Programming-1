#include<stdio.h>
int main()
{
    float netsel,grosel,alw,deu;
    printf("Enter Selary");
    scanf("%f",&grosel);
    if(grosel>10000)
    {
        alw=0.1*grosel;
        deu=0.03*grosel;
        netsel=grosel+alw-deu;
        printf("Net Selary Is...%f\n",netsel);
    }
    else if(grosel>5000 && grosel<10000)
    {
        alw=0.07*grosel;
        deu=0.02*grosel;
        netsel=grosel+alw-deu;
        printf("Net Selary Is...%f\n",netsel);
    }
    return 0;
}
