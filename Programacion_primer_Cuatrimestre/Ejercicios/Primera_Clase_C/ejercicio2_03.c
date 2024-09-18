#include <stdlib.h> //libreria que me permite usar la funcion system
#include <stdio.h>  //Libreria que me permite usar la consola (printf)

int main()
{
    int lado1 , lado2, lado3;
    printf("Vamos a calcular el perimetro de un triangulo!  \n");
    printf("Ingresa la longitud del primer lado: \n");
    scanf("%d", &lado1);
    printf("Ingresa la longitud del segundo lado: \n");
    scanf("%d", &lado2);
    printf("Ingresa la longitud del tercer lado: \n");
    scanf("%d", &lado3);
    printf("El perimetro del triangulo es : %d \n", lado1 + lado2 + lado3);
    system("pause");
    return 0;

}