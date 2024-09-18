#include <stdlib.h> //libreria que me permite usar la funcion system
#include <stdio.h>  //Libreria que me permite usar la consola (printf)
#include <math.h>
int main()
{   
    double lado1, lado2, perimetro, area,hipotenusa;

    printf("Ingresa el primer lado del triangulo:");

    scanf("%lf", &lado1);

    printf("Ingresa el segundo lado del triangulo: ");

    scanf("%lf", &lado2);
    
    hipotenusa = sqrt(pow(lado1,2) + pow(lado2,2));
    
    perimetro = lado1 + lado2 + hipotenusa;
    area = (lado1 * lado2) / 2;
    
    printf("Hipotenusa: %.2f\n", hipotenusa);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Superficie: %.2f\n", area);


    system("pause");

    return 0;


}