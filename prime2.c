#include<stdio.h>
void main()
{
int a,i,count=0;
printf("\nenter any num :");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
count++;
}
if(count==2)
printf("\nEntered num %d is prime number",a);
else
printf("\nEntered num %d is not a prime number",a);
}
