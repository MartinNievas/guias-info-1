#include <stdio.h>

#define N 10

void swap( int * a , int * b);
void ordenar_burbuja( int * a, int tam, int dir);
void inicializar( int * a, int tam);
void imprimir_arreglo( int * a, int tam);

int main ( void) {

  int arreglo [N];
  inicializar(arreglo);

  ordenar_burbuja(arreglo, N, 0);
  imprimir_arreglo(arreglo, N);

  ordenar_burbuja(arreglo, N, 1);
  imprimir_arreglo(arreglo, N);

  return 0;
}

/*  completar  */
