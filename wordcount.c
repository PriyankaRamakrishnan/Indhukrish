#include<stdio.h>
void main()
{
  char a[1000];
  int count;
  printf("\nEnter any text or sentenses :");
  gets(a);
  for(char i=0;i!='\o';i++)
  {
    if(a[i]==' ')
    count++;
  }
  printf("\nNo.of words present in the text is : %d",count+1);
}
