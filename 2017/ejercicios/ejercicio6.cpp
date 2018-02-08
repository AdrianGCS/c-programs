#include <stdio.h>
#include <stdlib.h>

#define N 3

//void gaus(){
//    int ap=a[0][0];
//    int bp=a[1][0];
//    int cp=a[2][0];
//    for(int N=0; N<=2; N++)
//      a[0][N]=a[0][N]/a[0][0];

//    for(int C=0; C<=2; C++)
//      a[1][C]=(a[0][C]*bp)-a[1][C];

//    for(int E=0; E<=2; E++)
//      a[2][E]=(a[0][E]*cp)-a[2][E];

//    int dp= a[2][1];

//   for(int D=0; D<=2; D++)
//   a[2][D]=(a[1][D]*dp)-a[2][D];

//  printf("%lf",a[2][2]);








//}
int main(){
    int sum = 0;
    double a[N][N] = {
        {6, 9, 3},
        {8, 9, 64},
        {43, 5, 12}
    };

    for (int d=0; d<N; d++){
        int diag = 1;
        for (int e=0; e<N; e++)
            diag *= a[e][(d+e)%N];
        printf("diag = %lf\n", diag);
        sum +=diag;
    }

    for (int d=0; d<N; d++){
        int diag = 1;
        for (int e=0; e<N; e++)
            diag *= a[(e+d)%N][N-1-e];
        printf("diag = %lf\n", diag);
        sum -=diag;
    }

    printf("Determinante = %lf\n", sum);

    double ap=a[0][0];
    double bp=a[1][0];
    double cp=a[2][0];
    for(int P=0; P<=2; P++)
        a[0][P]=a[0][P]/ap;
    for(int C=0; C<=2; C++)
        a[1][C]=(a[0][C]*bp)-a[1][C];
    for(int E=0; E<=2; E++)
        a[2][E]= a[0][E]*cp-a[2][E];
    double dp= a[2][1];
    for(int D=0; D<=2; D++)
        a[2][D]=(a[1][D]*dp)-a[2][D];
    printf("%lf",a[2][2]);


    return EXIT_SUCCESS;
}
