#include <stdio.h>
#include <stdlib.h>

#define N 3

int main()
{
    int a [N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int D=0;
    int b[9];

    for (int desplaz=0; desplaz<N; desplaz++){
        for(int elem=0; elem<N; elem++){
            printf("%4i", a[elem%N][(desplaz+elem)%N]);
            b[D]=*a[elem%N][(desplaz+elem)%N];
                D=D+1;


        }
        printf("\n");
    }
    printf(" %i",b[0]);
return EXIT_SUCCESS;
}
