#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void inicializar_arreglo(int *arr, int tam);
void contar_positivos(int *arr, int tam, int *cant_positivos);
void contar_negativos(int *arr, int tam, int *cant_negativos);
void copiar_positivos(int *arr, int *positivos, int tam);
void copiar_negativos(int *arr, int *negativos, int tam);
void imprimir_arreglo(int *arr, int tam);

int main(void) {
  int arreglo[N] = {0};
  int positivos[N] = {0}, negativos[N] = {0};
  int cant_positivos = 0, cant_negativos = 0;

  srand(time(NULL));  // Inicializar semilla para números aleatorios

  // Inicializar arreglo con valores pseudoaleatorios entre -300 y 500
  inicializar_arreglo(arreglo, N);

  // Contar positivos y negativos
  contar_positivos(arreglo, N, &cant_positivos);
  printf("\n\nCantidad de números positivos: %d\n", cant_positivos);

  contar_negativos(arreglo, N, &cant_negativos);
  printf("\n\nCantidad de números negativos: %d\n", cant_negativos);

  // Copiar positivos y negativos a sus respectivos arreglos
  copiar_positivos(arreglo, positivos, N);
  copiar_negativos(arreglo, negativos, N);

  // Imprimir resultados
  printf("Arreglo original:\n");
  imprimir_arreglo(arreglo, N);

  printf("Arreglo de números positivos:\n");
  // Completar

  printf("Arreglo de números negativos:\n");
  // Completar

  return 0;
}
