#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char apodo[20];
  int rango;
  float vida;
  float escudo;
  float sales;

  struct {
    char nombre[20];
    char apellido[20];
    int edad;
  } info_personal;
  
}personaje_t;


int main(void)
{
  personaje_t personaje, *pPersonaje;
  pPersonaje = &personaje;
  
  printf("----------Cargar los elementos diréctamente----------\n");
  printf("Ingrese su apodo: ");
  scanf("%s", personaje.apodo);

  printf("Ingrese su nombre: ");
  scanf("%s", personaje.info_personal.nombre);

  printf("Ingrese su apellido: ");
  scanf("%s", personaje.info_personal.apellido);

  printf("Ingrese su edad: ");
  scanf("%d", &personaje.info_personal.edad);

  personaje.rango = rand() % 100 + 1;

  personaje.vida = 150.0;
  personaje.escudo = 0.;
  personaje.sales = 0.;

  printf("----------Datos----------\n");
  printf("El apodo es: %s\n", personaje.apodo);
  printf("Rango: %d\n", personaje.rango);
  printf("Vida: %f\n", personaje.vida);
  printf("Escudo %f\n", personaje.escudo);
  printf("Sales: %f\n", personaje.sales);
  printf("El nombre es: %s\n", personaje.info_personal.nombre);
  printf("El apellido es: %s\n", personaje.info_personal.apellido);
  printf("----------Cargar los elementos mediante puntero----------\n");

  printf("Ingrese su apodo: ");
  scanf("%s", pPersonaje->apodo);

  printf("Ingrese su nombre: ");
  scanf("%s", pPersonaje->info_personal.nombre);

  printf("Ingrese su apellido: ");
  scanf("%s", pPersonaje->info_personal.apellido);

  printf("Ingrese su edad: ");
  scanf("%d", &(pPersonaje->info_personal).edad);

  personaje.rango = rand() % 100 + 1;

  personaje.vida = 150.0;
  personaje.escudo = 0.;
  personaje.sales = 0.;

  printf("----------Datos----------\n");
  printf("El apodo es: %s\n", personaje.apodo);
  printf("Rango: %d\n", personaje.rango);
  printf("Vida: %f\n", personaje.vida);
  printf("Escudo %f\n", personaje.escudo);
  printf("Sales: %f\n", personaje.sales);
  printf("El nombre es: %s\n", personaje.info_personal.nombre);
  printf("El apellido es: %s\n", personaje.info_personal.apellido);
  return 0;
}
