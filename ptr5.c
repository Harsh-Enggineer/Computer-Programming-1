#include <stdio.h>
int main()
{
    int numbers[] = {10, 20, 30, 40, 50}; 
    int *ptr;                        
    ptr = numbers;
    int thirdElement = *(ptr + 2);
    printf("The third element of the array is: %d\n", thirdElement);
    return 0;
}