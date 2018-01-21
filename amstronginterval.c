#include <stdio.h>
#include <math.h>
 
void main()
{
int in1,in2, sum = 0, r= 0, cube = 0, temp;
 
printf ("enter a intervals");
scanf("%d%d", &in1,&in2);
for(i=in1;i<=in2;i++)
{
temp = i;
while (i != 0)
{
        r = i % 10;
        cube= pow(r, 3);
        sum  sum + cube;
        i = i / 10;
}
    if (sum == temp)
        printf ("The given num %d is armstrong num",temp);
    else
        printf ("The given num %d is not a armstrong num",temp);
}
}
