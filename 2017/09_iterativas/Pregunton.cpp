#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#define MAX 3
int main()
{
  int num1=0;
  int oportunidad = MAX;
  do{
      __fpurge(stdin);
      printf("Dame un numero del 1 al 3 \n");
      scanf("%i", &num1);
      oportunidad--;
  }while((num1<1 || num1>3) && oportunidad);
  if (oportunidad == 0)
      printf("Error PEBKAC\n");
    return EXIT_SUCCESS;
}
