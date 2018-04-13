#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 10
#define minas 30

void PreguntarDif(int *Dificultad){
    char dificultad;
//este apartado se encarga de determinar la dificultad de la partida
    do{
        printf("Buenos dias Usuario, seleccione un el nivel de dificultad con el que quiere jugar \n");
        printf("Facil \nNormal\nDificil\n");
        dificultad=getchar();
        switch(dificultad){
            case 'f':
                dificultad='F';
                break;
            case 'n':
                dificultad='N';
                break;
            case 'd':
                dificultad='D';
                break;
            default:
                break;
        }
        switch(dificultad)
        {
            case 'F':
                *Dificultad=3;
                break;
            case 'N':
                *Dificultad=2;
                break;
            case 'D':
                *Dificultad=1;
                break;
            default:
                printf("Error, fallo al insertar la dificultad \n ,");
                *Dificultad=0;
        }
    }while(*Dificultad==0);
}


int main(){

    int Datos[N][N];
    int Lminas[minas];
    int Dificultad;
    int temporal;

    bzero(Datos,sizeof(Datos));
    bzero(Lminas,sizeof(Lminas));
    PreguntarDif(&Dificultad);

//Este apartado determina la posición de las minas,tiene en cuenta la dificultad
    srand(time(NULL));
    for(int W=0;W<minas/Dificultad;W++){
      do{
      temporal=rand() % 100 + 1;
      for(int Z=0;Z<=W;Z++)
          if(Lminas[Z]==temporal)
              temporal=101;
      if(temporal<101)
          Lminas[W]=temporal;

      }while(temporal==101);
    }
    printf("%i", Dificultad);

    return EXIT_SUCCESS;
}
