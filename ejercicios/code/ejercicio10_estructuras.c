#include <stdio.h>

struct inventario {
  // Completar
};

void imprimir_inventario(struct inventario item);

int main() {
    struct inventario item1 = {"Resistor 10kΩ", 1234, 0.15, 250};

    imprimir_inventario(item1);

    return 0;
}
