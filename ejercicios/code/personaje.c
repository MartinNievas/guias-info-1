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
