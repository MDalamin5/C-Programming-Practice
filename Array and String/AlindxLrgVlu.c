#include<stdio.h>
int main()
{
    int array[5]={2, 6, 3, 6,6};
    int max= array[0];
    int i;

    for(i=0; i<5; i++)
    {
        if(max<array[i])
        {
            max= array[i];
        }
    }
    /*
   //For small value index
    for(i=0; i<5; i++)
    {
        if(max>array[i])
        {
            max= array[i];
        }
    }
*/

    printf("Max= %d",max);

    printf("\n All index are max value present: ");

    for(i=0; i<5; i++)
    {
        if(max==array[i])
        {
            printf("%d\t",i);
        }
    }
}