#include <stdio.h>
#include <stdlib.h>
/* 	Este programa lee una opción de menú e imprime un saludo en un determinado idioma según la preferencia del usuario.
	Entrada: opción
	Salida: saludo en un idioma específico */

int main()
{
    int opcion=0;

    printf("\n  ***** Saludos en Varios Idiomas *****  \n\n En que idioma quieres que te salude ? \n| 1. |  Español \n| 2. |  Ingles \n| 3. |  Frances \n| 4. |  Aleman \nIngresa tu opcion: ");
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
