#include<stdio.h>
void main()
{
int a[100],n,i,largevalue;
printf(""\nenter a N limit");
scanf("%d",&n);
for(a[i]=1;a[i]<=n;a[i]++)
printf("\n%d",a[i]);
for(a[i]=1;a[i]<=n;a[i]++)
scanf("%d",&a[1]);
largevalue=a[1];
for(a[i]=2;a[i]<=n;a[i]++)
{
if(largevalue < a[i])
largevalue=a[i];
}
}
