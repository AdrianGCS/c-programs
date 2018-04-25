#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Num 4
#define total 3
#define Num2 2



int main(){
    int lugar[total][total]=
    {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
    int jugador = 0;
    int temporal = 0;//temporal guarda la posicion donde va a jugar
    int contador=0;
    int error=0;
    int ganar=0;
    int comprobar[total]=
    {0,0,0};
    int valor1;
    int valor2;
    int posicion=0;

    do{
        //queremos repita todo el programa hasta que tenga un ganador o tablas
        do{
            if(jugador>=1){
                //La idea es que la primera vez que se inicie el programa no pregunte el numero
                error=0;
                printf("dame un numero \n");

                while(!scanf(" %i", &temporal))
                {
                    printf("Dije que metieras un numero\n");
                    getchar();
                }



                if(temporal<=0 or temporal>=10){
                    error=1;
                }
                if(temporal<=3 && error==0)
                    if(lugar[0][temporal-1]==0)
                    {
                        lugar[0][temporal-1]=jugador;
                        error=0;
                    }
                //insertamos el valor del jugador(1 o 2) en el lugar indicado por el jugador
                    else
                        error=1;
                else
                    if(error==0 and temporal<=6)
                        if(lugar[1][temporal-4]==0)
                        {
                            lugar[1][temporal-4]=jugador;
                            error=0;
                        }
                        else
                            error=1;
                    else
                        if(error==0 && temporal<=9)
                            if(lugar[2][temporal-7]==0)
                            {
                                lugar[2][temporal-7]=jugador;
                                error=0;
                            }
                            else
                                error=1;
            }
            if(error!=0)
                printf("Hay un error \n");
        }while(error==1);
        system("clear");

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
                            printf("X");
                            posicion++;
                        }
                        else
                            if(lugar[y][z] == 2){
                                printf ("O");
                                posicion++;
                            }
                            else{
                                contador++;
                                posicion++;
                                printf("%i", posicion);}
                    }
                    else
                        printf(" ");
                    printf(" ");
                }
                printf("*");
                printf("\n");
            }
            if(y == total-1){
                for(int x = 0; x < Num; x++)
                    for(int x = 0; x < total; x++)
                        printf("*");
                printf("*");
                printf("\n");}
        }

        //Este apartado se encarga de comprobar como van
        for(int z=0; z<Num2;z++){
            for(int Vertical = 0;Vertical<total;Vertical++){
                for (int Horizontal = 0 ;Horizontal<total;Horizontal++){
                    if (z==0)
                    {
                        valor1=Vertical;
                        valor2=Horizontal;
                    }
                    else{
                        valor1=Horizontal;
                        valor2=Vertical;
                    }

                    if(lugar[valor1][valor2]==1)
                        comprobar[Horizontal]=1;
                    else
                        if(lugar[valor1][valor2]==Num2)
                            comprobar[Horizontal]=2;
                        else
                            comprobar[Horizontal]=0;}
                if(comprobar[0]==1 or 2 )
                    if(comprobar[0]==comprobar[1] and comprobar[0]!=0)
                        if(comprobar[0]==comprobar[2])
                            ganar=comprobar[0];
            }
        }
        for (int z = 0; z < Num2; ++z)
        {
            valor1=-1;
            valor2=-1;

            for (int Vertical = 0; Vertical < total; ++Vertical)
            {
                if (z==0){
                    valor1+=1;
                    valor2+=1;
                }
                else{
                    if (Vertical==0)
                    {
                        valor1=3;
                    }
                    valor1-=1;
                    valor2+=1;
                }

                if(lugar[valor1][valor2]==1)
                    comprobar[Vertical]=1;
                else
                    if(lugar[valor1][valor2]==Num2)
                        comprobar[Vertical]=2;
                    else
                        comprobar[Vertical]=0;

            }
            if(comprobar[0]==1 or 2 )
                if(comprobar[0]==comprobar[1] and comprobar[0]!=0)
                    if(comprobar[0]==comprobar[2])
                        ganar=comprobar[0];
        }
        if(ganar==0)
            if(contador==0)
                ganar=3;
        posicion=0;
        contador=0;
        jugador+=1;
        if(jugador==3)
            jugador=1;


    }while(ganar<=0);
    if(ganar<3)
        printf("El ganador es el jugador %i", ganar);
    else
        printf("Terminamos en tablas");

    return EXIT_SUCCESS;
}
