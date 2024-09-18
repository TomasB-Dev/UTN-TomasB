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
        
    

    printf("*****************************************************\n");
    printf("*******************|           |*********************\n");
    printf("*******************|  GANADOR  |*********************\n");
    printf("*******************|___________|*********************\n");
    printf("**                                                 **\n");
    printf("**       El Ganador es el candidato nro %d          **\n",candidato);
    printf("**            Con un total de %d votos             **\n", mayor_candidato);
    printf("**                                                 **\n");
    printf("*****************************************************\n");
    printf("*****************************************************\n");
    printf("**                                                 **\n");
    printf("** La escuela con mas votantes es la escuela nro %d **\n",escuela);
    printf("**          Con un total de %d votantes            **\n",mayor_Escuela);
    printf("**                                                 **\n");
    printf("*****************************************************\n");
    printf("*****************************************************\n");
    printf("**                                                 **\n");
    printf("**                 Miguelito aprobame              **\n");
    printf("**                                                 **\n");
    printf("*****************************************************\n");
    printf("*****************************************************\n");

}