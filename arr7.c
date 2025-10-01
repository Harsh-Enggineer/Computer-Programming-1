#include <stdio.h>
int main()
{
    int i,j;
    int a[2][2],b[2][2];
    printf("Enter The Element Of First Matrix");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter Numbers:");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("\nFirst Matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}