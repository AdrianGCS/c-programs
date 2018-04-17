#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 20
#define minas (N*N)


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
                *Dificultad=30;
                break;
            case 'N':
                *Dificultad=20;
                break;
            case 'D':
                *Dificultad=10;
                break;
            default:
                printf("Error, fallo al insertar la dificultad \n ,");
                *Dificultad=0;
        }
    }while(*Dificultad==0);

}

void Dibujar(int TemDatos[][N]){
    system("clear");
    for(int i=0;i<N;i++){
        for(int x=0;x<N;x++)
            if(TemDatos[i][x]==0)
                printf("░ ");
    printf("\n \n");
    TemDatos[0][1]=1;
    }

}

int main(){

    int Datos[N][N];
    int TemDatos[N][N];
    int Lminas[(minas*30)/100];
    int Dificultad;
    int temporal;

    bzero(Datos,sizeof(Datos));
    bzero(Lminas,sizeof(Lminas));
    bzero(TemDatos,sizeof(TemDatos));
    PreguntarDif(&Dificultad);

//Este apartado determina la posición de las minas,tiene en cuenta la dificultad
    srand(time(NULL));
    for(int W=0;W<(minas*Dificultad)/100;W++){
      do{
      temporal=rand() % 100 + 1;
      for(int Z=0;Z<=W;Z++)
          if(Lminas[Z]==temporal)
              temporal=101;
      if(temporal<101)
          Lminas[W]=temporal;

      }while(temporal==101);
    }

    Dibujar(TemDatos);

    return EXIT_SUCCESS;
}
