#include<stdio.h>
void main()
{
int N,i,count=0;
printf("\nEnter the num :");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
if(N%i==0)
count++;
}
if(count!=2)
printf("\nThe num %d is composite",N);
else
printf("\nThe nnum %d is not a composite num",N);
}
