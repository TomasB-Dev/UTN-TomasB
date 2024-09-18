#include <stdlib.h>
#include <stdio.h>

/**/
void main(){
    float nota1, nota2, nota3, promedio;
    printf("Ingrese las tres notas: ");
    scanf("%f",&nota1 , &nota2, &nota3);
    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio>6){
        printf("El alumno tiene un promedio de %2.f, esta aprobado",promedio);
    }else{
        printf("El alumno tiene un promedio de %2.f, esta reprobado", promedio);
    }
}