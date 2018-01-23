#include<stdio.h>
void main()
{
int a[100],n,i,largevalue;
printf(""\nenter a N limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("\n%d",a[i]);
for(i=1;i<=n;i++)
scanf("%d",&a[1]);
largevalue=a[1];
for(i=2;i<=n;i++)
{
if(largevalue < a[i])
largevalue=a[i];
}
}
