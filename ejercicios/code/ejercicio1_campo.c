#include <stdio.h>
#define CANT 100

typedef struct {
  int palo : 4;  // basto, copa, espada, oro
  int num : 12;
}cartasBit_t;

/* Función que recibe un puntero a un mazo de cartas
 * y lo inicializa con valores aleatorios
 * Datos:
 *  *mazo: Puntero a un arreglo de tipo cartasBit_t
 *  cant: La cantidad de cartas en el mazo
 * */
void crear_baraja(cartasBit_t *mazo, int cant);

/* Función que recibe un puntero a un mazo de cartas
 * e imprime dos columnas corerspondientes a las cartas
 * de cada uno de los dos jugadores.
 * Datos:
 *  *mazo: Puntero a un arreglo de tipo cartasBit_t
 *  cant: La cantidad de cartas en el mazo
 * */
void repartir_baraja(cartasBit_t *mazo, int cant);


int main(void)
{
  cartasBit_t cartas[CANT];

  /** Completar... */
  
  
  return 0;
}
