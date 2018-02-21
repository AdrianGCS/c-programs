#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fila = 0, agrupaciones = 0, agrupacion=0;
    int mirada;
    bool fin = false;
        double nuevo_num;
    double *cadena = NULL;
    int filas_total;

    printf("Tu cadena \n\n");

    do{
        scanf(" %lf", &nuevo_num);
        if (fila == 0)
            filas_total++;
        fila++;
        if (fila <= filas_total){
            cadena = (double *) realloc(cadena,(agrupacion*filas_total+fila) * sizeof(double));
            *(cadena+fila*agrupacion+filas_total-1) = nuevo_num;
        }
        mirada = getc(stdin);
        if (mirada == '\n'){
            mirada = getc(stdin);
            fila ++;
            if (mirada == '\n')
                fin = true;
            else{
                agrupacion = 0;
                for (int c=agrupaciones+1; c<agrupacion; c++){
                    cadena = (double *) realloc (cadena,(fila * agrupaciones + c) *sizeof(double));
                    *(cadena+fila*agrupacion+c-1) = 0.;
                }
            }
        }
        ungetc(mirada, stdin);
    }while(!fin);

    for (int f = 0; f<fila; f++){
        for (int c=0; c<agrupacion; c++)
            printf("%7.2lf", *(cadena+c+f*agrupacion));
        printf("\n");
    }

return EXIT_SUCCESS;
}
