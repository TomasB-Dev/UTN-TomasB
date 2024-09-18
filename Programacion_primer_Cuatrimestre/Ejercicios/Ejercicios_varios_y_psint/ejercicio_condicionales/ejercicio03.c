#include <stdlib.h>
#include <stdio.h>
/*Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia, 
en caso contrario informar el producto y la división del primero respecto al segundo.*/
void main(){
    int num1, num2;
    printf("Ingrese dos numeros");
    scanf("%d %d", &num1,&num2);

    if(num1>num2){
        printf("La suma es: %d", num1 + num2);
        printf("La diferencia es: %d", num1 - num2);
    }else{
        printf("El producto es: %d", num1 *num2);
        printf("La divicion es: %d",num1 / num2 );
    }
}