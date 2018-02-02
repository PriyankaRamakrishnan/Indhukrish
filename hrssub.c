#include<stdio.h>
void main()
{
int hrs1,mins1,hrs2,mins2,hr1,hr2,tot_mins1,tot_mins2,tot_mins,hr,min;
printf("\nenter the time in hh:mm :");
scanf("%d%d",&hrs1,&mins1);
printf("\nEnter the time in hh:mm :");
scanf("%d%d",&hrs2,&mins2);
hr1=(hrs1*60);
tot_mins1=hr1+mins1;
hr2=(hrs2*60);
tot_mins2=hr2+mins2;
tot_mins=tot_mins1-tot_mins2;
hr=tot_mins/60;
min=tot_mins%60;
printf("%d:%d",hr,min);
}
