#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    char str[50];
    char str1[30];
    
    printf("Enter your string: ");
    gets(str);
    strcpy(str1,str);
    int len= strlen(str);
    for(int i=0; i<len/2; i++)
    {
        ch=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=ch;
    }
    puts(str);
 //strcpy(str1,str);
   puts(str1);
    
}