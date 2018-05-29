#include <stdio.h>
#include <stdlib.h>

void imprime(char* letra){

    putchar(*letra);

    if( *(letra+1)!='\0')
        imprime(letra+1);
}

int main()
{
    char frase[]="dabale arroz a la zorra el abad";
    char *letra = frase;
    imprime(letra);

    return EXIT_SUCCESS;
}
