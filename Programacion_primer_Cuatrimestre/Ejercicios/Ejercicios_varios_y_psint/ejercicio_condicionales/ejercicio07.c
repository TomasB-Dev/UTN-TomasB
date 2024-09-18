#include <stdlib.h>
#include <stdio.h>
/*Desarrolle un algoritmo que lea dos números y los imprima en forma
ascendente*/

void main(){
    int numero1, numero2;
    printf("Ingresa dos numeros");
    scanf("%d %d",&numero1, &numero2);
    if(numero1 < numero2){
        printf("%d %d", numero1 , numero2 );
    }else{
        printf("%d %d", numero2 , numero1);
    }
}
