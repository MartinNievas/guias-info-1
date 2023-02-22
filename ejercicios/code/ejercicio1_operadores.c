#include <stdio.h>

int main(void)
{
  int num;

  printf("Ingrese un número: ");
  scanf("%d", &num);

  if (num >= 10 && num <= 100) 
  {
    if (num%2 == 0) 
      printf("El número %d es par\n", num);
    else 
      printf("El número %d no es par\n", num);
  }
  else
    printf("El número ingresado no está dentro del rango\n");

  return 0;
}
