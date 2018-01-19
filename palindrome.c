#include<stdio.h>
#include<conio.h>
void main()
{
int reminder,reverse=0,n,temp;
printf("\nenter the num");
scanf("%d",&n);
temp=n;
while(n>0)
{
reminder=n%10;
reverse=reverse*10+reminder;
n=n/10;
}
if(temp==reverse)
printf("\nYES");
else
printf("\nNO");
getch();
}
