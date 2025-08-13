#include<stdio.h>
int main()
{
    float grosel,netsel,dis;
    printf("Enter Selary");
    scanf("%f",&grosel);
    if(grosel>20000)
    {
        dis=0.15*grosel;
        netsel=grosel-dis;
        printf("Net Sales Is...%f\n",netsel);
    }
    else if(grosel>10000 && grosel<20000)
    {
        dis=0.1*grosel;
        netsel=grosel-dis;
        printf("Net Sales Is...%f\n",netsel);
    }
    else
    {
        dis=0.05*grosel;
        netsel=grosel-dis;
          printf("Net Sales Is...%f\n",netsel);
    }
    return 0;
}
