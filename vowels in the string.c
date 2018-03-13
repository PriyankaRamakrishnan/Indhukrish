#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int c=0,i,len;
printf("\nEnter :");
scanf("%s",&a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
c++;
}
if(c>=1)
printf("yes");
else
printf("no");
}
