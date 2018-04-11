#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

#define N 0x06

int main()
{
    char nombre[N];
    int lista[N];
    char nom [N] = "pepe";
    char no [N] = {'p','e','p','e','\0'};
    nom[3] = 'a'; // Despues de inicializar hay que ir celda a celda

    printf("Ocupa: %lu bytes.\n", sizeof(nombre));
    printf("Ocupa: %Xh bytes.\n",(int) sizeof(nombre));
    printf("Ocupa: %lu bytes.\n", sizeof(nombre));
    printf("Ocupa: %lu bytes.\n", sizeof(nombre) / sizeof (int));

    printf("%i", nombre[0]);
    printf("%i", nombre[1]);
    printf("%i", nombre[2]);
    printf("%i", nombre[3]);
    printf("%i", nombre[4]);
    printf("%i", nombre[5]);
    printf("\n");
    printf("%s\n", nombre);
    bzero(lista, sizeof(lista));
    memset(lista + 2,3,2);
    printf("%x",lista[0]);
    printf("%x",lista[1]);
    printf("%x",lista[2]);
    printf("%x",lista[3]);
    printf("%x",lista[4]);
    printf("%x",lista[5]);
    printf("\n");
    printf("%s\n", nombre);
    fgets(nombre, N , stdin);
    sprintf(nom ,"Hola %s", nombre);
    printf ("%s\n",nom);

    return EXIT_SUCCESS;
}
