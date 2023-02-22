#include <stdio.h>

int main(void)
{
  char letra;


  printf("Ingrese el caracter: ");
  scanf("%c", &letra);

  if (letra > '0' && letra < '9') 
    printf("El caracter ingresado es un número\n");
  else
    printf("El caracter ingresado no es un número\n");

  return 0;
}
