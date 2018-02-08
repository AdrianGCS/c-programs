#include <stdio.h>
#include <stdlib.h>


#define N 2
#define M 3
int main()
{
    double A[N][N]={
        {3,4},
        {7,9},
    };
    double B[M][N]={
        {2,3},
        {3,4},
        {6,7},
    };
    double r [M][N];
    for(int i= 0; i < M; i++ )
        for(int K=0; K<N; K++)
            r[i][j]+=A[i][K]*B[K][j];
    for(int x=0,x<M;x++)
        for (int y=0; y<N;y++)
            printf(" %lf \n", r[x][y]);



    return EXIT_SUCCESS;
}
