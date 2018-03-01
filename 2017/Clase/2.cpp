#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x256

int main(){
  char num[N];
  char *puntero = NULL;
  int longitud;

  printf("Dime tu nombre \n");
  scanf(" %s",num );

  longitud = strlen(num);
  puntero = (char*) malloc(longitud+1);
  strcpy(puntero,num);





  free(puntero);
    return EXIT_SUCCESS;
}
