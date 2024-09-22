#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ingresar_cantidad_elementos(void);
void inicializar_arreglo(int* arr, int tam);
void contar_positivos(int *arr, int tam, int *cant_positivos);
void contar_negativos(int *arr, int tam, int *cant_negativos);
void copiar_positivos(int *arr, int *positivos, int tam);
void copiar_negativos(int *arr, int *negativos, int tam);
void imprimir_arreglo(int *arr, int tam);

int main(void) {
  int tam;
  int *arreglo = NULL;
  int *positivos = NULL, *negativos = NULL;
  int cant_positivos = 0, cant_negativos = 0;

  srand(time(NULL));  // Inicializar la semilla para los números aleatorios


  // Requisito 1: Solicitar el tamaño del arreglo
  tam = ingresar_cantidad_elementos();


  // Requisito 2: Reservar espacio para un arreglo dinámico
  // --Completar--

  // Requisito 3: Inicializar el arreglo con valores pseudoaleatorios entre -100 y 100
  inicializar_arreglo(arreglo, tam);

  // Contar la cantidad de números positivos y negativos
  contar_positivos(arreglo, tam, &cant_positivos);
  contar_negativos(arreglo, tam, &cant_negativos);

  // Requisito 5: Reservar espacio para los arreglos positivos y negativos
  // --Completar--

  // Requisito 6: Copiar los valores positivos y negativos en los arreglos correspondientes
  copiar_positivos(arreglo, positivos, tam);
  copiar_negativos(arreglo, negativos, tam);

  // Imprimir resultados
  printf("Arreglo original:\n");
  imprimir_arreglo(arreglo, tam);

  printf("\n\nArreglo de números positivos:\n");
  imprimir_arreglo(positivos, tam);

  printf("\n\nArreglo de números negativos:\n");
  imprimir_arreglo(negativos, tam);

  // Liberar la memoria reservada
  // --Completar--

  return 0;
}

