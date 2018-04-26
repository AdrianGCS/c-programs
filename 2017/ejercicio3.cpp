#include <stdio.h>
#include <stdlib.h>

#define N 0x100

typedef struct{
    int dato=0;
    int lugar[N];
}estructura;

void push(int datos,estructura *actual){
    actual->lugar[actual->dato]=datos;
    actual->dato++;
}
void pop(estructura *actual){
    actual->dato--;
    printf(" %i \n", actual->lugar[actual->dato]);

}


int main()
{
    estructura Perfecta;

    push(8,&Perfecta);
    push(2,&Perfecta);
    push(7,&Perfecta);
    push(34,&Perfecta);
    pop(&Perfecta);
    pop(&Perfecta);
    pop(&Perfecta);


        return EXIT_SUCCESS;
}
