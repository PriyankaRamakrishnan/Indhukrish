#include<stdio.h>
void main()
{
  int a[50], N, i, largest;
    printf("\n Enter the size of the array: ");
    scanf("%d", &N);
    printf("\n Enter elements of  the array: ");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    largest = a[0];
    for (i = 1; i < N; i++)
    {
        if (largest < a[i])
            largest = a[i];
    }
    printf("\n largest element present in the given array is : %d", largest);
    return 0;
}
