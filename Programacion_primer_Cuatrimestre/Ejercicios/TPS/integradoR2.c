#include <stdlib.h>
#include <stdio.h>

void main(){
    int cant_Alum, seleccion, aplazos = 0, regular = 0, aprobados = 0;
    int suma1 = 0, suma2 = 0, suma3 = 0;
    float promedio1 = 0, promedio2 = 0, promedio3 = 0;
    
    printf("//BIENVENIDO//\n");
    printf("//Gracias por utilizar nuestro servicio.//\n");
    printf("//Software de calidad since 1999.//\n");//LMFAOOOOOOOOO
    do
    {
        printf("Ingrese la cantidad de alumnos\n");
        scanf("%d",&cant_Alum);
        if (cant_Alum < 1)
        {
            printf("Error! Cantidad invalida\n");
        }
        
    } while (cant_Alum < 1);
    int comision1[cant_Alum], comision2[cant_Alum], comision3[cant_Alum];
    do
    {
        printf("****Menu****\n");
        printf("1- Cargar notas alumnos por comision.\n2- Promedio por Comision\n3- Promedio materia\n4- Cantidad de aplazos por materia\n5- Cantidad de regularizados de la materia\n6- Cantidad de aprobados en la materia\n7- Salir\n");
        scanf("%d", &seleccion);
        switch (seleccion)
        {
        case 1:
            
                        printf("Ingrese las notas de la comision 1\n");
                        for (int j = 0; j < cant_Alum; j++) {
                            do
                            {
                                printf("Ingrese la nota del alumno %d: ", j + 1);
                                scanf("%d", &comision1[j]);
                                if (comision1[j] < 4)
                                {
                                    aplazos++;
                                }else if (comision1[j] > 4 && comision1[j] < 6)
                                {
                                    regular++;
                                }else
                                {
                                    aprobados++;
                                }
                            } while (comision1[j] < 1);
                            
                            
                        }
                        printf("Ingrese las notas de la comision 2\n");
                        for (int j = 0; j < cant_Alum; j++) {
                        do
                        {
                            printf("Ingrese la nota del alumno %d: ", j + 1);
                            scanf("%d", &comision2[j]);
                            if (comision2[j] < 4)
                            {
                                aplazos++;
                            }else if (comision2[j] > 4 && comision2[j] < 6)
                            {
                                regular++;
                            }else
                                {
                                aprobados++;
                                }
                        
                        }while (comision2[j] < 1);
                        }
                        
                        printf("Ingrese las notas de la comision 3\n");
                        
                        for (int j = 0; j < cant_Alum; j++) {
                            do
                            {
                            printf("Ingrese la nota del alumno %d: ", j + 1);
                            scanf("%d", &comision3[j]);
                            if (comision3[j] < 4)
                            {
                                aplazos++;
                            }else if (comision3[j] > 4 && comision3[j] < 6)
                            {
                                regular++;
                            }else
                                {
                                aprobados++;
                                }
                            }while(comision3[j] < 1);
                        }
                    break;
        
        case 2: 
                for (int i = 0; i < cant_Alum; i++)
                {
                        suma1 += comision1[i];
                        suma2 += comision2[i];
                        suma3 += comision3[i];
                }
                promedio1 = suma1 / cant_Alum;
                promedio2 = suma2 / cant_Alum;
                promedio3 = suma3 / cant_Alum;
                printf("PROMEDIOS POR COMISION\n");
                printf("Comision 1: %.2f\n",promedio1);
                printf("Comision 2: %.2f\n",promedio2);
                printf("Comision 3: %.2f\n", promedio3);
            break;
        case 3:
                for (int i = 0; i < cant_Alum; i++)
                {
                        suma1 += comision1[i];
                        suma2 += comision2[i];
                        suma3 += comision3[i];
                }
                promedio1 = suma1 / cant_Alum;
                promedio2 = suma2 / cant_Alum;
                promedio3 = suma3 / cant_Alum;
            printf("El promedio por materia es: %.2f\n", (promedio1 + promedio2 + promedio3)/(cant_Alum * 3));
            break;
        case 4:
                printf("La cantidad de aplazos es de: %d\n", aplazos);
            break;
        case 5:
                printf("La cantidad de regularizados es de: %d\n", regular);
            break;
        case 6:
                printf("La cantidad de aprobados es de: %d\n", aprobados);
            break;
        default:
            break;
        }
        
    
    } while (seleccion != 7);
    

}

