#include <stdio.h>


int main(void)
{
  int pb, sb, tb, tol;
  int valor_nominal;
  float valor_real;
  char color_pb, color_sb, color_tb, color_cb;
  int color_no_valido = 0;

  do {
    color_no_valido = 0;
    printf("Color primera banda: ");
    scanf(" %c", &color_pb);
    switch(color_pb)
    {
    case 'M': pb = 1; break;
    case 'R': pb = 2; break;
    case 'J': pb = 3; break;
    case 'A': pb = 4; break;
    case 'V': pb = 5; break;
    case 'Z': pb = 6; break;
    case 'L': pb = 7; break;
    case 'G': pb = 8; break;
    case 'B': pb = 9; break;
    default : printf("Color de primera banda no válido\n"); 
      color_no_valido = 1;
      break;
    }
  } while (color_no_valido);

  do {
    color_no_valido = 0;
    printf("Color segunda banda: ");
    scanf(" %c", &color_sb);
    switch(color_sb)
    {
    case 'N': sb = 0; break;
    case 'M': sb = 1; break;
    case 'R': sb = 2; break;
    case 'J': sb = 3; break;
    case 'A': sb = 4; break;
    case 'V': sb = 5; break;
    case 'Z': sb = 6; break;
    case 'L': sb = 7; break;
    case 'G': sb = 8; break;
    case 'B': sb = 9; break;
    default : printf("Color de segunda banda no válido\n");
        color_no_valido = 1;
        break;
      }
  } while (color_no_valido);


  do{
    color_no_valido = 0;
    printf("Color tercera banda: ");
    scanf(" %c", &color_tb);

    switch(color_tb)
    {
    case 'N': tb = 0; break;
    case 'M': tb = 1; break;
    case 'R': tb = 100; break;
    case 'J': tb = 1000; break;
    case 'A': tb = 10000; break;
    case 'V': tb = 100000; break;
    case 'Z': tb = 1000000; break;
    case 'L': tb = 10000000; break;
    case 'G': tb = 100000000; break;
    case 'B': tb = 1000000000; break;
    default : printf("Color de tercera banda no válido\n");
        color_no_valido = 1;
        break;
    }
  } while (color_no_valido);

  do {
    color_no_valido = 0;
    printf("Color cuarta banda: ");
    scanf(" %c", &color_cb);
    switch(color_cb)
    {
    case 'D': tol = 5; break;
    case 'P': tol = 10; break;
    case 'R': tol = 2; break;
    case 'M': tol = 1; break;
    default: printf("El color de la cuarta banda no es válido\n");
        color_no_valido = 1;
        break;
    }
  } while (color_no_valido);

  printf("Valor medido(en ohms): ");
  scanf("%f", &valor_real);

  /** printf("%d-%d-%d\n", pb, sb, tb); */
  /** printf("Valor nominal: %d\n", valor_nominal); */

  if (sb == 0) 
    valor_nominal = pb*10*tb;
  else 
    valor_nominal = (pb*10+sb)*tb;

  if (valor_real < (valor_nominal * (1 + tol / 100.0)) && valor_real > (valor_nominal * (1 - tol / 100.0)))
    printf("El valor se encuentra dentro de la tolerancia\n");
  else
    printf("El valor se encuentra fuera de la tolerancia\n");


  return 0;
}   
