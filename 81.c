#include<stdio.h>
void main()
{
int n,i,kabali_ninja,opponent_ninja,difference;
printf("\nenter the no of ninjas :");
for(i=0;i<3;i++)
{
scanf("%d %d",&kabali_ninja,&opponent_ninja);
difference=kabali_ninja-opponent_ninja;
printf("\n%d",difference);
}
}
