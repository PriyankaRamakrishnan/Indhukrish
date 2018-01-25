#include<stdio.h>
void main()
{
  int a[50], N, i, min;
    printf("\n Enter the size of the array: ");
    scanf("%d", &N);
    printf("\n Enter elements of  the array: ");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    min = a[0];
    for (i = 1; i < N; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    printf("\n min element present in the given array is : %d", min);
    return 0;
}
