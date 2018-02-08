#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=3;
    int fila=0;
    int columnas=0;
  for(int f=0 ; f<numero;f++){
    for(int r=0; r<numero;r++)
    {
      if( fila - columnas == 0)
          printf("*");
      else
          printf(" ");
    for (int w=0;w<1;w++){
      if(columnas>=1)
          printf(" *");
    }
      columnas++;
    }
    printf("\n");
    columnas=0;
    fila++;
  }

    return EXIT_SUCCESS;
}
