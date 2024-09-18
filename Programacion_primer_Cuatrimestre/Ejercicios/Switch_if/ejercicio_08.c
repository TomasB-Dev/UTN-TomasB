#include <stdlib.h>
#include <stdio.h>
/*Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar */
void main(){
    int saldo, retiro;
    //la consigna no pide ingresar dinero coloque un monto para poder probar.
    saldo = 99999999;
    printf("ingrese el dinero que desea retirar \n");
    scanf("%d",&retiro);
    if(retiro > saldo){
        printf("No tiene fondos suficiente para retirar el dinero. El dinero en la cuenta es de: %d",saldo);
    }else{
        saldo -= retiro;
        printf("Retiraste $ %d de tu cuenta, tu nuevo saldo es de: $ %d",retiro,saldo);

    }

}