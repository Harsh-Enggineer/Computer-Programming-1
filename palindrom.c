#include <stdio.h>
int main()
{
    int n,rev_n=0,rem,orig_n;
    printf("Enter An Integer:");
    scanf("%d",&n);
    orig_n=n;
    while(n!=0)
    {
        rem=n%10;
        rev_n=rev_n*10+rem;
        n/=10;
    }
    if(orig_n==rev_n)
    {
        printf("%d is Palindrome Number.\n",orig_n);
    }
    else
    {
        printf("%d is Not Palindrome Number.\n",orig_n);
    }
    return 0;
}