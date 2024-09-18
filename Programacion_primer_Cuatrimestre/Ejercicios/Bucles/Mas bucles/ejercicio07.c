#include <stdlib.h>
#include <stdio.h>

void main(){
    int suma;
    suma=0;
    for (int i = 1; i <= 40; i = i + 2)
    {
        suma = suma+i;

    }
    printf("la suma de los primeros 20 numeros impares es: %d",suma);
    
}