#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int l,n,i;
printf("Enter the string and length to print :");
scanf("%s %d",&a,&n);
l=strlen(a);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
}
