#include<stdio.h>
void main()
{
int N,r;
printf("\nEnter the num :");
scanf("%d",&N);
while(N>0)
{
r=N%10;
if(r%2!=0)
printf("\t%d",r);
N=N/10;
}
}
