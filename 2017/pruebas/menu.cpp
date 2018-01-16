#include <stdio.h>
#include <stdlib.h>


void menu (){unsigned opcion;
    scanf("%u",&opcion);
    printf("la opcion es %u",opcion);}
int main()
{   
    printf("\t1 1.Opcion \n" "\t2 2.Opcion \n" "\t3 3.Opcion \n" "\tOpción");
    menu();

    return EXIT_SUCCESS;
}
