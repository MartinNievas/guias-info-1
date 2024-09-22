#include <stdio.h>

#define N 10

void validar_positividad ( int * a); 
void validar_no_primo ( int * a);

int main ( void) {

  int arreglo [ N ];

  for (int i = 0; i < N; i++){
    validar_positividad(&arreglo[i]);
  }

  for (int i = 0; i < N; i++){
    validar_no_primo(&arreglo[i]);
  }

  return 0;
}

/*  completar  */
