#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rojo;
    int amarillo;
    int azul;

    printf("El color tiene rojo \n");
    scanf("%i", &rojo);
    printf("El color tiene amarillo \n");
    scanf("%i", &amarillo);
    printf(" El color tiene azul \n");
    scanf("%i", &azul);

    if(rojo >= 1 && azul == 0 && amarillo==0)
        printf("El color es rojo \n");
    if(rojo == 0  && azul >= 1 && amarillo==0)
        printf("El color es azul \n");
    if(rojo == 0  && azul == 0 && amarillo >=1)
        printf("El color es amarillo \n");
    if(rojo == 0  && azul >= 1 && amarillo >=1)
        printf("El color es verde \n");
    if(rojo >= 1  && azul == 0 && amarillo >=1)
        printf("El color es naranja \n");
    if(rojo >= 1  && azul >= 1 && amarillo ==0)
        printf("El color es morado \n");
    if(rojo >= 1  && azul >= 1 && amarillo >=1)
        printf("El color es blanco \n");
    if(rojo == 0  && azul == 0 && amarillo == 0)
        printf("El color es Negro \n");



    return EXIT_SUCCESS;
}
