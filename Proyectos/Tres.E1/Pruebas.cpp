#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define Num 4
#define total 3
#define Num2 2

int main(){
     	
    int lugar[total][total]=
    {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };
    int ganar=0;
    int comprobar[total]=
    {0,0,0};
    int valor1 ;
    int valor2;


for (int repeticion = 0; repeticion < Num2; ++repeticion){
     		valor1==0;
     		valor2==0;
     	     for (int contDiagonal = 0; contDiagonal < total; ++contDiagonal)
     	     {
                    if (repeticion==0 and contDiagonal>0)
                    {
                    	valor1+=1;
                    	valor2+=1;
                    }
            		if(repeticion==1)
            			if (contDiagonal==0)
            			{
            			valor1==0;
            			valor2==2;
            			}
            			else{
            				valor1+=1;
            				valor2-=1;
            			}

                    if(lugar[valor1][valor2]==1)
                        comprobar[contDiagonal]=1;
                    else
                        if(lugar[valor1][valor2]==Num2)
                            comprobar[contDiagonal]=2;
                        else
                            comprobar[contDiagonal]=0;
                if(comprobar[0]==1 or 2 ){
                    if(comprobar[0]==comprobar[1] and comprobar[0]!=0)
                        if(comprobar[0]==comprobar[2])
                            ganar=comprobar[0];}
                    }
                }
printf(" %i" ,ganar);

    return EXIT_SUCCESS;
}
