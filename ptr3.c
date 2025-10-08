#include <stdio.h>
int main()
{
    int num=42;
    int *ptr; 
    ptr=&num;
    printf("Address StoredIn Ptr:%p\n",(void*)ptr);
    printf("Values At The Same Address Pointed By Ptr:%d\n",*ptr);
    return 0;
}