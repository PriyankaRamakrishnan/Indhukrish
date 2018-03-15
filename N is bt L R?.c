#include<stdio.h>
void main()
{
int N,L,R;
printf("\nEnter the num :");
scanf("%d",&N);
printf("\nEnter the limit L R :");
scanf("%d %d",&L,&R);
if(N>L&&N<R)
printf("\nYes");
else
printf("\nNo");
}
