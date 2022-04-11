#include<string.h>
#include<stdio.h>
char* display();
int main()
{
    char * str;
   str= display();
   str[0]='a'; 
   printf("%s",str);
}

char* display()
{
   static char str1[20]={"Alamin"};
    return str1;
}