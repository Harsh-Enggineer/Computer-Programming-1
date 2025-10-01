#include <stdio.h>
void findMiniNotes(int amount)
{
    int notes[]={500,200,100,50,20,10,5,2,1};
    int num_notes=sizeof(notes)/sizeof(notes[0]);
    printf("Minimum Notes Required For %d Are:\n",amount);
    for(int i=0;i<num_notes;i++)
    {
        if(amount>=notes[i])
        {
            int count=amount/notes[i];
            amount=amount%notes[i];
            printf("%d notes of %d Rs.\n",count,notes[i]);
        }
    }
}
    int main()
    {
        int value;
        printf("Enter The Amount:");
        scanf("%d",&value);
        findMiniNotes(value);
        return 0;
    }
