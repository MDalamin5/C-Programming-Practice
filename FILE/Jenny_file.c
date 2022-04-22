#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[15];//={"Al Amin"};
    char ch;
    fp= fopen("abc.txt", "r");

    /*
    for(int i=0; i<strlen(str); i++)
    {
        fputc(str[i],fp);
    }
    */

   //fputs(str,fp);
   while(!feof(fp))
   {
       fgets(str, 2,fp);
   printf("%s",str);
   }

   
    fclose(fp);
}