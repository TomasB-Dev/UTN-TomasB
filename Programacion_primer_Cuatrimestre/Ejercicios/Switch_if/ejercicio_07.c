#include <stdlib.h>
#include <stdio.h>

/*Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
dicha situación.*/

void main(){
    float venta, total;
    printf("Ingrese el valor de la venta");
    scanf("%f",&venta);
    if(venta >= 100000){
        total = (venta * 15 )/ 100;
        printf("el descuento de 15%c es de: %.2f , dando un total de %.2f", 37,total,venta-total);       
    }else if(venta !=0 && venta < 100000){
        total = (venta * 10 ) / 100;
        printf("La venta con descuento del 10%c es de: $ %.2f , dando un total de $ %.2f", 37,total,venta-total);
    }else{
        printf("la venta es menor a $ 0");
    }
}