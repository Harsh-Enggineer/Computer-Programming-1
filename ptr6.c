#include <stdio.h>
int main()
{
    char message[] = "Harsh";
    char *ptr = message; 
    printf("Printing characters using pointer increment:\n");
    while (*ptr != '\0')
    {
        printf("%c", *ptr); 
        ptr++;              
    }
    printf("\n");
    return 0;
}