#include <stdio.h>

#define N 10

void ingresar_y_verificar_elementos(int *a, int tam);
void convertir_a_par(int *a, int tam);
int copiar_negativos(int *arr, int *negativos, int tam);

int main(void) {
  int arreglo[N] = {0};
  int negativos[N] = {0};
  int cant_negativos = 0;

  // Ingreso de valores
  ingresar_y_verificar_elementos(arreglo, N);

  // Convierte impares a pares
  convertir_a_par(&arreglo[i], N);

  // Copiar negativos a otro arreglo
  cant_negativos = copiar_negativos(arreglo, negativos, N);

  printf("\nArreglo modificado (impares convertidos a pares):\n");
  for (int i = 0; i < N; i++) {
    printf("%d ", arreglo[i]);
  }

  printf("\n\nArreglo de negativos:\n");
  for (int i = 0; i < cant_negativos; i++) {
    printf("%d ", negativos[i]);
  }

  return 0;
}
