#include <stdlib.h> 
#include <stdio.h> 
/*Dado el vector {10, 20, 5, 15, 30, 20}
a. Informar el vector de la forma: "Índice: X, Valor: Y".
b. Totalizar el vector e informar el total.
c. Informar el contenido de las posiciones impares.
d. Informar las posiciones que contienen números impares.
e. Informar el mayor número.
f. Informar cuántas veces aparece el número 20. */
void main(){
    int vector[6] = {10,20,5,15,30,20};
    int num20 = 0, suma =  0;

// B F
    for (int i = 0; i < 6; i++)
    {
        if (vector[i] == 20)
        {
            num20++;
        }
        if (vector[i] % 2 != 0)
        {
            printf("El vector numero %d es impar\n",i);
        }
        printf("el indice es: %d y el valor del indice es de: %d\n",i,vector[i]);
        suma+=vector[i];
    }

    printf("La cantidad de veces que se repitio es: %d\n",num20);
    printf("La suma de todas es de: %d\n", suma);
}