#include<stdio.h>
void maxarray();
int main()
{
    int a[]={4,3,2,5,44,3};

    int result,index;
    maxarray(a,5);
   
}

void maxarray(int arr[],int n)
{
    int i,max=0,index;

    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index= i+1;
        }
    }

    printf("%d max\n", max);
    printf("%d index\n", index);
}