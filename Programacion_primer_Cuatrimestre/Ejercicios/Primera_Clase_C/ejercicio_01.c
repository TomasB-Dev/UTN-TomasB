#include <stdlib.h> //libreria que me permite usar la funcion system
#include <stdio.h>  //Libreria que me permite usar la consola (printf)

int main()
{
    int nro1, nro2;
    printf("Ingrese el primer numero \n");

    scanf("%d", &nro1);

    printf("Ingrese el segundo nomuero");

    scanf("%d", &nro2);

    printf("la suma es:  %d\n", nro1 + nro2);

    system("pause");

    return 0;
}