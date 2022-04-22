#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
      FILE *fp, *fq;
      fp= fopen("abc.txt","w");
      fq= fopen("abc.txt","r");

      char str[20];
      int value;
      printf("Enter your string: ");
      gets(str);
      fputs(str,fp);
      printf("Entr integer: ");
      scanf("%d",&value);
      fprintf(fp,"\n%d",value);
      fclose(fp);

      while(!feof(fq))
      {
          fgets(str,5,fq);
          printf("%s",str);
          //puts(fq,4,str);
      }
      fclose(fq);

}