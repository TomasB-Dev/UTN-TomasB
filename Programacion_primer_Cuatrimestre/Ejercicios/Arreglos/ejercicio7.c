#include <stdlib.h> 
#include <stdio.h> 
/*7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio.*/
void main(){
    int CantNotas;

    printf("Ingrese la cantidad de notas a cargar\n");
    scanf("%d",&CantNotas);
    float notas[CantNotas], sumanotas = 0;
    for (int i = 0; i < CantNotas; i++)
    {
        printf("Ingrese la nota numero %d:\n",i+1);
        scanf("%f",&notas[i]);
        sumanotas += notas[i];
    }
    
    printf("La suma de todas las notas es: %.2f\n", sumanotas);
    printf("El promedio es: %.2f", sumanotas/CantNotas);
    
    
}