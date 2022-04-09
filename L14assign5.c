#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];
    int i=0,lenth=0;
    printf("Enter your string: ");
    scanf("%s",str1);

    while(str1[i]!='\0')
    {
        lenth++;
        i++;

    }

    //printf("%d",lenth);
    //for string revers.
    int j;

    for(j=0, i=lenth-1; i>=0; j++,i--)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    //puts(str2);

    int result;
    result= strcmp(str1,str2);

    if(result==0)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is not Palindrome.");
    }


}