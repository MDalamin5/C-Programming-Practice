#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char str1[40];
    char str2[20];

    

    printf("Enter your string: ");
    gets(str1);
    printf("Enter your another string: ");
    gets(str2);

    for(i=0; str1[i]!='\0' || str2[i] !='\0' ; i++)
    {
        if(str1[i] != str2[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("the string are not equal.");
    }

    else
    {
        printf("the string are equal.");
    }

    


}