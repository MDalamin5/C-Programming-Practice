#include<stdio.h>
int main()
{
    int array[5]={10, 20,30,20,40};
    int i, pos,value;
    printf("Enter Your elemet which one you delet: ");
    scanf("%d",&value);

    for(i=0; i<5; i++)
    {
        if(array[i]==value)
        pos=i;
        break;
    }
    for(i= pos; i<5; i++)
    {
        array[i]=array[i+1];
    }

    for(i=0; i<4; i++)
    {
        printf("%d\t",array[i]);
    }
    
}