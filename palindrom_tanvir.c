#include<string.h>
#include<stdio.h>
int main()
{
    int i;
    char ch;
    char str1[20]={"dad"};
    char str2[20];
    strcpy(str2,str1);
    printf("%s",str2);

   int l= strlen(str1);

   
   for(i=0; i<l/2; i++)
   {
       ch= str1[i];
       str1[i]=str1[l-1-i];
        str1[l-1-i]= ch;
   }
   
  if(strcmp(str1,str2)==0)
  {
      printf("Palindrom");
  }
  else 
  {
      printf("Not palindrom");
  }
  
    //printf("%s",str1);
}