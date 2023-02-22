#include <stdio.h>

int main(void)
{
  int n1, n2, r1;
  float prom;

  /** Ingreso las notas de los parciales */
  printf("Ingrese la primera nota: ");
  scanf("%d", &n1);
  printf("Ingrese la segunda nota: ");
  scanf("%d", &n2);

  /** Determino si tiene que recursar */
  if (n1<6) 
  {
    printf("Ingrese la nota del recupeartorio: ");
    scanf("%d", &r1);
  }
  if (n2<6) 
  {
    printf("Ingrese la nota del recupeartorio: ");
    scanf("%d", &r1);
  }

  /** Calculo el promedio */
  if (n1<6) 
  {
    prom = (n1 + n2 + r1)/3.0;
  }
  else if (n2<6) 
  {
    prom = (n1 + n2 + r1)/3.0;
  }
  else  
  {
    prom = (n1 + n2)/2.0;
  }
  
  /** Imprimo el estado académico */
  if (prom < 6) 
  {
    printf("Desaprobado\n");
  }
  else 
  {
    if (prom >= 8) 
      printf("Promocionado\n");
    else 
      printf("Aprobado\n");
  }

  return 0;
}   
