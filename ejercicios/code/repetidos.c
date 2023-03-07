#include <stdio.h>
#define N 10

void eliminar_repetidos(int *a, int tam);

int main(void) {

  int arreglo[N] = {2,31,3,4,41,12,3,2,42,12};

  eliminar_repetidos(arreglo, N);

  return 0;
}
