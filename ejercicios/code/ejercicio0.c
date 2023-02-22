#include <stdio.h>

int main(void)
{
  int num;

  printf("Ingrese un número entero: ");
  scanf("%d", &num);
    
  if (num % 5 == 0) 
  {
    printf("El número %d es múltiplo de 5\n", num);
  }
  else 
  {
    printf("El número %d no es múltiplo de 5\n", num);
  }
  return 0;
}
