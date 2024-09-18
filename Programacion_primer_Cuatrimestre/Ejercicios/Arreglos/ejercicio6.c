#include <stdlib.h> 
#include <stdio.h> 
/*6. Ingrese por teclado la facturación de los últimos 6 meses del año. Informar:
a. La facturación total
b. El promedio de facturación
c. La máxima facturación
d. La mínima facturación */
void main(){
    float facturacion[6], promedio;
    for (int i = 0; i < 6; i++)
    {
        
        do
        {
        printf("Inserte la facturacion numero %d\n",i+1);  
        scanf("%f", &facturacion[i]);
        if (facturacion[i] < 0)
        {
            printf("La facturacion debe ser mayor a 0");
        }
        } while (facturacion[i] < 0);
        promedio += facturacion[i];
    }
    float facMax = facturacion[0], facMin = facturacion[0];
    printf("%f",facMin);
    for (int i = 0; i < 6; i++)
    {
        if (facturacion[i] > facMax)
        {
            facMax = facturacion[i];
        }
        if (facturacion[i] < facMin)
        {
            facMin = facturacion[i];
        }
        
    }
    printf(" El promedio es: %.2f\n",promedio/6);
    printf("La facturacion maxima es: %.2f", facMax);
    printf("La facturacion minima es: %.2f", facMin);

}