#include<math.h>
#include<stdio.h>
int main()
{
    int mark;
    printf("Whats your mark: ");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
    printf("Its invalid mark");
    else if(mark>=80)
    printf("You got A+");
else if(mark>=70)
    printf("You got A");
    else if(mark>=60)
    printf("You got A-");
    else if(mark>=50)
    printf("You got b");
    else if(mark>=40)
    printf("You got k");
    else if(mark>=33)
    printf("You got c-");
    else
    printf("You are faild");
}