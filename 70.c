#include<stdio.h>
void main()
{
int a;
printf("\nEnter the num :");
scanf("%d",&a);
for(i=a+1;i<=a+3;i++)
{
if(i%2==0)
printf("\n Nearest greater power of 2 for given number %d : %d",a,i);
}
}
#include <stdio.h>
 
int main()
{
    int num;
    int tempNum,flag;
     
    printf("Enter an integer number: ");
    scanf("%d",&num);
     
    tempNum=num;
    flag=0;
    /*check power of two*/
    while(tempNum!=1)
    {
        if(tempNum%2!=0){
            flag=1;
            break;
        }
        tempNum=tempNum/2;
    }
  
    if(flag==0)
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
      
    return 0;
}
