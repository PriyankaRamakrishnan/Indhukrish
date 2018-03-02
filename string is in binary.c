#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,l,count=0;
printf("\nEnter the string :");
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='0'||a[i]=='1')
count++;
else
count=0;
}
if(count==l)
printf("yes");
else
printf("no");
}
