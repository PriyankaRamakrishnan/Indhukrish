#include<stdio.h>
void main()
{
int a,b,d;
printf("\nEnter the 2 numbers :");
scanf("%d %d",&a,&b);
d=a-b;
if(d%2==0)
printf("\nEven");
else 
printf("\nOdd");
}
