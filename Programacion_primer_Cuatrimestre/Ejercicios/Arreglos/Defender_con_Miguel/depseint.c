#include <stdlib.h>

#include <stdio.h>

#include <string.h>


void main() {
  int cantid, canttradi, cantvega, cantsintatra, cantsintave;
  printf("Ingrese la cantidad de invitados: \n");
  do {
    scanf("%d", & cantid);

    if (cantid < 1) {
      printf("Error! La cantidad ingresada no es valida\nIngrese un numero positivo\n");
    }

  } while (cantid < 1);
  char array[cantid][3][50];
  for (int i = 0; i < cantid; i++) {
    
    for (int j = 0; j < 3; j++) {
      
      switch (j)

      {
      case 0:
        printf("Ingrese el nombre del invitado:\n");
        scanf("%s", & array[i][j]);
        break;

      case 1:
        do {
          printf("Seleccione el menu:\n1- Tradicional 2- Vegano\n");
          scanf("%s", &array[i][j]);
        } while (atoi(array[i][j]) != 1 && atoi(array[i][j]) != 2);
        break;
      case 2:
        do {
          printf("Es SIN TACC? (S-N)");
          scanf("%s", & array[i][j]);
        } while (strupr(array[i][j]) == "S" || strupr(array[i][j]) == "N");
        break;
    
        default:
        printf("error");
        break;
      }
      
    
    }

  }
  canttradi = 0;
  cantvega = 0;
  cantsintatra = 0;
  cantsintave = 0;
  for (int i = 0; i < cantid; i++) {
    for (int j = 0; j < 2; j++) {
      switch (j) {
      case 0:
        printf("");
        printf("Nombre: %s\n", array[i][j]);
        break;
      case 1:
        printf("Menu: ");
        if (atoi(array[i][j]) == 1) {
          if (toupper(array[i][j + 1][0]) == 'S') {
            printf("Tradicional SIN TACC\n");
            canttradi++;
            cantsintatra++;
          } else {
            printf("Tradicional\n");
            canttradi++;
          }
        } else {
          if (toupper(array[i][j + 1][0] == 'S')) {
            printf("Vegano SIN TACC\n");
            cantvega++;
            cantsintave++;
          } else {
            printf("Vegano\n");
            cantvega++;
          }

        }
        break;
      }

    }

    }
    printf("SEGUN FORMA DE CALCULO\n");
    printf("CANTIDAD DE MENU TRADICIONAL SIN TACC: %d\n", cantsintatra);
    printf("CANTIDAD DE MENU TRADICIONAL: %d\n", canttradi - cantsintatra);
    printf("CANTIDAD DE MENU VEGANO SIN TACC: %d\n", cantsintave);
    printf("CANTIDAD DE MENU VEGANO: %d\n", cantvega - cantsintave);

  

}