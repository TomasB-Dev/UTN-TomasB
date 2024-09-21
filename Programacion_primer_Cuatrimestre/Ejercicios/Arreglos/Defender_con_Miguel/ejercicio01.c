#include <stdlib.h> 
#include <stdio.h>
/*
            ENUNCIADO
Dadas 5 escuelas y 4 candidatos tengo que saber que candidato es el que obtuvo mayor cantidad de votos
que escuela tiene la mayor cantidad de votantes

*/ 

void main(){
    int resultados[5][4];
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int escuela1 = 0, escuela2 = 0, escuela3 = 0, escuela4 = 0, escuela5 = 0;
    

    resultados[0][0]=1;
    resultados[1][0]=2;
    resultados[2][0]=3;
    resultados[3][0]=4;
    resultados[4][0]=5;
    //columna2
    resultados[0][1]=7;
    resultados[1][1]=5;
    resultados[2][1]=3;
    resultados[3][1]=8;
    resultados[4][1]=9;

    //columna3
    resultados[0][2]=2;
    resultados[1][2]=23;
    resultados[2][2]=3;
    resultados[3][2]=3;
    resultados[4][2]=9;

    //columna4
    resultados[0][3]=2;
    resultados[1][3]=5;
    resultados[2][3]=17;
    resultados[3][3]=2;
    resultados[4][3]=9;



    for (int i = 0; i < 5; i++)
    {
    
        for (int j = 0; j < 4; j++)
        {
            switch (j)
            {
            case 0:
                candidato1 += resultados[i][j];                           
                break;
            case 1:
                candidato2 += resultados[i][j];
                break;
            case 2:
                candidato3 += resultados[i][j];
                break;
            case 3:
                candidato4 += resultados[i][j];
                break;
            }
            switch (i)
            {
            case 0:
                escuela1 += resultados[i][j];                           
                break;
            case 1:
                escuela2 += resultados[i][j];
                break;
            case 2:
                escuela3 += resultados[i][j];
                break;
            case 3:
                escuela4 += resultados[i][j];
                break;
            case 4:
                escuela5 += resultados[i][j];
                break;
            }
        }
        
    }
    int mayor_candidato = candidato1;
    int candidato= 1;
        if (mayor_candidato < candidato2)
        {
            mayor_candidato = candidato2;
            candidato = 2;
        }
        if (mayor_candidato < candidato3)
        {   
            mayor_candidato = candidato3;
            candidato = 3;
        }
        if (mayor_candidato < candidato4)
        {
            mayor_candidato = candidato4;
            candidato = 4;
        }
        
        int mayor_Escuela = escuela1;
        int escuela = 1;
        if (mayor_Escuela < escuela2)
        {
            mayor_Escuela = escuela2;
            escuela = 2;
        }
        if (mayor_Escuela < escuela3)
        {   
            mayor_Escuela = escuela3;
            escuela = 3;
        }
        if (mayor_Escuela < escuela4)
        {
            mayor_Escuela = escuela4;
            escuela = 4;
        }
        if (mayor_Escuela < escuela5)
        {
            mayor_Escuela = escuela5;
            escuela = 5;
        }
        
    //experimento
    // for (int i = 0; i < 31; i++)
    // {
    //     for (int j = 0; j < 53; j++)
    //     {
    //         if ( j == 52)
    //         {
    //             printf("*\n");
    //         }else
    //             {   if (j > 18 && j < 32)
    //             {
    //                 printf(" ");
    //             }else{
    //                 printf("*");
    //             }
            
                
    //         }
    //     }
        
        
        
    //} 
    
    // printf("*****************************************************\n");
    // printf("*******************|           |*********************\n");
    // printf("*******************|  GANADOR  |*********************\n");
    // printf("*******************|___________|*********************\n");
    // printf("**                                                 **\n");
    // printf("**       El Ganador es el candidato nro %d          **\n",candidato);
    // printf("**            Con un total de %d votos             **\n", mayor_candidato);
    // printf("**                                                 **\n");
    // printf("*****************************************************\n");
    // printf("*****************************************************\n");
    // printf("**                                                 **\n");
    // printf("** La escuela con mas votantes es la escuela nro %d **\n",escuela);
    // printf("**          Con un total de %d votantes            **\n",mayor_Escuela);
    // printf("**                                                 **\n");
    // printf("*****************************************************\n");
    // printf("******************|              |*******************\n");
    // printf("******************| ESTADISTICAS |*******************\n");
    // printf("******************|______________|*******************\n");
    // printf("**                                                 **\n");
    // printf("**       ESCUELAS        |      CANDIDATOS         **\n");
    // printf("**                       |                         **\n");
    // printf("**     Escuela 1: %d     |    Candidato 1: %d      **\n",escuela1, candidato1);
    // printf("**     Escuela 2: %d     |    Candidato 2: %d      **\n",escuela2, candidato2);
    // printf("**     Escuela 3: %d     |    Candidato 3: %d      **\n",escuela3, candidato3);
    // printf("**     Escuela 4: %d     |    Candidato 4: %d      **\n",escuela4, candidato4);
    // printf("**     Escuela 5: %d     |                         **\n",escuela5); 
    // printf("**                       |                         **\n");
    // printf("*****************************************************\n");
    // printf("*****************************************************\n");

    int opcion;
    printf("**VOTACIONES 2024**\n");
    printf("Seleccione una opcion: \n1- Candidato Ganador\n2- Escuela con mas votantes\n");
    printf("3- Cantidad de votos por escuela\n4- Cantidad de votos por candidato\n5- Salir\n");
    scanf("%d",&opcion);
    switch (opcion)
    {
    case 1:
        printf("El candidato ganador es: Candidato nro %d",candidato);
        break;
    case 2:
        printf("La escuela con mas votante es: Escuela nro %d", escuela);
        break;
    case 3:
        printf("La escuela nro 1 tuvo %d votos.\n",escuela1);
        printf("La escuela nro 2 tuvo %d votos.\n",escuela2);
        printf("La escuela nro 3 tuvo %d votos.\n",escuela3);
        printf("La escuela nro 4 tuvo %d votos.\n",escuela4);
        printf("La escuela nro 5 tuvo %d votos.\n",escuela5);
        break;
    case 4:
        printf("El votante nro 1 tuvo %d votos.\n",candidato1);
        printf("El votante nro 2 tuvo %d votos.\n",candidato2);
        printf("El votante nro 3 tuvo %d votos.\n",candidato3);
        printf("El votante nro 4 tuvo %d votos.\n",candidato4);
        break;
    case 5:
    break;
    default:
    printf("La opcion es incorrecta, aprende a leer!");
    break;
    }

}