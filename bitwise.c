#include<stdio.h>
void main()
{
 int num1,num2;
 printf("\nEnter any 2 num :");
 scanf("%d%d",&num1,&num2);
 num1=num1^num2;
 num2=num1^num2;
 num1=num1^num2;
 printf("\n%d %d",num1,num2);
  
}
