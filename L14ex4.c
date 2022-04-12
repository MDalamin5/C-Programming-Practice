#include<stdio.h>
void maxarray();
int main()
{
    int a[]={2,2,5,2,3};

    int result,index;
    maxarray(a,5);
   
}

void maxarray(int arr[],int n)
{
    int i,small=arr[0],index,count=0;

    for(i=0; i<n; i++)
    {
        if(arr[i]<=small)
        {
            small=arr[i];
            index= i+1;
        }
        
    }
    printf("The indexes are: ");
    for(i=0; i<n; i++)
    {
        if(arr[i]==small)
        {
            printf("%d \t",i+1);
            
        }
    }
    //printf("%d is the count\n",count);

    printf("\n%d is smallest number\n", small);
    
}