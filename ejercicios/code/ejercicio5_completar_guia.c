#include <stdio.h>

int ret_maximo(int a, int b)
{
  int max;

  if (a > b) 
    max = a;
  else
    max = b;

  return max;
}

int main(void)
{
  int num_1, num_2, num_3, num_4;

  printf("Ingrese cuatro números diferentes: ");
  scanf("%d %d %d %d", &num_1,&num_2,&num_3,&num_4);

  /** Completar desde aquí */

  /** Hasta aquí */
  return 0;
}
