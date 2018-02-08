#include <stdio.h>
#include <stdlib.h>
#define N 20
int main()
{
    int array[N];
    array[0]=1;
    array[1]=1;
    int d = 0;
    int e = 1;
    int f = 2;
    for(int a = 0; a >= N-4;a++)
    {
        array[f]=array[d]+array[e];
        d++;
        e++;
        f++;

    }
    d=0;
    for(int b = 0; b >=N-4;b++){
        printf("%i", *array[d]);
        d++;
    }

    return EXIT_SUCCESS;
}
