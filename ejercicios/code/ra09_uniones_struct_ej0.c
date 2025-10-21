#include <stdio.h>
#include <string.h>

// a) Enumeración para el tipo de ID
typedef enum {
    USA_SKU,
    USA_LOTE
} TipoID;

// b) Unión para el identificador
typedef union {
    long sku;
    char lote[20];
} Identificador;

// c) Estructura del Producto
typedef struct {
    char nombre[50];
    TipoID tipo; // La "etiqueta"
    Identificador id; // La "unión"
} Producto;