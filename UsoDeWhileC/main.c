#include <stdio.h>
#include <stdlib.h>
/* 	Este programa imprime por pantalla los primeros 10 números naturales.
	Entrada: -
	Salida: los primeros 10 números naturales */
int main()
{
    int numero;
    numero=1;

    printf("\n  ***** Ejemplo uso del While *****  \n");

    while(numero<=10)
    {
        printf("\n%d",numero);
        numero++;
    }

    return 0;
}
