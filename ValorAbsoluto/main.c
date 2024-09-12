#include <stdio.h>
#include <stdlib.h>

/* 	Este programa lee un número entero y calcula su valor Absoluto.
	Entrada: número
	Salida: valor Absoluto del número */

int main () {

    int numero=0;
	int valorAbsoluto=0;

    printf("\n  ***** Valor Absoluto *****  \n\nIngrese un numero: ");
    scanf("%d",&numero);
    valorAbsoluto=numero;

	//Solo si el numero es negativo cambiamos su signo
	if (valorAbsoluto < 0)
        {
            valorAbsoluto = valorAbsoluto * (-1);
        }

    printf("\n\n El valor absoluto de %d es: ' %d '\n",numero,valorAbsoluto);

	return 0;
 }
