#include <stdio.h>
#include <stdlib.h>

int main()
{
    char jugador1[32];
    char con1[64];
    char jugador2[32];
    char con2[64];
    char temp[64];
    printf("Vamos a jugar a un juego , este juego solo lo pueden jugar 2 jugadores \n asi que antes de empezar vamos a determinar el nombre y contraseña de cada jugador\n");
    printf("Usuario 1 dime tu nombre \n");
    scanf(" %[^\n]", jugador1);
    printf("Ahora %s dime tu contraseña \n", jugador1);
    scanf(" %[^\n]", con1);
    printf("Ahora pasemos al usuario 2, dime tu nombre usuario2 \n");
    scanf(" %[^\n]", jugador2) ;
    printf("Ahora %s dime la contrasela que quieres utilizar \n", jugador2);
    scanf(" %[^\n]",con2);
    c=getche();

    return EXIT_SUCCESS;
}
