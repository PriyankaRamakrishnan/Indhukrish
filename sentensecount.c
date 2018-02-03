#include<stdio.h>
void main()
{
  char a[1000];
  int count,i,ws;
  printf("\nEnter the sentense :");
  gets(a);
  count=strlen(a);
  for(i=0;i!=count;i++)
  {
    if(!isspace(a[i]))
    ws++;
  }
  printf("\nThe count is : %d",ws);
}
