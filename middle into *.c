#include<stdio.h>
#include<string.h>
void main()
{
int l,i,mid;
char a[100],s='*';
printf("\nenter something :");
scanf("%s",&a);
l=strlen(a);
if(l%2==0)
{ 
mid=l/2;
for(i=0;i<l;i++)
{
if(i<mid-1)
printf("%c",a[i]);
else if(i==mid-1||i==mid)
printf("%c",s);
else 
printf("%c",a[i]);
}
}
else
{
mid=l/2;
for(i=0;i<l;i++)
{
if(i<mid)
printf("%c",a[i]);
else if(i==mid)
printf("%c",s);
else 
printf("%c",a[i]);
}
}
}
