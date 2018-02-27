#include<stdio.h>
void main()
{
int N,temp,val,r,r1;
printf("\nEnter the num :");
scanf("%d",&N);
while(N!=0)
{
 r=N%10;
 val=val*10+r;
 N=N/10;
}
temp=val;
while(temp>0)
{
r1=temp%10;
printf("%d\t",r1);
temp=temp/10;
}
}
