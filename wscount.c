#include<stdio.h>
void main()
{
  int count=0,i,l;
  char a[1000];
  printf("\ninpput any sentense :");
  gets(a);
  l=strlen(a);
  for(i=0;i<=l;i++)
  {
    if(a[i]==' ')
    count++;
  }
  printf("\nThe no.of whitespaces in the sentenses is :%d",count);
}
