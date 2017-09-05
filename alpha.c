#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char in;
printf("\nEnter any characters");
scanf("%c",&in);
if((in>='a'&&in<='z')||(in>='A'&&in<='Z'))
printf("\nIt is a alphabat");
else
printf("\nIt is not a alphabat");
getch();
}
