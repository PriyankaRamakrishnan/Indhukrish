#include <stdio.h>
#include<conio.h>
void main()
{
    int in1,in2, i, flag = 0,j;

    printf("Enter a intervals: ");
    scanf("%d%d",&in1,&in2);
    for(j=in1;j<=in2;j++)
{
    for(i=2; i<=j/2; i++)
 {
        if(j%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",j);
    else
        printf("%d is not a prime number.",j);
    
   getch();
}
