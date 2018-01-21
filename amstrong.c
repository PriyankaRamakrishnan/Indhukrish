#include <stdio.h>
#include <math.h>
 
void main()
{
int n, sum = 0, r= 0, cube = 0, temp;
 
printf ("enter a number");
scanf("%d", &n);
temp = n;
while (n != 0)
{
        r = n % 10;
        cube = pow(r, 3);
        sum = sum + cube;
        n = n / 10;
}
    if (sum == temp)
        printf ("The given num %d is armstrong num",temp);
    else
        printf ("The given num %d is not a armstrong num",temp);
}
