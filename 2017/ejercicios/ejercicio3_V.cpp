#include <stdio.h>
#include <stdlib.h>

int main()
{
   // int N = 0;
    int L = 6;
   // printf("dime el largo del lado\n");
   // scanf(" %i", &N );
    for(int tri = 0; tri < L+6; tri++)
    {
        for (int tri2 = 0;tri2 < L-1 ;tri2++)
            printf("*");
      printf("\n");
      L=L-1;
    }
    return EXIT_SUCCESS;
}
