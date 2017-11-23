
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [16];
    int num;
    char Hexadecimal[255];

    printf ("Entero: ");
    scanf(" %i", &num);
    scanf(" %s", nombre);
    printf("[%i] => %s.\n", num, nombre);

    printf ("Hexadecimal : ");
    scanf (" %[0-9a-fA-F]", Hexadecimal);
    printf(" %s \n", Hexadecimal );

    scanf(" %[^a-f]", Hexadecimal);
    scanf(" %[^\n]", nombre);
    gets(nombre, 16, stdin) ;

    scanf ("%i/%i/%*i" &dia, &mes,)
    return EXIT_SUCCESS;
}
