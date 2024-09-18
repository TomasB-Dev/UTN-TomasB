#include <stdlib.h> //libreria que me permite usar la funcion system
#include <stdio.h>  //Libreria que me permite usar la consola (printf)

int main()
{
    int numero;
    printf("ingrese por pantalla un numero");
    scanf("%d", &numero);
    printf("el numero anterior es: %d \n", numero-1 );
    printf("el numero siguiente es: %d",numero+1);

    return 0 ;
}