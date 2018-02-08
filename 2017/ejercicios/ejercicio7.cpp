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
 for (int j=0; j < N; j++)
    for(int i= 0 ; i < M; i++)
      for(int K=0; K<N; K++){
          int i2=i;
          if(j>0)
              i2=i2+1;
          r[i][j]+=A[i][K]*B[K][i2];}
  printf(" %lf \n", r[2][1]);




    return EXIT_SUCCESS;
}
