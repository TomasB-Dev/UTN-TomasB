#include <stdlib.h>
#include <stdio.h>
/*9. Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9*/
void main(){
    for (int i = 1; i <= 9; i++)
    {
        for (int x = 1; x <= 10; x++)
        {
            printf("%d x %d = %d \n", i , x, i*x);
        }
        
    }
    
}