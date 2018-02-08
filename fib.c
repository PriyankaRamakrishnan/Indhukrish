#include<stdio.h>
void main()
{
  int N,a=0,b=1,fib;
  printf("\nenter any num :");
  scanf("%d",&N);
  printf("\nFibonacci series :");
  for(int i=0;i<=N;i++)
  {
    printf("%d, ",a);
    fib=a+b;
    a=b;
    b=fib;
  }
}
