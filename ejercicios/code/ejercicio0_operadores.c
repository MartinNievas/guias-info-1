#include <stdio.h>

int main(void)
{
  int num1, num2, num3;

  printf("Ingrese el primer número: ");
  scanf("%d", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%d", &num2);
  printf("Ingrese el tercer número: ");
  scanf("%d", &num3);

  if (num1 != num2 && num1 != num3) 
    printf("Los números son distintos entre sí\n");
  else
    printf("Los números no son distintos entre sí\n");

  return 0;
}
