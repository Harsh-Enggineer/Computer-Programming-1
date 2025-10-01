#include <stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter Rows & Columns Of First Martrix:");
    scanf("%d %d",&m,&n);
    printf("Enter Rosw & Columns Of Second Matrix:");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("Matrix Multiplication Not Possiable\n");
        return 0;
    }
    int A[m][n],B[p][q],C[m][q];
    printf("Enter Elements Of First Martrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter Elements Of Second Matrix:\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                C[i][j]=0;
            }
        }
        }
    }
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<n;k++)
            {
                C[i][j] += A[i][k]*C[k][i];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}