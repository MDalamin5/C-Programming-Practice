#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int value1[n],value2[n],value3[n];
    printf("Enter your first array elements: ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&value1[i]);
    }
     printf("Enter your secend array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&value2[i]);
    }

    for(i=0; i<n; i++)
    {
        value3[i]= value1[i]*value2[i];
        printf("%d x %d = %d\n",value1[i],value2[i],value1[i]*value2[i]);
    }
    /*
    for(i=0; i<n; i++)
    {
        printf("%d\t",value3[i]);
    }
    */
}

  