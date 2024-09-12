#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion=0;

    printf("\n  ***** Saludos *****  \n\n Escoge alguna opcion \n| 1. |  Saludame \n| 2. |  Despidete \n| 3. |  Dime Hola \n| 4. |  Dime Adios \nIngresa tu opcion: ");
    scanf("%d",&opcion);

    switch(opcion)
    {
        case 1:

        case 3:
            printf("\nHola Amigo\n");
        break;

        case 2:

        case 4:
            printf("\nAdios Amigo\n");
            break;
        default:
            printf("\nOpcion no valida\n");

    }
    return 0;
}
