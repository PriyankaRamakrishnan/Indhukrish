#include<stdio.h>
void main()
{
int N,M,sum=0;
printf("\nEnter the numbers :");
scanf("%d %d",&N,&M);
sum=N+M;
if(sum%2==0)
printf("\neven");
else
printf("\nodd");
}
