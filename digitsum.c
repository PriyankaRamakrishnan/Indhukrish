#include<stdio.h>
void main()
{
int N,sum=0,r;
printf("\nEnter the num :");
scanf("%d",&N);
while(N>0)
{
 r=N%10;
 sum=sum+r;
 N=N/10;
}
printf("%d",sum);
}
