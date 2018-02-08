#include<stdio.h>
void main()
{
  int i,num[10],largenum;
  for(i=0;i<=9;i++)
  {
  printf("\nEnter any 10 num :");
  scanf("%d",&num[i]);
}
largenum=num[0];
for(i=1;i<=9;i++)
{
  if(largenum<num[i])
  largenum=num[i];
}
  printf("\nmaximum among ten num :%d",num[i]);
  
}
