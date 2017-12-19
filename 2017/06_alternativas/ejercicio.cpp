#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bit1;
    int bit2;

    printf ("usuario dame el bit 1 \n");
    scanf(" %i", &bit1);
    if(bit1 >=1)
        bit1=1;
      else
        bit1=0;
    printf ("usuario dame el bit 2 \n");
    scanf(" %i", &bit2);
    if(bit2 >=1 )
        bit2=1;
    else
        bit2=0;
    if (bit1 == 0)
        if(bit2 == 0)
            printf("El numero es 0 \n");
        else
            printf("El numero es 2 \n");
    else
      if(bit2==0)
          printf("El numero es 1 \n");
      else
          printf("El numero es 3 \n");

    return EXIT_SUCCESS;
}
