#include<stdio.h>
#include<conio.h>
void main()
{
int count=0,n;
printf("\nEnter the num");
  scanf("%d",&n);
  while(n!=0)
  {
    n=n/10;
    ++count;
  }
  printf("\ncount %d",count);
  getch();
}
