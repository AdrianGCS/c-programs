#include <stdio.h>
#include <stdlib.h>
#define N 2
int main()
{
    double E[N][3]={
        {2,3,4},
        {4,-5,7},
    };
    double X;
    double Y;
    double D1 = E[0][0];
    for (int f=0;f<2;f++)
        for(int a=0;a<3;a++)
            E[f][a]=E[f][a]/D1;
    double Va1 = E[0][0];
    double Va2 = E[1][0];
    double Va3 = E[0][1];
    double Va4 = E[1][1];

      X=E[0][2]/(Va1+(-Va2));
      Y=E[1][2]/(Va3+(-Va4));
      printf("%lf",X);
      printf("%lf",Y);




    //printf("Dime el sistema de ecuaciones \n");
    //for(int i=0;i<N;i++)
    //for(int R=0;R<=N;R++)
    //scanf(" %lf", &a[i][R]);
    //printf(" %lf",a[1][0]);
    return EXIT_SUCCESS;
}
