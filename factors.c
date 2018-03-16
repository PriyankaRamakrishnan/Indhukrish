#include<stdio.h>
void main()
{
int n,i;
printf("\nEnter a num :");
scanf("%d",&n);
printf("\nThe factor of the number is :");
for(i=1;i<=n;i++)
{
if (n%i==0)
printf("\t%d",i);
}
}
