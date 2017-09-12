#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("\nEnter a");
scanf("%d",&a);
printf("\nenter b");
scanf("%d",&b);
printf("\nenter c");
scanf("%d",&c);
if(a>b&&a>c)
printf("\a is big");
elseif(b>a&&b>c)
printf("\b is big");
else
printf("\c is big");
}
