#include<string.h>
#include<stdio.h>
#include<ctype.h>
int checkVowel(char);
int main()
{
    char nh[40];
    char str[30];
    int d=0;
    printf("Enter Your String: ");
    gets(nh);
    for(int i=0 ; nh[i]!='\0'; i++)
    {
        if(checkVowel(nh[i])==0)
        {
            str[d]=nh[i];
            d++;
        }
    }
    str[d]='\0';
    //strcpy(nh,str);
    puts(str);
}

int checkVowel(char ch)
{
   
        if (ch=='a' || ch=='e' ||
              ch=='i' || ch=='o' || 
             ch=='u' || ch=='A' ||
             ch=='E' || ch=='I' ||
              ch=='O' || ch=='U')
              {
                  return 1;
              }
              else
              {
                  return 0;
              }
    
}