#include<stdio.h>
#include<conio.h>
void main()
{
int N,A,D,sum=0,val;
printf("\nenter the N value,first num A and differance D:");
scanf("%d%d%d",&N,&A,&D);
val=A;
printf("\nThe AP series is");
for(int i=0;i<N;i++)
{
printf("%d",val);
sum+=val;
val+=D;
}
printf("\n the sum of AP series is:%d",sum);
}
