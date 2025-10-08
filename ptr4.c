#include <stdio.h>
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1; 
    *ptr1 = *ptr2; 
    *ptr2 = temp; 
}
int main()
{
    int num1 = 10;
    int num2 = 20;
    int *p1 = &num1;
    int *p2 = &num2;

    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Value pointed to by p1 = %d\n", *p1);
    printf("Value pointed to by p2 = %d\n", *p2);
    swap(p1, p2);
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Value pointed to by p1 = %d\n", *p1);
    printf("Value pointed to by p2 = %d\n", *p2);
    return 0;
}