#include <stdio.h>
int main()
{
    int a[5],i,j,temp,choice;
    printf("Enter 5 Numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Your Choice:\n");
    printf("1.Ascending\n");
    printf("2.Descending\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);
    for(i=0;i<5-1;i++){
        for(j=i+1;j<5;j++){
            if((choice==1 && a[i]>a[j]) || (choice==2 && a[i]<a[j]))
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }

    }
    printf("Sorted Numbers:\n");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}