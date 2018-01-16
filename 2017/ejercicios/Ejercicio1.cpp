#include <stdio.h>
#include <stdlib.h>

double apuntar(double *p_op1, double *p_op2)
{printf("Dame un numero \n");
scanf(" %lf", p_op1);
printf("Dame otro numero\n");
scanf(" %lf", p_op2);}


double suma(double op1, double op2){return op1+op2;}
int main()
{

    double op1;
    double op2;
    apuntar(&op1, &op2);
    printf(" %lf",suma(op1,op2));

    return EXIT_SUCCESS;
}
