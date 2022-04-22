 #include<stdlib.h>
 #include<stdio.h>
 #include<string.h>
 int main()
 {
     FILE *fp=NULL;
     fp=fopen("abc.txt","a");
     char str[100];
     printf("Enter string : ");
     gets(str);
        
     //fputs(str,fp);
     fprintf(fp,"\n%s",str);
     fclose(fp);
 }