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

  if (num1 == num2 && num2 == num3) 
  {
    printf("Los números ingresados son iguales\n");
  }
  else if (num1 > num2 && num1 > num3) 
  {
    printf("El mayor es el primero\n");
  }
  else if (num2 > num1 && num2 > num3) 
  {
    printf("El mayor es el segundo\n");
  }
  else if (num3 > num2 && num3 > num1) 
  {
    printf("El mayor es el tercero\n");
  }
  return 0;
}
