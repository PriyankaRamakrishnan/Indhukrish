#include<stdio.h>
void main()
{
 int num1,num2,ten1,ten2,one1,one2;
 printf("\nEnter any 2 num :");
 scanf("%d%d",&num1,&num2);
 one1=num1%10;
 one2=num2%10;
 ten1=num1/10;
 ten2=num2/10;
 num1=(one1*10)+ten1;
 num2=(one2*10)+ten2;
 printf("\n%d %d",num1,num2);
  
}
