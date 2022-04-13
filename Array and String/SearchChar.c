#include<stdio.h>
#include<string.h>
void search(char arr[],char key);
int main()
{
    char str[100];
    printf("Enter your string: ");
    gets(str);
    char ch;
    printf("Enter Your search kye: ");
    scanf("%c",&ch);

    search(str,ch);

    
}

void search(char arr[],char key)
{
    int i;
    int flag=0;
    for(i=0; arr[i] != '\0' ; i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    {
        printf("Found");
    }
    else
        {
            printf("Not Found");
        }
    
}