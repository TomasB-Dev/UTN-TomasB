#include <stdlib.h>
#include <stdio.h>
/**Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)
*/
void main()
{
    int numero;
    printf("Ingrese un numero");
    scanf("%d",&numero);
    if(numero>9){
        printf("El numero %d tiene dos digitos", numero);
    }else{
        printf("el numero %d tiene 1 digito", numero);
    }
}