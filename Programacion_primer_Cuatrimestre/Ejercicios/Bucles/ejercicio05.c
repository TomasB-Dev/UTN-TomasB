#include <stdlib.h>
#include <stdio.h>
/*Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.
*/
void main(){
    int dni = 38632584, dniIngresado = 0 , intentos = 1 , ingresaCorrectamente = 0;
    float nota = 7;

    do
    {
        printf("Ingresa el DNI");
        scanf("%d", &dniIngresado);
        if (dni == dniIngresado)
        {
            ingresaCorrectamente++;
            printf("La nota es: %.2f",nota);
        }
        else{
            printf("El DNI ingresado es incorrecto");
            intentos++;
        }

    } while ( intentos <= 3);
    
}