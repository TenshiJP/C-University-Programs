#include <stdio.h>
#include <stdlib.h>
/* 	Este programa lee un n�mero y valida que sea mayor a cero.
	Entrada: n�mero
	Salida: n�mero validado */
int main()
{
    int numero=0;

    do
    {
        printf("\nIngrese un numero mayor a cero(0): ");
        scanf("%d",&numero);
        if(numero<=0)
        {
            printf("\n\nEl numero ingresado debe ser mayor a cero!\n");
        }
    }
    while(numero<=0);

    printf("\n\nEl numero ingresado fue : %d\n",numero);

    return 0;
}
