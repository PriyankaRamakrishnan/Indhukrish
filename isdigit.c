#include<stdio.h>
#include<ctype>
void main()
{
char a;
printf("\nEnter any sting :");
scanf("%s",&a);
if(isdigit(a)==1)
printf("\nYes the given string is numeric");
else
printf("\nNo the given string is not numeric");
}
