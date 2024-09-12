#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("\n  ***** Ejemplo Continue *****  \n\n");

    numero=1;
    while(numero<=10)
    {
        if(numero % 2==0)
        {
            numero++;
            continue;
        }
        printf(" %d \n",numero);
        numero++;
    }
    return 0;
}
