#include <stdlib.h> //libreria que me permite usar la funcion system
#include <stdio.h>  //Libreria que me permite usar la consola (printf)

int main()
{
    int nro1, nro2, nro3, nro4, nro5, promedio;

    printf("Ingrese el primer numero.");
    scanf("%d", &nro1);
    printf("Ingrese el segundo numero.");
    scanf("%d", &nro2);
    printf("Ingrese el tercer numero.");
    scanf("%d", &nro3);
    printf("Ingrese el cuarto numero");
    scanf("%d", &nro4);
    printf("Ingrese el quinto numero");
    scanf("%d", &nro5);

    promedio = (nro1 + nro2 + nro3 + nro4 + nro5)/5;

    printf("el promedio es de: %d", promedio);

    return 0;


}