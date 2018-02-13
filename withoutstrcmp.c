#include<stdio.h>
#include<string.h>
void main()
{
  char a[100],b[100];
  int i,j,t=0;
  printf("\nEnter any two string");
  scanf("%s%s",&a,&b);
  for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++)
  {
    if(a[i]==b[j])
    t=1;
    else
    t=0;
  }
 if(t==1)
{
 printf("\n%s",a);
 if(strlen(a)>strlen(b))
  printf("\n%s",a);
  else
  printf("\n%s",b);
}
 else
 {
 if(strlen(a)>strlen(b))
  printf("\n%s",a);
  else
  printf("\n%s",b);
 }
}
