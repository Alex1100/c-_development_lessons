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

  return 0;
}
