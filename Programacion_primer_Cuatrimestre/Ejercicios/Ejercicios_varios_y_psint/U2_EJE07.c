#include <stdlib.h> //libreria que me permite usar la funcion system
#include <stdio.h>  //Libreria que me permite usar la consola (printf)
/*Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
sueldo e imprimirlo*/

int main()
{
    float Pago_x_hora, worked;
    scanf("%f %f", &Pago_x_hora, &worked);
    printf("El sueldo del comerciante es: $%.2f",worked * Pago_x_hora);

    system("pause");

    return 0;
}