#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y
no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
el 2,5% de la suma de sus ventas.*/

void main(){
    float venta,ventaTotal;
    int vendedores,logica = 0;
    char LetraVendedor = 'A';

    for (int i = 1; i <= 5; i++)
    {
        ventaTotal = 0;
        logica = 0;
        switch (i)
        {
        case 1:
            LetraVendedor = 'A';
            break;
        case 2:
            LetraVendedor = 'B';
            break;
        case 3:
            LetraVendedor = 'C';
            break;
        case 4:
            LetraVendedor = 'D';
            break;
        case 5:
            LetraVendedor = 'E';
            break;

        }
        do
        {
            printf("Hola! vendedor %c , Ingrese su venta!\n", LetraVendedor);
            scanf("%f", &venta);
            if (venta != 0)
            {
                ventaTotal += venta;
                printf("Venta ingresada con exito!\n");
            }else{
                float comision = ventaTotal * 0.025;
                printf("Vendedor %c\nTotal Ventas: %.2f\nComision: %.2f\n",LetraVendedor,ventaTotal,comision);
                logica++;
            }
            
        } while (logica != 1);
        
    }
    
}