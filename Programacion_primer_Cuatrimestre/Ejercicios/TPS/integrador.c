#include <stdlib.h>

#include <stdio.h>

#include <string.h>

void main() {
  char empleados[40][4][50];
  char legajo[50], nombre[50], horas[50], categoria[50];
  int seleccion, trabajada;
  int seleccion2;
  char categ[50];

  do {

    printf("Ingrese una opcion\n");
    printf("1- Cargar empleados\n2- Mostrar empleados\n3- Mostrar sueldo del empleado\n4- Modificar la categoria del empleado\n5- Salir\n");
    scanf("%d", &seleccion);
    switch (seleccion) {
    case 1: //cargar empleado
      for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 4; j++) {
          switch (j) //carga cada columna del empleado
          {
          case 0:
            do {
              printf("Ingrese El nro de legajo\n");
              scanf("%s", &legajo);
              if (atoi(legajo) < 10000 || atoi(legajo) > 99999) {
                printf("El numero de legajo es incorrecto\n");
              } else {
                strcpy(empleados[i][j], legajo);
              }

            } while (atoi(legajo) < 10000 || atoi(legajo) > 99999);

            break;
          case 1:
            printf("Ingresa El nombre del empleado\n");
            scanf("%s", &nombre);
            strcpy(empleados[i][j], nombre);

            break;
          case 2:
            do {
              printf("Ingrese cantidad de horas trabajas\n");
              scanf("%s", &horas);
              if (horas < 0) {
                printf("Error! Cantidad de horas no valida\n");
              } else {
                strcpy(empleados[i][j], horas);
              }

            } while (horas < 0);
            break;
          case 3:

            do {
              printf("Ingrese la categoria\n");
              printf("1- Planta\n2- Administrativo\n3- Vendedor\n");
              scanf("%d", &seleccion2);
              if (seleccion2 < 0 || seleccion2 > 3) {
                printf("Error! Seleccion invalida\n");
              } else {
                switch (seleccion2) // Asignacion de categorias
                {
                case 1:
                  strcpy(empleados[i][j], "1");
                  break;
                case 2:
                  strcpy(empleados[i][j], "2");
                  break;
                case 3:
                  strcpy(empleados[i][j], "3");
                  break;

                default:
                  printf("Error\n");
                  break;

                }
              }

            } while (seleccion2 < 0 || seleccion2 > 3);

            break;

          default:
            printf("Error\n");
            break;
          }

        }

      }

      break;
    case 2:
      for (int i = 0; i < 40; i++) {
        printf("===========Empleado %d==============\n", i+1);
        printf("Legajo: %s\n", empleados[i][0]);
        printf("Nombre: %s\n", empleados[i][1]);
        printf("Horas Trabajadas: %s\n", empleados[i][2]);
        printf("Categoria: %s\n", empleados[i][3]);
        
      }
      break;
    case 3:
      do {
        printf("Ingrese el nro de legajo: \n");
        scanf("%s", &legajo);
      } while (atoi(legajo) < 10000 || atoi(legajo) > 99999);
      for (int i = 0; i < 2; i++) {
        
        if (strcmp(legajo,empleados[i][0])== 0)
        {
          strcpy(categ, empleados[i][3]);
          printf("Legajo: %s\n", empleados[i][0]);
          printf("Nombre: %s\n", empleados[i][1]);
          switch (atoi(categ)) {
          case 1:
            trabajada = atoi(empleados[i][2]) * 2000;
            printf("Sueldo: $%d\n", trabajada);
            break;
          case 2:
            trabajada = atoi(empleados[i][2]) * 1500;
            printf("Sueldo: $%d\n", trabajada);
            break;
          case 3:
            trabajada = atoi(empleados[i][2]) * 1000;
            printf("Sueldo: $%d\n", trabajada);
            break;

          default:
            printf("Error\n");
            break;
          }
        }

      }
      break;
    case 4:
      do {
        printf("Ingrese el nro de legajo: \n");
        scanf("%s", &legajo);
      } while (atoi(legajo) < 10000 || atoi(legajo) > 99999);
      for (int i = 0; i < 40; i++) {
        if (strcmp(legajo,empleados[i][0])== 0) {
          do {
            printf("Ingrese la Categoria\n");
            scanf("%s", &categ);
            if (atoi(empleados[i][3]) < 1 || atoi(empleados[i][3]) > 3) {
              printf("Error!\n");
            } else if (strcmp(categ,empleados[i][3])==0){
              printf("Error! Ingreso la misma categoria\n");
            }

          } while (atoi(empleados[i][3]) < 1 || atoi(empleados[i][3]) > 3 || atoi(empleados[i][3]) == atoi(categ));
          strcpy(empleados[i][3], categ);
          printf("Dato modificado exitosamente\n");

        }

      }

      break;
    case 5:
      printf("Saliendo del sistema");
      break;

    default:
      printf("Opcion Incorrecta!");
      break;
    }
  } while (seleccion != 5);

}