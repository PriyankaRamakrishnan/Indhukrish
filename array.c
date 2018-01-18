#include<stdio.h>
#include<conio.h>
void main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int sum=0,i,N,K;
printf("\nenter the value of N:");
scanf("%d",&N);
printf("\nenter the value of K:");
scanf("%d",&K);
for(i=0;i<=N;i++)
{
printf("%d",a[i]);
}
for(i=0;i<=K;i++)
{
sum=sum+a[i];
}
printf("\n%d",sum);
getch();
}
