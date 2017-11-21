
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double lado;
    double area, perimetro;
    system("toilet --gay -fpagga CUADRADO");
    /*entrada de datos */

    printf("Lado: ");
    scanf(" %lf", &lado );

    /*Calculos*/

    area = lado * lado ;
    perimetro = 4 * lado ;

    /*salida de datos*/
    printf( "Area : %lf\n"
            "Perimetro: %lf\n",
            area, perimetro);

    return EXIT_SUCCESS;
}
