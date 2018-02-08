#include "stdio.h"
#include "stdlib.h"
#include <cstdlib>
#define N 2
#define M 3

int main()
{
    double x1, y1, r1, x2, y2, r2;

    printf("Introduce la x de la primera ecuacion.\n");
    scanf(" %lf", &x1);
    printf("Introduce la y de la primera ecuacion.\n");
    scanf(" %lf", &y1);
    printf("Introduce el resultado de la primera ecuacion.\n");
    scanf(" %lf", &r1);
    printf("Introduce la x de la segunda ecuacion.\n");
    scanf(" %lf", &x2);
    printf("Introduce la y de la segunda ecuación.\n");
    scanf(" %lf", &y2);
    printf("Introduce el resultado de la segunda ecuacion.\n");
    scanf(" %lf", &r2);

    double m[N][M] = {
        { x1,y1,r1 },
        { x2,y2,r2  } };

    double antigua[N][M] = {
        { x1,y1,r1  },
        { x2,y2,r2  } };;

    for (int X = 0; X < N; X++)
    {
        for (int i = 0; i < M; i++)
        {
            if (X==0)
                m[X][i] = m[X][i] * antigua[1][0];
            else
                m[X][i] = m[X][i] * antigua[0][0];
        }
    }
    for (int X = 0; X < N; X++)
    {
        for (int i = 0; i < M; i++)
        {
            if (X == 0)
                m[X][i] = m[X][i] - m[X + 1][i];
            else
                m[X][i] = m[X][i] - m[X - 1][i];
        }
    }
    double Y = m[0][2] / m[0][1];
    double X = (antigua[0][2] - Y*antigua[0][1])/antigua[0][0];
    printf(" el resultado es que Y es %lf \n", Y);
    printf(" el resultado es que X es %lf \n", X);
    return 0;
}

