#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Num 4
#define total 3
//#define Num2 2

int main(){
    int lugar[total][total]=
    {   {0,0,0},
        {0,0,0},
        {0,0,0}};
    int jugador = 0;
    int temporal = 0;
    int contador=0;
    int error=1;
    int ganar=0

  while(ganar>0){
    while(error=0){
        error=0;
        if(jugador>=1){
            printf("dame un numero \n");
            scanf("%i", &temporal);
            if(temporal>=0 or temporal<=10)
                error=1;
            if(error=0 and temporal>0 and temporal<=3)
                if(lugar[0][temporal-1]==0)
                    lugar[0][temporal-1]=temporal;
                else
                    error=1;
            else
                if(error=0 and temporal>=4 and temporal<=6)
                    if(lugar[1][temporal-4]==0)
                        lugar[1][temporal-4]=temporal;
                    else
                        error=1;
                else
                    if(error=0 and temporal>=6 and temporal<=9)
                        if(lugar[2][temporal-6]==0)
                            lugar[2][temporal-7]=temporal;
                        else
                            error=1;
        }
    }



    //Este apartado se encarga de dibujar la matriz es decir "El tres en raya"
    for(int y = 0; y < total;y++ ){
        //Este apartado dibuja 2 de las 3 lineas
        for(int x = 0; x < Num; x++)
            for(int x = 0; x < total; x++)
                printf("*");
        printf("*");
        printf("\n");
        //Este se encarga de dibujar los espacios entre las lineas
        for(int W = 0 ; W < total;W++ ){
            for(int z = 0; z < total; z++){
                printf("* ");
                //esto metera en el espacio entre líneas 2 una X , una O o un espacio
                if(W == 1){
                    if(lugar[y][z] == 1){
                        printf("X");}
                    else
                        if(lugar[y][z] == 2)
                            printf ("O");
                        else
                            contador++;
                    printf("%i", contador);
                }
                else
                    printf(" ");
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        //dibuja la línea final
        if(y == total-1){
            for(int x = 0; x < Num; x++)
                for(int x = 0; x < total; x++)
                    printf("*");
            printf("*");

            printf("\n");}

    }
  }

    return EXIT_SUCCESS;
}
