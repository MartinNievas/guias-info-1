#include <stdio.h>

int main(void)
{
  int num_1, num_2;

  printf("Ingrese el primer número: ");
  scanf("%d", &num_1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num_2);

  if (num_1 > num_2) 
    printf("El mayor es el primero\n");
  else 
    printf("El mayor es el segundo\n");

  return 0;
}
