#include<stdio.h>
void main()
{
  int N,a[100],i,low,big,temp;
  printf("\nEnter N value :");
  scanf("%d",&N);
  for(i=0;i<=N;i++)
  {
   scanf("%d",&a[i]);
  }
low=a[0];
for(i=0;i<=N;i++)
{
 if(low>a[i])
 low=a[i];
}
printf("lowest num :%d",low);
big=a[0];
for(i=0;i<=N;i++)
{
 if(big<a[i])
 big=a[i];
}
printf("biggest num :%d",big);
}
