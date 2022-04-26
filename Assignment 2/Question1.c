#include<stdio.h>
int main()
{
    int array[5]={5, 6,7,5,8};
    int i, j, k;
    int count;
    //int count=0;

    for(i=0; i<5; i++)
    {
        count=0;
        for(j=0; j<5; j++)
        if(i != j)
        {
           if(array[i] == array[j])
           {
                count++;
           }
        }

        if(count==0)
        {
            printf("%d ",array[i]);
        }
        
    }
   // printf("\n%d ",count);

    
}