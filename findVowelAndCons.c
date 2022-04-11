#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isvowel(char vlue);
int main()
{
    char ch[20];
    printf("Enter Your String: ");
    gets(ch);
    int i, count=0;
    for(i=0; ch[i]!='\0'; i++)
    {
        if(isvowel(ch[i]))
        {
            count++;
        }
    }

    printf("The number of vowel is : %d",count);
}

int isvowel (char vlue)
{
    return (vlue=='a' || vlue=='A' ||
                vlue=='e' || vlue=='E' ||
                vlue=='i' || vlue=='I' ||
                vlue=='o' || vlue=='O' ||
                vlue=='u' || vlue=='U') ;
               
}