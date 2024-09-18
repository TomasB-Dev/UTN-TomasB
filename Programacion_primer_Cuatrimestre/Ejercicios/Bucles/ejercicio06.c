#include <stdlib.h>
#include <stdio.h>
/*6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio*/
void main(){
    int notas, suma = 0, promedio, opcion, ciclo = 0;

    do
    {
        printf("Ingrese la nota: \n");
        scanf("%d", &notas);
        suma += notas;
        ciclo++;
        printf("Ingrese 1 para seguir cargando notas.\nIngrese 2 para saber su suma y el promedio\n");
        scanf("%d",&opcion);
        
    } while (opcion == 1);
promedio = suma / ciclo;
printf("La suma es: %d\nEl promedio es: %d",suma,promedio);
    
}