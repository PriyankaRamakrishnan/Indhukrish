#include<stdio.h>
#include<string.h>
void main()
{
  char a[100],b[100],c[100];
  int i,j,k,t=0;
  printf("\nEnter any two string");
  scanf("%s%s",&a,&b);
  while(a[i]!='\0')
  i++;
  while(b[j]!='\0')
  {
   a[i]=b[j];
  j++;
  i++;
  }
  printf("\n%s",a);
}
