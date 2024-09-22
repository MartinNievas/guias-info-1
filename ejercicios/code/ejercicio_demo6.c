#include <stdio.h>

// Declaración de las funciones de operaciones
int ingresar_opcion(void);
float suma(float a, float b);
float resta(float a, float b);
float division(float a, float b);
float multiplicacion(float a, float b);

// Función para operar que recibe el puntero a la función de la operación
float operar(float (*operacion)(float, float), float a, float b);

int main(void) {
  int opcion;
  float num1, num2, resultado;

  // Punteros a las funciones de las operaciones
  float (*operaciones[4])(float, float) = {suma, resta, division, multiplicacion};

  // Requisito 1: Presentar el menú
  opcion = ingresar_opcion();

  // Requisito2: Solicitar los dos números al usuario
  printf("Ingrese el primer número: ");
  scanf("%f", &num1);
  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);


  // Requisito 3: Llamar a la función operar y pasar la operación seleccionada
  resultado = operar(operaciones[opcion - 1], num1, num2);

  // Requisito 4: Imprimir el resultado
  printf("El resultado de la operación es: %.2f\n", resultado);

  return 0;
}

