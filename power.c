#include <stdio.h>
 
int main()
{
    int num;
    int temp,f;
     
    printf("Enter an integer number: ");
    scanf("%d",&num);
     temp=num;
    f=0;
    while(temp!=1)
    {
        if(temp%2!=0){
            f=1;
            break;
        }
        temp=temp/2;
    }
  
    if(f==0)
        printf("%d is a power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
      
    return 0;
}
