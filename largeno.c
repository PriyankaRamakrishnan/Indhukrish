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
printf("\na is big");
elseif(b>a&&b>c)
printf("\nb is big");
else
printf("\nc is big");
}
