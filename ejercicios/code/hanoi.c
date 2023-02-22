#include <stdio.h>

void towerOfHanoi(int , char , char , char);
void imprimir(int , char , char);
  
int main() 
{ 
    int n = 4; // Number of disks 
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0; 
} 

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{ 
    if (n == 1) 
    { 
        printf("\n1: %c -> %c\n", from_rod, to_rod); 
        imprimir(n-1, from_rod, to_rod);
        return; 
    } 
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 
    printf("\n%d: %c -> %c\n", n, from_rod, to_rod); 
    imprimir(n-1, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod); 
} 

void imprimir(int num, char desde, char hacia)
{
  static int estado[4][3]={
    {0,-1,-1},
    {1,-1,-1},
    {2,-1,-1},
    {3,-1,-1}};
  int i,j;
  int posx,posy;
  int destino;
  int altura;


  // Busco la posición inicial
  for (i = 0; i < 4; i++)
    for (j = 0; j < 3; j++)
      if (estado[i][j] == num) 
      {
        posy = j;
        posx = i;
      }
  /** printf("found:%d - %d\n", posx,posy); */
  /** printf("found:%d \n", estado[posx][posy]); */

  // Convierto el nombre del palo a número
  /** switch(desde) */
  /** { */
  /** case 'A': origen = 0; break; */
  /** case 'B': origen = 1; break; */
  /** case 'C': origen = 2; break; */
  /** } */

  // Convierto el nombre del palo a número
  switch(hacia)
  {
  case 'A': destino = 0; break;
  case 'B': destino = 1; break;
  case 'C': destino = 2; break;
  }
  
  /** printf("%d %d\n", origen, destino); */
  altura = 0;
  while (estado[altura][destino] == -1 && altura < 4) {
    altura++;
  }
  altura--;
  /** printf("%d %d\n", posy,posx); */
  /** printf("%d %d\n", destino, altura); */

  estado[altura][destino] = estado[posx][posy];
  estado[posx][posy] = -1;

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (estado[i][j] == 0) 
        printf("$   ");
      else if (estado[i][j] == 1) 
        printf("##  ");
      else if (estado[i][j] == 2) 
        printf("$$$ ");
      else if (estado[i][j] == 3) 
        printf("####");
      else
        printf(" |  ");
    }
    printf("\n");
  }
  
}
