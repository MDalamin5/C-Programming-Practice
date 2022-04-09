#include<stdio.h>
int main()
{
    int arr[5]={5,6,7,8,9};
    int del_pos=0,i;

     for(i=del_pos; i<5; i++)
     {
         arr[i]=arr[i+1];
     }
    
    for(i=0; i<4; i++){
        printf("%d ",arr[i]);
    }

}