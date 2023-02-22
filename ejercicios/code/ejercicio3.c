#include <stdio.h>

int main(void)
{
  int temp_amb;
  int temp_enc;

  printf("Ingrese la temperatura de encendido: ");
  scanf("%d", &temp_enc);
  printf("Ingrese la temperatura ambiente: ");
  scanf("%d", &temp_amb);

  if (temp_amb > temp_enc) 
    printf("Ventilador encendido\n");
  else 
    printf("Ventilador apagado\n");

  return 0;
}
