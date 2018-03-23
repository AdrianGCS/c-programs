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
	    int temporal = 0;
	    int contador=0;
	    int error=0;
	    int ganar=0;
	    int comprobar[total]=
	    {0,0,0};
	    int *punteroA = NULL;
	    int *punteroB = NULL;
	
	    do{
	        //queremos repita todo el programa hasta que tenga un ganador o tablas
	        do{
	            //si error = 1 vuelve a preguntar
	            if(jugador>=1){ 
	                //La idea es que la primera vez que se inicie el programa no pregunte el numero
	                printf("dame un numero \n");
	                scanf("%i", &temporal);
	                //temporal guarda la posicion donde va a jugar
	                if(temporal<=0 or temporal>=10)
	                    error=1;
	                if(temporal<=3 && error==0)
	                    if(lugar[0][temporal-1]==0){
	                        lugar[0][temporal-1]=jugador;
	                        error=0; 
	                    }
	                //insertamos el valor del jugador(1 o 2) en el lugar indicado por el jugador
	                    else
	                        error=1;
	                else
	                    if(error==0 and temporal<=6)
	                        if(lugar[1][temporal-4]==0){
	                            lugar[1][temporal-4]=jugador;
	                            error=0;
	                        } 
	                        else
	                            error=1;
	                    else
	                        if(error==0 && temporal<=9)
	                            if(lugar[2][temporal-7]==0){
	                                lugar[2][temporal-7]=jugador;
	                                error=0;
	                            }
	                            else
	                                error=1;
	            }
	            if(error!=0)
	                printf("Hay un error \n");
	        }while(error==1);
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
	                            else{
	                                contador++;
	                                printf("%i", contador);}
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
	        //Este apartado se encarga de comprobar como van
	    for(int repeticion=0; repeticion<Num2; repeticion++)
	        for(int horizontal = 0;horizontal<total;horizontal++){
	                for (int vertical = 0 ;vertical<total;vertical++){
	                    if (repeticion ==0){
	                      punteroA=&horizontal;
	                      punteroB=&vertical;
	                    } 
	                    else{
	                        punteroA=&vertical;
	                        punteroB=&horizontal;
	                    }
	                    if(lugar[*punteroA][*punteroB]==1)
	                        comprobar[vertical]=1;
	                    else
	                        if(lugar[*punteroA][*punteroB]==Num2)
	                            comprobar[vertical]=2;
	                        else 
	                            comprobar[vertical]=0;
	                    }
	                if(comprobar[0]==1 or 2 )
	                    if(comprobar[0]==comprobar[1] and comprobar[0]!=0)
	                        if(comprobar[0]==comprobar[2])
	                            ganar=comprobar[0];}
	
	
	        if(ganar==0)
	            if(contador==0) 
	                ganar=3;
	        contador=0;
	        jugador+=1;
	        if(jugador==3)
	            jugador=1;;
	
	    }while(ganar<=0);
	    if(ganar<3)
	        printf("El ganador es el jugador %i", ganar);
	    else 
	        printf("Terminamos en tablas");
	        
	        free(punteroA);
	        free(punteroB);
	
	
	    return EXIT_SUCCESS;
	}
