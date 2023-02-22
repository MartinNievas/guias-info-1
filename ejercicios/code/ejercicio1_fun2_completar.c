#include <stdio.h>

#define TAM 500 

int main(void)
{
  int i, n;
  int arreglo[TAM];

  printf("Ingrese la cantidad de elementos: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Ingrese el elemento [%d]: ", i);
    scanf("%d", &arreglo[i]);
  }

  for (i = 0; i < n; i++)
    printf("%d\n", arreglo[i]);

  return 0;
}
