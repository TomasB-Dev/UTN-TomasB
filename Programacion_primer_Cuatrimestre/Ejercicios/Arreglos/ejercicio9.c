#include <stdlib.h> 
#include <stdio.h> 
/*. Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array. */
void main(){
    int array1[5], array2[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor nro %d \n", i+1);
        scanf("%d",&array1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        array2[i] = array1[i]*2;
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d-",array2[i]);
    }
}