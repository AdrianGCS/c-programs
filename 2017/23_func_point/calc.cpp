#include <stdio.h>
#include <stdlib.h>

#define N 16
#define MAX 0x100

int error = 0;
const char *mssg[] = {
    "Todo OK.",
    "Pila vacía.",
    "Pila llena."
};

typedef struct {
    char nombre[N];
    double (*op)(double, double);
} Operacion;

typedef struct {
    int data[MAX];
    int cima;
} Pila;


enum {
    suma,
    resta,
    multi,
    division,
    OPERA
};

bool push(int dato, Pila *pila){
    if (pila->cima >= MAX){
        error = 2;
        return false;
    }
    error = 0;
    pila->data[pila->cima++] = dato;
    return true;
}

int pop(Pila *pila) {

    if (pila->cima == 0){
        error = 1;
        return 0;
    }
    error = 0;
    return pila->data[--pila->cima];
}

double sum(double op1, double op2) { return op1 + op2; 
}
double res(double op1, double op2) { return op1 - op2; }
double mul(double op1, double op2) { return op1 * op2; }
double div(double op1, double op2) { return op1 / op2; }

int main(){

    Pila op, datos;
    double op1, op2;
    char opera;
    double s; 
   
    Operacion catalogo[] = {
        {"suma",  &sum},
        {"resta", &res},
        {"multiplicacion", &mul},
        {"division", &div}
    };
for(int a=0; a<10; a++){
    printf("Operando 1: ");
    scanf(" %lf", &op1);
    printf("\n");
    printf("Mete operador: ");
    scanf(" %c", &opera);

    printf("\n");
    printf("Operando 2: ");
    scanf(" %lf", &op2);
  

    push(op2, &datos);
    push(op1, &datos);
    

    switch(opera) {
        case '+':
            push(suma, &op);
            printf("%.2lf\n", sum(op1, op2));
            break;
        case '-':
            push(resta, &op);
            printf("%.2lf\n", res(op1, op2));

            break;
        case '*':
            push(multi, &op);
            printf("%.2lf\n", mul(op1, op2));

            break;
        case '/':
            push(division, &op);
            printf("%.2lf\n", div(op1, op2));

            break;
        default:
            printf("+ - * /");
            break;
    }
    
    pop(&op);
}
 pop(&datos);

   return EXIT_SUCCESS;
}
