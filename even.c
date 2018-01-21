#include<stdio.h>
#include<conio.h>
void main()
{
int i,in1,in2;
printf("\nenter the intervals");
scanf("%d%d",&in1,&in2);
for(i=in1;i<=in2;i++)
{
if(i%2==0)
printf("\n%d",i);
}
getch();
}
