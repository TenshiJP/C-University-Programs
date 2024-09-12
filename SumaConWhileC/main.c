#include <stdio.h>
#include <stdlib.h>
/* 	Este programa calcula la suma de los primeros 10 números naturales.
	Entrada: -
	Salida: suma de los primeros 10 números naturales */
int main()
{
    int numero;
    int suma=0;

    printf("\n  ***** Se Sumara los Primeros 10 Numeros Naturales con Ciclo While *****  \n");

    numero=1;
    while(numero<=10)
    {
        suma=suma+numero;
        numero++;
    }

    printf("\nLa suma de los primeros diez numeros naturales es: %d\n",suma);

    return 0;
}
