#include <stdlib.h>
#include <stdio.h>
/*Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
Si el promedio es >=7 mostrar "Promocionado".
Si el promedio es >=4 y <7 mostrar "Regular".
Si el promedio es <4 mostrar "Reprobado".*/

void main(){

    float nota1, nota2, nota3, promedio;
    printf("Ingrese las tres notas: ");
    scanf("%f",&nota1 , &nota2, &nota3);
    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >=7){
        printf("El alumno tiene un promedio de %2.f, Esta Promocionado",promedio);
    }else if(promedio>=4 ){
        printf("El alumno tiene un promedio de %2.f, Es Regular", promedio);
    }else{
        printf("El alumno tiene un promedio de %2.f, Esta Reprobado", promedio);
    }

}