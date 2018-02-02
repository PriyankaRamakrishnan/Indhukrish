#include<stdio.h>
#define max_size 100
void main()
{
int a[max_size],size,i;
printf("\nEnter the array size :");
scanf("%d",&size);
for(i=0;i<=size;i++)
{
printf("\nEnter the array values :");
scanf("%d",&a[i]);
}
for(i=0;i<=size;i++)
{
printf("\nThe array values :%d index value %d",a[i],i);
}
}
