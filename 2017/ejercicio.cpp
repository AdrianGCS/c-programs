#include "stdio.h"
#include "stdlib.h"
#define N 3
  void paco(int i,int a)
    {
      if (i <= a - 1 || i >= a * 2 && i <= a * N - 1)
          printf("*");
      else
          printf(" ");
    }
  void paco_inv(int i, int a)
    {
      if (i >= a && i <= a * 2-1 )
      {
          printf("*");
      }
      else
          printf(" ");
    }
  int main(){
    int a = 0;
    int num = 0;
    printf("Dime un numero \n");
    scanf(" %i", &a);
    //printf("numero de cuadrados en parejas de 3 \n");
    //scanf(" %i", &num);
    for ( int d=1; d<= a*N; d++)
      {
        if (d<=a || d>a*2)
          {
          //for (int u = 0; u < num; u++)
          //{
            for (int i = 0; i <= a * N; i++) //N+2 para parejas de 3
              paco(i, a);
            //if (u%3)
            printf(" \n");
          //}
          }
        else
          {
          //for (int v = 0; v < num; v++)
            //{
              for (int i = 0; i <= a * N ; i++)//N+2 para parejas de 3
                    paco_inv(i, a);
              //if (v%3)
              printf(" \n");
            //}
          }
        }
      // system("pause");
  return 0;
  }
