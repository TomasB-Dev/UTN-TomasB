#include <stdlib.h>
#include <stdio.h>
/*10- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
if y luego estructura switch).*/
void main(){
    int numero;

    printf("Ingresa un numero del 1 al 12");
    scanf("%d",&numero);
    if(numero !=0 && numero < 12){
        if(numero == 1){
            printf("El mes es Enero \n");
        }
        if(numero == 2){
            printf("El mes es febrero \n");
        }
        if(numero == 3){
            printf("El mes es Marzo \n");
        }
        if(numero == 4){
            printf("El mes es Abril \n");
        }
        if(numero == 5){
            printf("El mes es Mayo \n");
        }
        if(numero == 6){
            printf("El mes es Junio \n");
        }
        if(numero == 7){
            printf("El mes es Julio \n");
        }
        if(numero == 8){
            printf("El mes es Agosto \n");
        }
        if(numero == 9){
            printf("El mes es Septiembre \n");
        }
        if(numero == 10){
            printf("El mes es Octubre \n");
        }
        if(numero == 11){
            printf("El mes es Noviembre \n");
        }
        if(numero == 12){
            printf("El mes es Diciembre \n");
        }
    }else{
        printf("El numero ingresado no esta dentro del rango \n");
    }

    switch(numero){
        case 1:
        printf("El mes es Enero \n");
        break;
        case 2:
        printf("El mes es Febrero \n");
        break;
        case 3:
        printf("El mes es Marzo \n");
        break;
        case 4:
        printf("El mes es Abril \n");
        break;
        case 5:
        printf("El mes es Mayo \n");
        break;
        case 6:
        printf("El mes es Junio \n");
        break;
        case 7:
        printf("El mes es Julio \n");
        break;
        case 8:
        printf("El mes es Agosto \n");
        break;
        case 9:
        printf("El mes es Septimbre \n");
        break;
        case 10:
        printf("El mes es Octubre \n");
        break;
        case 11:
        printf("El mes es Noviembre \n");
        break;
        case 12:
        printf("El mes es Diciemre \n");
        break;
        default:
        printf("No es un numero valido \n");
    }

}