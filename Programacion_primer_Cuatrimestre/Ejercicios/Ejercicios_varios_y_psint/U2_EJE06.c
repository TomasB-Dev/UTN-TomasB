#include <stdlib.h> //libreria que me permite usar la funcion system
#include <stdio.h>  //Libreria que me permite usar la consola (printf)

/*Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
valor ingresado, imprimir los resultados*/

int main()
{
    int val1, val2;

    printf("Ingreso dos valores enteros: ");
    scanf("%d %d", &val1, &val2);

    printf("La suma de los valores es: %d\n",val1 + val2);
    printf("La resta de estos valores es: %d\n", val1 - val2);
    printf("El producto de estos valores es: %d\n", val1 * val2);

    system("pause");

    return 0;

}