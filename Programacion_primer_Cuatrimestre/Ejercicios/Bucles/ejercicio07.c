#include <stdlib.h>
#include <stdio.h>
/*
Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman.
*/
void main(){
    int cantidad_entradas= 0, logica = 0;//este prodia ser boolean
    float numero_Ingresado;
    
    do
    {
        printf("Ingrese un numero: \n");
        scanf("%f",&numero_Ingresado);
        if (numero_Ingresado != 0)
        {
            cantidad_entradas++;
        }else{
            logica++;
        }
        
    } while (logica == 0);
    printf("La cantidad de numeros ingresados es: %d", cantidad_entradas);
    
    
    
}