#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("enter any year");
scanf("%d",&year);
if(year%4==0)
{
  if(year%100==0)
  {
     if(year%400==0)
      printf("the year %d is a leap year",year);
     else
      printf("the year %d is not a leap year",year);
  } 
  else
    printf("the year %d is leap year",year);
}
else
printf("the year %d is not a leap year",year);
getch();
}
