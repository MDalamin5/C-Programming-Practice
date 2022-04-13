#include<stdio.h>
int main()
{
    FILE*infile;
    int stutus;
    double sum=0, count=0, data;
    double avg;

    infile = fopen("sumdata.txt", "r");
    stutus= fscanf(infile, "%lf", &data);

    while (stutus != EOF)
    {
       printf("%lf\n",data);
       sum=sum+data;
       count++;
       stutus= fscanf(infile, "%lf",&data);
    }
    fclose(infile);

    avg= sum/count;
    printf("The sum is %lf\n",sum);
    printf("The avarage is %.2lf",avg);
    
    return 0;

    


}