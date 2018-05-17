#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define N 3
#define VMAX 9
#define DELTA_T 0.001


typedef struct{
    double X = 0;
    double Y = 0;
}Vector;

typedef struct{
    Vector Posicion;
    Vector Velocidad;
    Vector Aceleracion;
    void (*puntero)();
}Obj;

void N1 (){
        printf ("Funcion1");
}

void N2 (){
        printf ("Funcion2");
}

void N3 (){
        printf("Funcion3");
}


void iniciar(Obj que[N]){
    for (int i=0; i<N; i++) {
        que[i].Posicion.X = 0;
        que[i].Posicion.Y = 0;
        que[i].Velocidad.X = rand() % VMAX + 1.;
        que[i].Velocidad.Y = rand() % VMAX + 1.;

        que[i].Aceleracion.Y = -9.8;
        que[i].Aceleracion.Y =  - rand() % 10 + 0;
        if(i==0)
            que[i].puntero = &N1;
        else
            if(i==1)
                que[i].puntero = &N2;
            else
                que[i].puntero = &N3;

    }
}
void actualizar(Obj Pos[N]){
    for (int i=0; i<N; i++){
        Pos[i].Velocidad.X+=(Pos[i].Aceleracion.X * DELTA_T);
        Pos[i].Velocidad.X+=(Pos[i].Aceleracion.X * DELTA_T);
        Pos[i].Posicion.X+=(Pos[i].Aceleracion.X * DELTA_T);
        Pos[i].Posicion.X+=(Pos[i].Aceleracion.X * DELTA_T);
        Pos[i].puntero;
    }
}


int main(){
    Obj Imagen[N];
    srand(time(NULL));
    iniciar(Imagen);
    actualizar(Imagen);


    return EXIT_SUCCESS;
}
