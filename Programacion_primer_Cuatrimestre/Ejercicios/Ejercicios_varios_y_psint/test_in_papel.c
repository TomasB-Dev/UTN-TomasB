#include <stdlib.h>
#include <stdio.h>

void main(){
    int suma = 0, numero, promedio,vueltas = 0, seleccion;
    do
    {
        printf("Ingrese un numero mayor a 0\n");
        scanf("%d",&numero);
        if(numero > 0){
            suma += numero;
            vueltas++;
        }
    }while(numero != 0);
    promedio = suma/vueltas;
    printf("Seleccione una opcion\n");
    printf("1- Promedio\n2- Suma\n");
    scanf("%d", &seleccion);
    switch(seleccion)
    {
        case 1:
        printf("%d", promedio);
        break;
        case 2:
        printf("%d", suma);
        break;
    }


}