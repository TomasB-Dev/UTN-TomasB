#include <stdlib.h>
#include <stdio.h>
/*12- Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa. Por último, presentar un
resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784*/
void main() {
    int dni,tipo_pago,cuotas,total,tarjetas;
    total = 4600;

    printf("Ingrese su DNI: \n");
    scanf("%d", &dni);
    if(dni < 1000000 || dni > 99999999){
        printf("El dni ingresado es invalido.");
    }else{
        printf("Ingrese el metodo de pago:\n");
        printf("1-Efectivo, 2-Tarjeta de cr%cdito\n",101);
        scanf("%d",&tipo_pago);
        if(tipo_pago == 1){
            printf("DNI: %d \nMedio de pago: Efectivo\nCuotas: 1\nTotal: $%d",dni,total);
        }else if(tipo_pago == 2){
            printf("Seleccione una de las siguientes tarjetas: \n");
            printf("1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal");
            scanf("%d", &tarjetas);
            if(tarjetas == 1){
                printf("Ingrese la cantidad de cuotas(1, 3, 6 o 12)");
                scanf("%d",&cuotas);
                switch (cuotas)
                {
                case 1:
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Visa\nCuotas: 1\nTotal: %d",dni,total);
                    break;
                case 3:
                    total += (total*4)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Visa\nCuotas: 3\nTotal: %d",dni,total);
                    break;
                case 6:
                    total += (total*8)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Visa\nCuotas: 6\nTotal: %d",dni,total);
                    break;
                case 12:
                    total += (total*8)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Visa\nCuotas: 12\nTotal: %d",dni,total);
                    break;
                
                default:
                    printf("Opcion invalida");
                    break;
                }

            }else if(tarjetas == 2){
                printf("Ingrese la cantidad de cuotas(1, 3, 6 o 12)");
                scanf("%d",&cuotas);
                switch (cuotas)
                {
                case 1:
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: American Express\nCuotas: 1\nTotal: %d",dni,total);
                    break;
                case 3:
                    total += (total*4)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: American Express\nCuotas: 3\nTotal: %d",dni,total);
                    break;
                case 6:
                    total += (total*8)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: American Express\nCuotas: 6\nTotal: %d",dni,total);
                    break;
                case 12:
                    total += (total*8)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: American Express\nCuotas: 12\nTotal: %d",dni,total);
                    break;
                
                default:
                    printf("Opcion invalida");
                    break;
                }

            }else if(tarjetas == 3){
                printf("Ingrese la cantidad de cuotas(1, 3, 6 o 12)");
                scanf("%d",&cuotas);
                switch (cuotas)
                {
                case 1:
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Mercado Pago\nCuotas: 1\nTotal: %d",dni,total);
                    break;
                case 3:
                    total += (total*4)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Mercado Pago\nCuotas: 3\nTotal: %d",dni,total);
                    break;
                case 6:
                    total += (total*8)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Mercado Pago\nCuotas: 6\nTotal: %d",dni,total);
                    break;
                case 12:
                    total += (total*8)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Mercado Pago\nCuotas: 12\nTotal: %d",dni,total);
                    break;
                
                default:
                    printf("Opcion invalida");
                    break;
                }

            }else if(tarjetas == 4){
                printf("Ingrese la cantidad de cuotas(1, 3, 6 o 12)");
                scanf("%d",&cuotas);
                switch (cuotas)
                {
                case 1:
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Cabal\nCuotas: 1\nTotal: %d",dni,total);
                    break;
                case 3:
                    total += (total*4)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Cabal\nCuotas: 3\nTotal: %d",dni,total);
                    break;
                case 6:
                    total += (total*8)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Cabal\nCuotas: 6\nTotal: %d",dni,total);
                    break;
                case 12:
                    total += (total*8)/100;
                    printf("DNI: %d \nMedio de pago: Tarjeta de credito\nTarjeta: Cabal\nCuotas: 12\nTotal: %d",dni,total);
                    break;
                
                default:
                    printf("Opcion invalida");
                    break;
                }

            }else{
                printf("Opcion invalida");
            }

        }else{
            printf("Opcion invalida");
        }
    }

}
