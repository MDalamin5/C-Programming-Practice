#include<stdio.h>
int main()
{
    int i,array1[4],array2[4],array3[4];

    for(i=0;i<5;i++)
    {
        printf("Enter value of array1[%d]: ",i);
        scanf("%d",&array1[i]);
        //fhhdf af ajr eanuerw fa ;ah fna h fa hfjhdjfajjhdjfhafa
    }

    for(i=0;i<5;i++)
    {
        printf("Enter value of array2[%d]: ",i);
        scanf("%d",&array2[i]);
    }


    for(i=0;i<5;i++)
    {
         array3[i]= 0+array1[i]+array2[i];
         printf("array3[%d]= %d\n",i,array3[i]);
    }


}