#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Numero:");
    scanf("%i", &numero);

    if(numero % 2 == 0){
        printf("el numero %i es par\n", numero);
        printf("y los pares le gustan \n");
    } else
        printf("el numero %i no es par\n", numero);
      printf("Y colorin colorado este cuento se ha \n");

    return EXIT_SUCCESS;
}
