#include <stdlib.h>
#include <stdio.h>
/*15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general.*/
void main(){
    int alumno;
    float  nota,promedio_Gnrl,n3, promedio;
    promedio_Gnrl= 0;
    
    for (int i = 1; i <= 5; i++)
    {
        printf("ingrese el numero de alumno");
        scanf("%d", &alumno);
        // nota = 0;
        promedio = 0;
        for (int x = 1; x <= 3; x++)
        {
            
            // promedio = 0;
            printf("ingresa la nota numero%d: ",x);
            scanf("%f",&nota);
            promedio = promedio + nota;
            printf("%.2f", promedio);
            

        }
        promedio = promedio / 3;
        printf("El promedio del alumo %d es: %.2f\n", i,promedio);
        promedio_Gnrl = promedio_Gnrl + promedio;
        
        
    }
    promedio_Gnrl = promedio_Gnrl / 5;
    printf("%.2f",promedio_Gnrl);

}
