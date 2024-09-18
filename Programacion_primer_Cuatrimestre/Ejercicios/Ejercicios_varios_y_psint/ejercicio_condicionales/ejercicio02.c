#include <stdlib.h>
#include <stdio.h>
/*
Realizar un programa que solicite al operador ingresar dos números y muestre por pantalla el mayor de ellos.
*/
void main(){
    int n1, n2;
    printf ("Ingresar dos numeros");
    scanf("%d,%d", &n1,&n2);
    if (n1 < n2){
        printf("El %d es mayor",n2);
    }else if(n1>n2){
        printf("El %d es mayor", n1);
    }else{
        printf("los numeros son igules");
    }
}