#include <stdlib.h>
#include <stdio.h>
/*6. Suma de los 10 primeros números múltiplos de tres*/
void main(){
    int suma;
    suma=0;

    for (int i = 1; i <= 10; i++)
    {
        suma += i*3;
        
    }
    printf("La suma de los multiplos es %d",suma);
}