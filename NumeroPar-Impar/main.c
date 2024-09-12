#include <stdio.h>
#include <stdlib.h>
/* 	Este programa lee un número entero e indica si es par o impar.
	Entrada: número
	Salida: mensaje par/impar */

int main()
{
    int numero=0;

    printf("\n  ***** Numero Par o Impar *****  \n\nIngrese un numero: ");
    scanf("%d",&numero);

    if(numero % 2==0)
    {
        printf("\n %d es numero par. \n",numero);
    }
    else
    {
        printf("\n %d es numero impar. \n",numero);
    }

    return 0;
}
