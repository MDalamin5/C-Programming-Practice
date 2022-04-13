#include<stdio.h>
//#include<conio.h>

typedef struct student 
    {
        char name[30];
        int mark;
    } st;
    int main()
{
    FILE*infile,*infile2;
    infile=fopen("stuinfo.txt","a");
    infile2= fopen("stuinfo.txt", "r");
    st student,stu;
    int stutus;
    
    printf("Enter the name of sudent and marks: ");
    scanf("%s %d",student.name, &student.mark);
    fprintf(infile,"%s  %d\n",student.name,student.mark);
    fclose(infile);
 //stutus= fscanf(infile2,"%s%d",stu.name,&stu.mark);
    do
    {
        fscanf(infile2, "%s%d",stu.name,&stu.mark);
        printf("%s   %d\n",stu.name,stu.mark);
       stutus= fscanf(infile2,"%s%d",stu.name,&stu.mark);
    }while(stutus != EOF);

    fclose(infile2);
    
}