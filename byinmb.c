#include <stdio.h>
int main()
{
    long long bytes;
    double mb;
    printf("Enter The Number Of Bytes");
    scanf("%lld",&bytes);
    mb=(double)bytes/(1024.0*1024.0);
    printf("%lld Bytes Is Equal To %.4f Megabytes.\n",bytes,mb);
    return 0;
}