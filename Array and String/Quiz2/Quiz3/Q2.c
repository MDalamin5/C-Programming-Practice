#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
FILE *fp=NULL;
FILE*pos;
FILE*neg;
int main()
{
    int n,num[100];
    int value;
    
    int i,stutus;
      fp= fopen("input.txt","w");
      pos=fopen("positive.txt","w");
      neg=fopen("negative.txt","w");
      printf("how many number you want to add on file: ");
      scanf("%d",&n);
      printf("Enter your number: ");
      for(i=0; i<n; i++)
      {
          scanf("%d",&num[i]);
          fprintf(fp,"%d ",num[i]);
      }

      fclose(fp);
      fp=fopen("input.txt","r");
      stutus=fscanf(fp,"%d",&value);
      while(stutus == 1)
      {
          if(value>0)
          {
              
              fprintf(pos,"%d ",value);
              stutus=fscanf(fp,"%d",&value);
          }
          if(value<0)
          {
              
              fprintf(neg,"%d ",value);
              stutus=fscanf(fp,"%d",&value);
          }
      }
      fclose(fp);
      fclose(pos);
      fclose(neg);


      
}