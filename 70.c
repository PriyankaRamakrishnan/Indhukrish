#include<stdio.h>
void main()
{
int a,i;
printf("\nEnter the num :");
scanf("%d",&a);
 if(a%2==0)
 {
   printf("\nNearest power of 2 :%d",a*2);
 }
 else
 {
 for(i=a+1;i<=1000;i++)
 {
 if(i%2==0)
  printf("\nNearest power of 2 :%d",i*2);
  break;
 }
 }
}
