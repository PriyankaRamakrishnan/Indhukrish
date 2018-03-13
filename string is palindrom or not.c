#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,l,f=0;
printf("\nEnter the string :");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]!=a[l-i-1])
f=1;
}
if(f==1)
printf("\n%s is not a palindrome",a);
else
printf("\n%s is a palindrome",a);
}
