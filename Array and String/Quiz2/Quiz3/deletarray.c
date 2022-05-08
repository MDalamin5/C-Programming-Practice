#include<stdio.h>
int main()
{
    int array[5]={10,20,30,40,50};
    int value, terget,i;
    printf("Enter your delet value: ");
    scanf("%d",&value);
    for(i=0; i<5; i++)
    {
        if(array[i]==value)
        {
            terget=i;
            break;
        }
    }
    for(i=terget; i<5;i++)
    {
        array[i]=array[i+1];
    }

    for(i=0; i<4; i++)
    {
        printf("%d ",array[i]);
    }
}