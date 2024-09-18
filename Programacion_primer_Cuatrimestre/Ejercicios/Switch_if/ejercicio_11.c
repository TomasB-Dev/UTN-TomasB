#include <stdlib.h>
#include <stdio.h>
/*11- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar*/
void main(){
    float num1, num2;
    int eleccion;
    printf("Ingresa dos numeros:");
    scanf("%f %f",&num1 ,&num2);
    printf("1.Informar su suma \n2.Informar su resta \n3.Informar su multiplicaci%cn \n4.Informar su devisi%cn \n5.Salir \n Seleccione una operacion: ",162,162);
    scanf("%d",&eleccion);

    switch (eleccion)
    {
    case 1:
        printf("La suma de los dos numeros es %.2f",num1+num2);
        break;
    case 2:
        printf("La resta de los dos numeros es %.2f",num1-num2);
        break;
    case 3:
    printf("La multiplicacion de los dos numeros es %.2f",num1*num2);
        break;
    case 4:
    printf("La division de los dos numeros es %.2f",num1/num2);
        break;
    case 5:
        break;
    default:
    printf("Opcion incorrecta");
        break;
    }


}