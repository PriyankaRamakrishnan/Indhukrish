#include<stdio.h>
#include<math.h>
void main()
{
int n,i,power;
printf("\nEnter the num :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
power=pow(2,i);
if(power>n)
{
printf("%d",power);
break;
}
}
}
