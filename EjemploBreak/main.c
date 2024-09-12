#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("\n  ***** Ejemplo Break *****  \n\n");

    numero=1;
    while(numero<=10)
    {
        printf("%d\n",numero);
        if (numero==2)
        {
            break;
        }
        else
        {
            numero++;
        }
    }
    return 0;
}
