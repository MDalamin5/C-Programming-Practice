#include<stdio.h>
int countSearchKey();
int main(){
    int size,i;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int search_key;
    printf("Enter search key: ");
    scanf("%d",&search_key);
    int result;

    result=countSearchKey(arr,size,search_key);

    if(result==0)
    {
        printf("Not fountd");
    }
    else{
        printf("Search Key appears %d times",result);
    }
}

int countSearchKey(int array[], int size,int key)
{
    int i,count=0;

    for(i=0; i<size; i++)
    {
        if(key==array[i])
        {
            count++;
        }
    }

    return count;
}