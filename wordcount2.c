#include<stdio.h>
void main()
{
char a[1000];
int i,count=0;
printf("\nenter the sentence :");
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
count++;
}
printf("%d",count+1);
}
