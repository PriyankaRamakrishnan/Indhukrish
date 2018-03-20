#include<stdio.h>
void main()
{
int d1,d2,result;
char operator;
printf("\nEnter the numbers for calculation :");
scanf("%d %c %d",&d1,&operator,&d2);
if(operator=='/')
{
result=d1/d2;
printf("\n%d",result);
}
if(operator=='%')
{
result=d1%d2;
printf("\n%d",result);
}
}
