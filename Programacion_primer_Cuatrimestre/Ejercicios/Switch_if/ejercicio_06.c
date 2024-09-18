#include <stdlib.h>
#include <stdio.h>
/* Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”.
*/

void main(){
    int nota;
    printf("Ingrese el valor de la nota");
    scanf("%d", &nota);
    if(nota > 0 && nota < 4){
        printf("El alumno reprobo.");
    }else if(nota > 4 && nota < 6){
        printf("El alumno esta regular");
    }else if(nota >=6 && nota <= 10){
        printf("El alumno promociono");
    }else{
        printf("nota invalida");
    }
}