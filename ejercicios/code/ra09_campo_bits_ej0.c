#include <stdio.h>
#include <stdint.h> // Para uint32_t

/*
 * =================================================================
 * DEFINICIONES (Completas)
 * =================================================================
 */

// 1. Enumeración de Tipo de Mensaje
typedef enum {
    REPORTE_TEMP    = 0, // 00
    REPORTE_ESTADO  = 1, // 01
    ALERTA          = 2, // 10
    RESERVADO       = 3  // 11
} TipoMensaje;

// 2. Estructuras de Campos de Bits para cada tipo
// (Asumimos Little Endian, los bits menos significativos primero)

struct TramaTemp {
    unsigned int tipo          : 2; // Bits 0-1
    unsigned int id_sensor     : 8; // Bits 2-9
    unsigned int temperatura   : 10; // Bits 10-19
    unsigned int humedad       : 7; // Bits 20-26
    unsigned int _relleno      : 5; // Bits 27-31
};

struct TramaEstado {
    unsigned int tipo          : 2; // Bits 0-1
    unsigned int id_actuador   : 8; // Bits 2-9
    unsigned int estado        : 1; // Bit 10
    unsigned int potencia_actual : 5; // Bits 11-15
    unsigned int _relleno      : 16; // Bits 16-31
};

struct TramaAlerta {
    unsigned int tipo              : 2; // Bits 0-1
    unsigned int codigo_error      : 16; // Bits 2-17
    unsigned int timestamp_relativo: 14; // Bits 18-31
};

// Estructura genérica solo para leer el tipo
struct TramaGenerica {
    unsigned int tipo : 2;
    // ... no nos importa el resto
};

// 3. Unión principal
typedef union {
    uint32_t raw_data;
    struct TramaGenerica generica;
    struct TramaTemp     temp;
    struct TramaEstado   estado;
    struct TramaAlerta   alerta;
} TramaIoT;


/*
 * =================================================================
 * PROTOTIPOS DE FUNCIONES
 * =================================================================
 */

/**
 * @brief Procesa e imprime los datos de una trama IoT.
 * @param trama La unión TramaIoT que contiene los datos.
 */
void procesarTrama(TramaIoT trama);

/*
 * =================================================================
 * FUNCIÓN PRINCIPAL (Completa)
 * =================================================================
 */

int main() {
    TramaIoT miTrama;

    // --- Prueba 1 ---
    // Valor de simulación: 0x1A4C8401
    // Binario (LSB...MSB): 00000001 10000100 01001100 00011010
    miTrama.raw_data = 0x1A4C8401; 
    
    printf("Procesando Trama 1 (0x%X)...\n", miTrama.raw_data);
    procesarTrama(miTrama);

    printf("\n");

    // --- Prueba 2 ---
    // Valor de simulación: 0x00A2000A
    // Binario (LSB...MSB): 00001010 00000000 10100010 00000000
    miTrama.raw_data = 0x00A2000A;

    printf("Procesando Trama 2 (0x%X)...\n", miTrama.raw_data);
    procesarTrama(miTrama);
    
    return 0;
}

/*
 * =================================================================
 * IMPLEMENTACIÓN DE FUNCIONES (Para completar)
 * =================================================================
 */

void procesarTrama(TramaIoT trama) {
    
    // TODO 1: Extraer el tipo de mensaje usando la 'trama.generica.tipo'
    TipoMensaje tipo = (TipoMensaje)trama.generica.tipo;
    
    printf("Tipo de Mensaje: %d\n", tipo);
    
    // TODO 2: Usar un 'switch' basado en la variable 'tipo'
    switch (tipo) {
        
        case REPORTE_TEMP: {
            printf("--- REPORTE DE TEMPERATURA ---\n");
            
            // TODO 3: Leer y imprimir los datos de 'trama.temp'
            // Recordar la fórmula: T_real = (trama.temp.temperatura - 100) / 10.0
            
            // Ejemplo:
            // printf("  ID Sensor: %u\n", ...);
            // printf("  Temperatura: %.1f C\n", ...);
            // printf("  Humedad: %u %%\n", ...);
            
            break;
        }
            
        case REPORTE_ESTADO: {
            printf("--- REPORTE DE ESTADO ---\n");
            
            // TODO 4: Leer y imprimir los datos de 'trama.estado'
            // Imprimir "ENCENDIDO" o "APAGADO" basado en el bit 'estado'.
            
            // Ejemplo:
            // printf("  ID Actuador: %u\n", ...);
            // printf("  Estado: %s\n", (condicion) ? "ENCENDIDO" : "APAGADO");
            // printf("  Potencia: %u\n", ...);
            
            break;
        }
            
        case ALERTA: {
            printf("--- ALERTA ---\n");
            
            // TODO 5: Leer y imprimir los datos de 'trama.alerta'
            
            // Ejemplo:
            // printf("  Codigo de Error: %u\n", ...);
            // printf("  Timestamp (seg): %u\n", ...);
            
            break;
        }

        case RESERVADO:
        default:
            printf("--- TIPO RESERVADO O DESCONOCIDO ---\n");
            break;
    }
}