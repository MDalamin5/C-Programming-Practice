#include<string.h>
#include<stdio.h>
int main()
{
    int i;
    char ch;
    char str1[20]={"HELLO"};

   int l= strlen(str1);

   
   for(i=0; i<l/2; i++)
   {
       ch= str1[i];
       str1[i]=str1[l-1-i];
        str1[l-1-i]= ch;
   }
   

  
    printf("%s",str1);
}