#include <stdlib.h> //libreria que me permite usar la funcion system
#include <stdio.h>  //Libreria que me permite usar la consola (printf)

/*Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
de 800 pesos, calcular su sueldo e imprimirlo*/

int main()
{
    float horas, paga;
    paga = 800;
    horas = 0;

    printf("ingrese la cantidad de horas trabajadas:");
    scanf("%f", &horas);
    printf("El sueldo que recibe es de: $%.2f",horas * paga);

    system("pause");

    return 0;
}