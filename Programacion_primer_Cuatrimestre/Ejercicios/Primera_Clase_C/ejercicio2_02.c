#include <stdlib.h> //libreria que me permite usar la funcion system
#include <stdio.h>  //Libreria que me permite usar la consola (printf)

int main()
{
    int nro1, nro2 , nro3;
    printf("Ingresa el primer numero:");
    scanf("%d", &nro1);
    printf("Ingresa el segundo numero:");
    scanf("%d", &nro2);
    printf("Ingresa el tercer numero:");
    scanf("%d", &nro3);

    printf("La suma es: %d\n", nro1 + nro2 + nro3);

    system("pause");

    return 0;

}