#include <stdio.h>

int main(void)
{
  int min;
  float costo;

  printf("Ingrese los minutos de la llamada: ");
  scanf("%d", &min);

  if (min > 3) 
  {
    costo = 1.5 + (min - 3) * 0.2;
  }
  else 
  {
    costo = min * 0.5;
  }

  printf("El costo de la llamada es: %.3f", costo);

  return 0;
}
