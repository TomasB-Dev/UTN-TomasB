#include <stdlib.h>
#include <stdio.h>
/*Podemos observar lo siguiente: Siempre se hace la carga del sueldo, 
pero si el sueldo que ingresamos supera 3000 pesos se mostrará por pantalla el mensaje 
"Esta persona debe abonar impuestos", en caso que la persona cobre 3000 
o menos no aparece nada por pantalla.*/
void main()
{
    float sueldo;
    printf("ingrese su sueldo");
    scanf("%f", &sueldo);

    if (sueldo>3000){
        printf("Debe pagar impuestos");
    }else{
        printf("no debe pagar impuestos");
    }

}
