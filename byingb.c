#include <stdio.h>
int main()
{
    long long bytes;
    double gb;
    printf("Enter The Number Of Bytes");
    scanf("%lld",&bytes);
    gb=(double)bytes/(1024.0*1024.0*1024.0);
    printf("%lld Bytes Is Equal To %.6f Gigabytes\n ",bytes,gb);
    return 0;
}