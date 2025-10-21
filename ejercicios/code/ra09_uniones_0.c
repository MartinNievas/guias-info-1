#include <stdio.h>
#include <stdlib.h> // Para time() y srand()
#include <time.h>   // Para time()

// a) Enumeración para el tipo de lectura
typedef enum {
    TIPO_TEMPERATURA, // 0
    TIPO_PRESION,     // 1
    TIPO_ESTADO       // 2
} TipoLectura;

// b) Unión para almacenar el valor
typedef union {
    float temperatura; // en Celsius
    int presion_kpa;   // en KiloPascales
    long codigo_error;  // Código numérico
} ValorLectura;

// c) Estructura principal que combina el tipo y el valor
typedef struct {
    long timestamp;     // Marca de tiempo (ej: segundos desde epoch)
    TipoLectura tipo;   // Qué tipo de dato se almacena
    ValorLectura valor; // El dato en sí
} SensorLectura;
