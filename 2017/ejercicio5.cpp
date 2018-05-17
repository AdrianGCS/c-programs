#include <stdio.h>
#include <stdlib.h>

int main()
{
    char N;
    int num = 0;
    FILE *tubo;

    tubo = fopen("Libro.txt", "r");
    while(N != EOF){
        N=fgetc(tubo);
        if(N=='x' or N == 'X')
            num++;
    }


    fclose(tubo);
    printf("%i \n",num);

    return EXIT_SUCCESS;
}
