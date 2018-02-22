#include<stdio.h>
void main()
{
 int N,a[100],mid,i;
 printf("\nEnter N value :");
 scanf("%d",&N);
 for(i=1;i<=N;i++)
 scanf("%d",&a[i]);
 mid=N/2;
 if(N%2!=0)
 mid=mid+1;
 printf("%d",a[mid]);
}
