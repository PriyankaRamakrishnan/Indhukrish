#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("\nenter a,b,c value");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("\na %d is big",a);
else if((b>a)&&(b>c))
printf("\nb %d is big",b);
else
printf("\nc %d is big",c);
  getch();
}
