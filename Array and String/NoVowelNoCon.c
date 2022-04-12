#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[30];
     printf("Enter your string: ");
     gets(ch);
     int count=0;
     for(int i=0; ch[i]!='\0'; i++)
     {
         if (ch[i]=='a' || ch[i]=='e' ||
              ch[i]=='i' || ch[i]=='o' || 
             ch[i]=='u' || ch[i]=='A' ||
             ch[i]=='E' || ch[i]=='I' ||
              ch[i]=='O' || ch[i]=='U')
         {
             count++;
         }
     }
     printf("Number of Vowel is : %d",count);
}