#include <stdio.h>

// a) Enumeración para describir el orden de bytes (Endianness)
typedef enum {
    ORDEN_DESCONOCIDO,
    LITTLE_ENDIAN, // El byte MENOS significativo se almacena primero
    BIG_ENDIAN     // El byte MÁS significativo se almacena primero
} Endianness;

// b) Unión para inspeccionar un entero
// Asumimos que unsigned int ocupa 4 bytes
typedef union {
    unsigned int valorInt;
    unsigned char bytes[4];
} InspectorBytes;