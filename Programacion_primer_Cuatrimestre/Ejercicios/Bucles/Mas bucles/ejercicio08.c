#include <stdlib.h>
#include <stdio.h>
    /*8. Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del
número.*/
void main(){
    int n1;
    printf("ingrese un numero");
    scanf("%d",&n1);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n1, i, n1 * i);
    }
    

}