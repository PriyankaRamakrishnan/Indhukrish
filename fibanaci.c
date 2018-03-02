#include<stdio.h>
void main()
{
int n,n1=1,n2=1,fib,i;
  printf("\nEnter a limit for fibanacci series :");
  scanf("%d",&n);
  printf("\nFibanaci series is :");
  for(i=0;i<n;i++)
  {
    printf("%d",n1);
    fib=n1+n2;
    n1=n2;
    n2=fib;
  }
}
