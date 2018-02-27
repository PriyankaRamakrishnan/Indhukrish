#include<stdio.h>
void main()
{
int N,i;
printf("\nenter the num :");
scanf("%d",&N);
for(i=N-1;i>=N-2;i--)
{
 if(i%2==0)
 printf("%d",i);
}
}
