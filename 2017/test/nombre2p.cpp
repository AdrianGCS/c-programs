

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nombre[30];
  char apellido[34];
  printf("Dime tu nombre \n");
  scanf(" %s", nombre);
  scanf(" %s", apellido);
  printf("Tu nombre es %s  %s \n", nombre, apellido);

    return EXIT_SUCCESS;
}
