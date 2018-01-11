#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
printf("enter the no.of times");
scanf("%d",&n);
if(n!=0)
{
for(i=1;i<=n;i++)
printf("hello");
}
else
printf("enter a valid count");
getch();
}
