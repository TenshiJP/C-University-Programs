#include <stdio.h>
#include <stdlib.h>
/* 	Este programa lee una opci�n de men� e imprime un saludo en un determinado idioma seg�n la preferencia del usuario.
	Entrada: opci�n
	Salida: saludo en un idioma espec�fico */

int main()
{
    int opcion=0;

    printf("\n  ***** Saludos en Varios Idiomas *****  \n\n En que idioma quieres que te salude ? \n| 1. |  Espa�ol \n| 2. |  Ingles \n| 3. |  Frances \n| 4. |  Aleman \nIngresa tu opcion: ");
    scanf("%d",&opcion);

    switch(opcion)
    {
        case 1:
            printf("\nHola Amigo\n");
            break;

        case 2:
            printf("\nHello Friend\n");
            break;

        case 3:
            printf("\nSalut...\n");
            break;

        case 4:
            printf("\nHallo...\n");
            break;

        default:
            printf("\n Opcion ingresada no valida\n");
            break;
    }

    return 0;
}
