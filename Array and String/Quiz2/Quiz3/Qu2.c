#include<stdlib.h>
#include<stdio.h>
int main()
{
    int num,stutus;
    FILE *fp ;
    FILE *pos;
    FILE *neg;
    fp= fopen("input.txt","r");
    pos= fopen("positive.txt","w");
    neg= fopen("negative.txt", "w");
    stutus=fscanf(fp,"%d",&num);
    while(stutus !=EOF)
    {
        if(num>0)
        {
            fprintf(pos,"%d  ",num);
            stutus=fscanf(fp,"%d",&num);

        }

        if(num<0)
        {
            fprintf(neg,"%d  ",num);
            stutus=fscanf(fp,"%d",&num);

        }
    }
     fclose(fp);
      fclose(pos);
      fclose(neg);
}