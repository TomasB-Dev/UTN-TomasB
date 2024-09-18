#include <stdlib.h> 
#include <stdio.h> 
/*Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array.*/
void main(){
    int array1[5], array2[5], array3[10];

    printf("Ingrese los valores del primer array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor nro %d del primer array\n", i+1);
        scanf("%d",&array1[i]);
    }
    printf("Ingrese los valores del segundo array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el valor nro %d del segundo array\n", i+1);
        scanf("%d", &array2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        array3[i] = array1[i];
        array3[i+5] = array2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d-",array3[i]);
    }
    
    

}