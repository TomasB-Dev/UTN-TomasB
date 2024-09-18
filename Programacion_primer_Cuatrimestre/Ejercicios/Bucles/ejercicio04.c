#include <stdlib.h>
#include <stdio.h>
/*Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.
*/


void main(){
    int cantAlumnos, cantParciales, j, i;
    float nota = 0, notaTotales = 0, promedio = 0, promedioS = 0, notaIndividual = 0;
    do
    {
        printf("Escribir cantidad de alumnos :\n");
        scanf("%d", &cantAlumnos);
        if (cantAlumnos <= 0)
        {
            printf("Numero invalido, vuelve a ingresar");
        }
        

    } while (cantAlumnos <= 0);
    do
    {
        printf("Escribir cantidad de parciales :\n");
        scanf("%d", &cantParciales);
        if (cantParciales <= 0)
        {
            printf("Numero invalido, vuelve a ingresar");
        }
        
    } while (cantParciales <= 0);
    for (i = 1; i <= cantAlumnos ; i++)
    {nota = 0, promedio = 0, notaIndividual = 0;
        for ( j = 1; j <= cantParciales; j++)
        {
            do
        {
            printf("Ingrese la nota del alumno %d :\n", i);
            scanf("%f", &nota);
            if (nota <= 0 || nota > 10)
            {
                printf("Nota invalida, vuelve a ingresar");
                
            }
            
        } while (nota <= 0 || nota > 10);
        notaIndividual += nota; 
        }
        notaTotales += notaIndividual;
        printf("%f", notaTotales);
        promedio = notaIndividual/(j - 1);
        printf("%d", j);
        printf("El promedio es %.2f :\n", promedio); 
    }
promedioS = notaTotales/(cantAlumnos*cantParciales);
printf("Promedio general es : %.2f", promedioS); 
}