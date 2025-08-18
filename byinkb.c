#include <stdio.h>
int main()
{
    long long bytes;
    double kb;
    printf("Enter The Number Of Bytes");
    scanf("%lld",&bytes);
    kb=(double)bytes/1024.0;
    printf("%lld Bytes Is Equal To %.2f Kilobytes.\n",bytes,kb);
    return 0;
}