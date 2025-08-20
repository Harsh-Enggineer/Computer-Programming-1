#include <stdio.h>
int main()
{
        int num1,num2,choice,result;
        printf("Enter First Integer:");
        scanf("%d",&num1);
        printf("Enter Second Integer:");
        scanf("%d",&num2);
        printf("Choose An Opration:\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("Enter Your Choice(1-4):");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                result=num1+num2;
                printf("Result=%d\n",result);
                break;
            case 2:
                result=num1-num2;
                printf("Result=%d\n",result);
                break;
            case 3:
                result=num1*num2;
                printf("Result=%d\n",result);
                break;
            case 4:
                if(num2!=0)
                {
                    result=num1/num2;
                    printf("Result=%d\n",result);
                }
                else
                {
                    printf("Division By Zero Is Not Allowed\n");
                }
                break;
            default:
                printf("Invalid Choice\n");
                break;
        }
    return 0;
}
