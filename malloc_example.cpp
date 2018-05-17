#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *arr1, z, k;
  printf("Enter the size of an array ");
  scanf("%d", &z);
  arr1 = (int*) malloc(sizeof(int) * z);
  for (k = 0; k < z; ++k)
  {
    printf("arr1[%d] = ", k);
    scanf("%d", &arr1[k]);
  }
  printf("\n\n-------- Output --------\n\n");
  for(k = 0; k < z; ++k)
  {
    printf("arr1[%d] = %d\n", k, *(arr1 + k));
  }

  arr1 = (int*) realloc(arr1, sizeof(int) * 10);
  printf("\n__________________\n\n");

  for (int a = z; a < (z + 10); ++a)
  {
    printf("arr1[%d] = ", a);
    scanf("%d", &arr1[a]);
  }

  printf("\n_____________\n\n");

  for (int x = 0; x < z + 10; ++x)
  {
    printf("\n%d\t", *(arr1 + x));
  }

  printf("\n");
  return 0;
}
