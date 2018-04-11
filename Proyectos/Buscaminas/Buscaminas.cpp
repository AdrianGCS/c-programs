#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 10
#define minas 15

void PreguntarDif(int *Dificultad){
    char dificultad;

    printf("Buenos dias Usuario, seleccione un el nivel de dificultad con el que quiere jugar \n");
    printf("Facil \n Normal\nDificil\n");
    scanf("%c",&dificultad);


    switch(dificultad)
    {
        case 'F':
            *Dificultad=1;
            break;
        case 'N':
            *Dificultad=2;
            break;
        case 'D':
            *Dificultad=3;
            break;
        default:
            printf("Error, fallo al insertar la dificultad \n");
            *Dificultad=0;
    }

}

int main(){

    int Datos[N][N];
    int Lminas[minas];
        int Dificultad;

    bzero(Datos);
    srand(time(NULL));
    PreguntarDif(&Dificultad);

    return EXIT_SUCCESS;
}
