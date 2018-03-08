#include<stdio.h>
void main()
{
int a,i;
printf("\nenter the num to find nearest greater multiple of 10 :");
scanf("%d",&a);
for(i=a+1;i<=a+10;i++)
{
if(i%10==0)
printf("\nnearest greater multiple of 10 for the given number %d : %d",a,i);
}
}
