#include <stdlib.h>
#include <stdio.h>
/*11. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:*/
void main(){
    for (int i = 1; i <= 10; i++)
    {
        for (int x = 2; x > 0; x--)
        {
            if (x % 2 != 0)
            {
                printf("@@ %d", i++);
            }else{
                printf("@\n");
            }
            
            
        }
            printf("\n");
    }
    
}