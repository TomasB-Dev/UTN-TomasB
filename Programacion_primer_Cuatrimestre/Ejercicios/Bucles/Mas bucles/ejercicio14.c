#include <stdlib.h>
#include <stdio.h>

void main(){
    int numero;

    printf("Ingrese un numero no negativo");
    scanf("%d",&numero);
    if (numero < 0 )
    {
        printf("El numero ingresado es incorrecto.");
    }else{
        for (int i = 1; i <= 10; i++)
        {
            printf("%d\n",numero);
        }
    }
}