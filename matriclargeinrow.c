#include <stdio.h>
void main()
{
 int a[10][10],i,j,max,r,c;
 printf("Priyanka R");
 printf("\n922515104067");
 printf("\nenter the row and column");
 scanf("%d%d",&r,&c);
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
      scanf("%d",&a[i][j]);
   }
 }
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     printf("\t");
      printf("%d",a[i][j]);
   }
 
  printf("\n");
 }
  max=a[0][0];
  for(i=0;i<r;i++)
  {
 for(j=0;j<c;j++)
{
  if(max<a[i][j])
  {
    max=a[i][j];
  }
}  
 printf("\nMax value :%d",max);
}
}
