#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int num[size];
    printf("Enter the elements of aray: ");
    
    for(int i=0; i<size; i++)
    {
        scanf("%d",&num[i]);
    }
    //for even elementes: 
    printf("The even elements are: ");
    for(int i=0; i<size; i++)
    {
        if(num[i]%2==0)
        {
            printf("%d ",num[i]);
        }
    }

    printf("\nThe odd elements are: ");
    for(int i=0; i<size; i++)
    {
        if(num[i]%2!=0)
        {
            printf("%d ",num[i]);
        }
    }


    

}