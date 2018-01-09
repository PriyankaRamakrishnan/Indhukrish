#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("\nenter a,b,c value");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("\na is big");
else if((b>a)&&(b>c))
printf("\nb is big");
else
printf("\nc is big");
  getch();
}
