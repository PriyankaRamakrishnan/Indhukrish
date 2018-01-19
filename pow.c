#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
long long a,p,result;
printf("\nenter the num");
scanf("%lld",&a);
printf("\nenter the power val");
scanf("%lld",&p);
result=pow(a,p);
printf("%lld",result);
  getch();
}
